using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Player;
using Assets.Scripts.Tiles;
using UnityEngine;

public class Guard : MonoBehaviour {

    //Player animation state
    enum GuardMoveState
    {
        Stationary, Turning, Patrol
    }
    private Animator _animator;

    [Header("Tiles")] [SerializeField] private Tile _parentTile;
    [SerializeField] private Tile _latestTile;
    [SerializeField]private int _currentPuzzle = -1;
   

    [Header("Movement")]
    [SerializeField]
    private GuardMoveState _guardMoveState;
    [SerializeField]private float _moveSpeed;
    [SerializeField]private int _waitTime;
    [SerializeField]private int _patrolLength;
    [SerializeField]private List<Tile> _watchedTiles = new List<Tile>();
    [SerializeField]private List<Tile> _patrolTiles = new List<Tile>();
    private int _tilesWalked;



    [Header("Status")]
    [SerializeField]private bool _seeing;
    [SerializeField]private bool _initialized;
    [SerializeField]private int _direction;
    [SerializeField] private int _currentPatrolTile;
    private int _originalDirection;
    private int _patrolDirection;
    private Tile _originalTile;
    private bool _caughtPlayer;
    void Start()
    {
        _animator = GetComponent<Animator>();
        _guardMoveState = GuardMoveState.Patrol;
        _parentTile = GetComponentInParent<Tile>();
        transform.position = _parentTile.transform.position;
        _originalTile = _parentTile;
        _originalDirection = _direction;
        _direction = _parentTile.ReturnDirection();

    }

    // Use this for initialization
    public void InitializeGuard()
    {  
        _initialized = true;
    }
	
	// Update is called once per frame
    void Update()
    {


        //If the player has not been yet initalised or hasd no valid parent tile return
        if (_parentTile == null || !_initialized) return;

        transform.SetParent(_parentTile.transform);
        _currentPuzzle = _parentTile.ReturnPuzzleNumber();

        //If the guard is close to the parent tile speed them up
        if (HasReachedTile())
        {
        
            if (_caughtPlayer)
            {
                _caughtPlayer = false;
                StartCoroutine(CaughtPlayer());
              return;
            }
           

            SmoothMove(transform.position, _parentTile.transform.position, 3 * _moveSpeed);

            if (_parentTile.ReturnPatrol())
            {
                _guardMoveState = GuardMoveState.Patrol;
                if (_patrolTiles.Count <= 0)
                CreatePatrolRoute(_parentTile);
                FollowPatrolRoute();
              


            }
            else
            {
                //If not on patrol do the standard four tile shuffle
                DetermineDirection();
                    Move(_latestTile);
               
            }
            DetermineAnimationStatus();
          

        }
        else
        {
           
            SmoothMove(transform.position, _parentTile.transform.position, _moveSpeed);
        }
        SeeingCone();
    }

    //Guard waits in place
    private IEnumerator CaughtPlayer()
    {
        GameManager.Instance.Player._initialized = false;
        if (Camera.main.fieldOfView > 16)
        Camera.main.fieldOfView-= 0.4f;
        yield return new WaitForSeconds(1);
        GameManager.Instance.UiManager.SetFade(false);
        yield return new WaitForSeconds(2);
        GameManager.Instance.RestartFromCheckPoint();
        Camera.main.fieldOfView = 60;

    }

    private void AddPatrolTiles(Tile tile)
    {
        if (!_patrolTiles.Contains(tile))
        {
            _patrolTiles.Add(tile);
        }

        foreach (var neighbor in tile.ReturnNeighbors())
        {
            if (!neighbor.ReturnPatrol() || _patrolTiles.Contains(neighbor)) continue;
            _patrolTiles.Add(neighbor);

            AddPatrolTiles(neighbor);
        }
    }


    //Create a list with all the patrol tiles including the original tile
    private void CreatePatrolRoute(Tile tile)
    {
        if (!_patrolTiles.Contains(_parentTile))
        {
            _patrolTiles.Add(_parentTile);
        }

        switch (_direction)
        {
          
            case 0:
                AddPatrolTiles(_parentTile.North);
                break;
            case 1:
           
                AddPatrolTiles(_parentTile.South);
                break;
            case 2:
                AddPatrolTiles(_parentTile.West);
                break;
            case 3:
                AddPatrolTiles(_parentTile.East);
                break;
            case -1:
                foreach (var neighbor in _parentTile.ReturnNeighbors())
                {
                    if (!neighbor.ReturnPatrol() || _patrolTiles.Contains(neighbor)) continue;
                    _patrolTiles.Add(neighbor);

                    AddPatrolTiles(neighbor);
                }
                break;
        }


        //TEMP
        for (int i = 0; i < _patrolTiles.Count; i++)
        {
            _patrolTiles[i].GetComponentInChildren<TextMesh>().text = i.ToString();
        }
    }


    //Go from one tile to the other
    private void FollowPatrolRoute()
    {
        for (int i = 0; i < _patrolTiles.Count; i++)
        {
            if (_patrolTiles[i] == _parentTile)
            {
                _currentPatrolTile = i;
                break;
            }
        }
       
        //WHen you reach the last patrol tile
        if (_currentPatrolTile == _patrolTiles.Count - 1 && _patrolDirection != -1)
        {
            foreach (var neighbor in _patrolTiles[_currentPatrolTile].ReturnNeighbors())
            {

                if (neighbor == _patrolTiles[0])
                {
                    _currentPatrolTile = -1;
                    _patrolDirection = 1;
                    break;
                }
                //Otherwise double back
                _patrolDirection = -1;
            }

        }
        //BEgin the patrol 
        else if (_currentPatrolTile == 0 && _patrolDirection != 1)
        {
            foreach (var neighbor in _patrolTiles[0].ReturnNeighbors())
            {                
                if (neighbor == _patrolTiles[_patrolTiles.Count-1])
                {
                    _currentPatrolTile = _patrolTiles.Count;
                    _patrolDirection = -1;
                    break;
                }
                //Otherwise keep going
                _patrolDirection = 1;
            }
        }
       
      
        _currentPatrolTile += _patrolDirection;

        _latestTile = _patrolTiles[_currentPatrolTile];

        //If the next tile is blocked reverse direction
        if (_latestTile.IsBlocked())
        {
            _patrolDirection = -_patrolDirection;

            _currentPatrolTile += _patrolDirection;
            return;
         
        }
        _guardMoveState = GuardMoveState.Patrol;

        // Determine which direction to face
        if (_latestTile == _parentTile.North)
            _direction = 0;
        else if (_latestTile == _parentTile.South)
            _direction = 1;
        else if (_latestTile == _parentTile.West)
            _direction = 2;
        else if (_latestTile == _parentTile.East)
            _direction = 3;

        //Move to the latest tile 
        _parentTile.SetBlocked(false);
        _parentTile = _latestTile;
        _parentTile.SetBlocked(true);

    }

    //Checks if this is a valid tile to look at
    private void AddTile(List<Tile> seeeingList, Tile tile)
    {
        if (tile == null) return;
        seeeingList.Add(tile);
    }

    //Creates a cone with all the tiles the guard sees
    private bool CreateSeeingCone(Tile tile, int x, int y)
    {
        var tempTile = GameManager.Instance.MapGenerator.ReturnSpecificTile((int)tile.ReturnPosition().x + x, (int)tile.ReturnPosition().y + y);

        if (tempTile == GameManager.Instance.Player.ReturnParentTile())
        {
            _caughtPlayer = true;
            return false;
        }



        if (IsValidTile(tempTile))
        {
            AddTile(_watchedTiles, tempTile);
            return true;
        }
        return false;
    }



    //Switch direction
    private void Turn()
    {
        _guardMoveState = GuardMoveState.Turning;
        switch (_direction)
        {
            case 0:
                _direction = 1;
                break;
            case 1:
                _direction = 0;
                break;
            case 2:
                _direction = 3;
                break;
            case 3:
                _direction = 2;
                break;
        }
        
        _guardMoveState = GuardMoveState.Patrol;
    }

    //Determine which way to go
    private void DetermineDirection()
    {
            switch (_direction)
            {
                case 0:
                    _latestTile = _parentTile.North;
                    break;
                case 1:
                    _latestTile = _parentTile.South;
                break;
                case 2:
                    _latestTile = _parentTile.West;
                break;
                case 3:
                    _latestTile = _parentTile.East;
                break;
        }
    }

    //Move guard smoothly
    private void SmoothMove(Vector3 startPosition, Vector3 endPosition, float speed)
    {
        transform.position = Vector3.Lerp(startPosition, endPosition, speed * Time.deltaTime);
    }

    //Check if guard has reached parent tile
    private bool HasReachedTile()
    {
        return Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.4f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.4f;
    }

    //Determine if this tile can be moved into
    private static bool IsValidTile(Tile tile)
    {
        if (tile == null)
            return false;
        return !tile.IsBlocked();
    }

    //Guard waits in place
    private IEnumerator Wait()
    {       
        yield return new WaitForSeconds(_waitTime);
        Turn();
    }





    //Check if movement should happen to the tile and set whcih tile the player is directly looking at
    private void Move(Tile destination)
    {
        if (IsValidTile(destination))
        {
            //Treat the tile the player is on as a blocked tile
            _parentTile.SetBlocked(false);
            _parentTile = destination;
            _parentTile.SetBlocked(true);
            _currentPuzzle = destination.ReturnPuzzleNumber();
            //Increase the amount of tiles walked
            _tilesWalked++;

            //If the patrol length is met make the player wait
            if (_tilesWalked != _patrolLength) return;
            _guardMoveState = GuardMoveState.Stationary;
            StartCoroutine(Wait());
            DetermineDirection();
            _tilesWalked = 0;
        }
        else
        {
            //If the tile is blocked make the guard turn immidiately
            _guardMoveState = GuardMoveState.Turning;
            _tilesWalked = 0;
            Turn();
            DetermineDirection();
        }
    }

    //ResetGuard to its original location and direction
    public void ResetGuard()
    {
        _direction = _originalDirection;
        _initialized = false;
        _parentTile.SetBlocked(false);
        _parentTile = _originalTile;
        _parentTile.SetBlocked(true);
        transform.position = _parentTile.transform.position;
     
        InitializeGuard();
    }
//Creates a cone where the guard can see
    private void SeeingCone()
    {
        if (_watchedTiles.Count > 0)
        {
            foreach (var tile in _watchedTiles)
            {
                tile.GetComponentInChildren<SpriteRenderer>().color = new Color(1, 1, 1);
            }
            _watchedTiles.Clear();
        }
        switch (_direction)
        {
            case 0:
                if (CreateSeeingCone(_parentTile, 0, -1))
                    if (CreateSeeingCone(_parentTile, 0, -2))
                        CreateSeeingCone(_parentTile, 0, -3);

                if (CreateSeeingCone(_parentTile, 1, -1))
                    if (CreateSeeingCone(_parentTile, 1, -2))
                        CreateSeeingCone(_parentTile, 1, -3);

                if (CreateSeeingCone(_parentTile, -1, -1))
                    if (CreateSeeingCone(_parentTile, -1, -2))
                        CreateSeeingCone(_parentTile, -1, -3);
                break;
            case 1:
                if (CreateSeeingCone(_parentTile, 0, 1))
                    if (CreateSeeingCone(_parentTile, 0, 2))
                        CreateSeeingCone(_parentTile, 0, 3);

                if (CreateSeeingCone(_parentTile, 1, 1))
                    if (CreateSeeingCone(_parentTile, 1, 2))
                        CreateSeeingCone(_parentTile, 1, 3);

                if (CreateSeeingCone(_parentTile, -1, 1))
                    if (CreateSeeingCone(_parentTile, -1, 2))
                        CreateSeeingCone(_parentTile, -1, 3);

               
                break;
            case 2:

                if (CreateSeeingCone(_parentTile, -1, 0))
                    if (CreateSeeingCone(_parentTile, -2, 0))
                        CreateSeeingCone(_parentTile, -3, 0);

                if (CreateSeeingCone(_parentTile, -1, 1))
                    if (CreateSeeingCone(_parentTile, -2, 1))
                        CreateSeeingCone(_parentTile, -3, 1);

                if (CreateSeeingCone(_parentTile, -1, -1))
                    if (CreateSeeingCone(_parentTile, -2, -1))
                        CreateSeeingCone(_parentTile, -3, -1);
                break;
            case 3:

                if (CreateSeeingCone(_parentTile, 1, 0))
                    if (CreateSeeingCone(_parentTile, 2, 0))
                        CreateSeeingCone(_parentTile, 3, 0);

                if (CreateSeeingCone(_parentTile, 1, -1))
                    if (CreateSeeingCone(_parentTile, 2, -1))
                        CreateSeeingCone(_parentTile, 3, -1);

                if (CreateSeeingCone(_parentTile, 1, 1))
                    if (CreateSeeingCone(_parentTile, 2, 1))
                        CreateSeeingCone(_parentTile, 3, 1);
                break;
            default:
                Debug.Log("IMPOSSIBLE!");
                break;
        }


        //Check if he sees the player //TEMP
        if (_watchedTiles.Count > 0)
            foreach (var tile in _watchedTiles)
            {
                tile.GetComponentInChildren<SpriteRenderer>().color = new Color(0.5f, 0.5f, 0.5f);
            }


    }

    //Play the apropriate animation depending on the direction and status of the guard
    private void DetermineAnimationStatus()
    {
        switch (_guardMoveState)
        {
            case GuardMoveState.Stationary:
                switch (_direction)
                {
                    case 0:
                        _animator.Play("GuardStationaryUp");
                        break;
                    case 1:
                        _animator.Play("GuardStationaryDown");
                        break;
                    case 2:

                        _animator.Play("GuardStationaryLeft");
                        break;
                    case 3:
                        _animator.Play("GuardStationaryRight");
                        break;
                }
                break;
            case GuardMoveState.Turning:
                break;
            case GuardMoveState.Patrol:
                switch (_direction)
                {
                    case 0:
                        _animator.Play("GuardPatrolUp");
                        break;
                    case 1:
                        _animator.Play("GuardPatrolDown");
                        break;
                    case 2:

                        _animator.Play("GuardPatrolLeft");
                        break;
                    case 3:
                        _animator.Play("GuardPatrolRight");
                        break;
                }
                break;
            default:
                throw new ArgumentOutOfRangeException();
        }
        
    }

    //Return which puzzle the guards are in
    public int ReturnCurrentPuzzle()
    {
        return _currentPuzzle;
    }

    //Set the direction
    public void SetDirection(int direction)
    {
        if(_animator == null)
            _animator = GetComponent<Animator>();
    
        switch (_direction)
        {
            case 0:
                _direction = 1;
                _animator.Play("GuardStationaryUp");
                break;
            case 1:
                _direction = 0;
                _animator.Play("GuardStationaryDown");
                break;
            case 2:
                _direction = 3;
                _animator.Play("GuardStationaryLeft");
                break;
            case 3:
                _direction = 2;
                _animator.Play("GuardStationaryRight");
                break;
        }
    }





}
