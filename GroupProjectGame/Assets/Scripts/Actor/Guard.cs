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

    [Header("Tiles")] [SerializeField] private Tile _parentTile, _oldPatrol;
    [SerializeField] private Tile _latestTile;
    [SerializeField]private int _currentPuzzle = -1;
   

    [Header("Movement")]
    [SerializeField]
    private GuardMoveState _guardMoveState;
    [SerializeField]private float _moveSpeed;
    [SerializeField]private int _waitTime;
    [SerializeField]private int _patrolLength;
    [SerializeField]private List<Tile> _watchedTiles = new List<Tile>();
    private int _tilesWalked;



    [Header("Status")]
    [SerializeField]private bool _seeing;
    [SerializeField]private bool _initialized;
    [SerializeField]private int _direction;
    private BoxCollider[] _colliders;
    private int _originalDirection;
    private Tile _originalTile;

    // Use this for initialization
    public void InitializeGuard() {
        _animator = GetComponent<Animator>();
        _guardMoveState = GuardMoveState.Patrol;
        _parentTile = GameManager.Instance.ReturnLevelEntry() ?? FindObjectOfType<Tile>();
        transform.position = _parentTile.transform.position;
        _originalTile = _parentTile;
        _originalDirection = _direction;
        _colliders = GetComponents<BoxCollider>();
        _initialized = true;
    }
	
	// Update is called once per frame
    void Update()
    {
        //If the player has not been yet initalised or hasd no valid parent tile return
        if (_parentTile == null || !_initialized) return;

        transform.SetParent(_parentTile.transform);
        _currentPuzzle = _parentTile.ReturnPuzzleNumber();
        //If the player is close to the parent tile speed them up and read further input
        if (HasReachedTile())
        {
            SeeingCone();
            SmoothMove(transform.position, _parentTile.transform.position, 3 * _moveSpeed);
           DetermineAnimationStatus();
       


            if (_parentTile.ReturnPatrol())
            {
                _guardMoveState = GuardMoveState.Patrol;
                FollowPatrolRoute();
                
            }
            else
            {
                DetermineDirection();
                    Move(_latestTile);
               
            }
            
        }
        else
        {
            SmoothMove(transform.position, _parentTile.transform.position, _moveSpeed);
        }

       
    }

    private void FollowPatrolRoute()
    {
        //Add all the neighboring tiles that are patrol tiles
        var temp = _parentTile.ReturnNeighbors().Where(tile => tile.ReturnPatrol()).ToList();


        //Try not to double back
        foreach (var tile in temp)
        {
            switch (_direction)
            {
                case 0:
                    if (tile != _parentTile.South)
                    {
                        _latestTile = tile;
                    }
                    break;
                case 1:
                    if (tile != _parentTile.North)
                    {
                        _latestTile = tile;
                    }
                    break;
                case 2:
                    if (tile != _parentTile.East)
                    {
                        _latestTile = tile;
                    }
                    break;
                case 3:
                    if (tile != _parentTile.West)
                    {
                        _latestTile = tile;
                      
                    }
                    break;
            }
            if (_latestTile != _parentTile && !_latestTile.IsBlocked()) break;
        }

        //Determine which direction to face
        if (_latestTile == _parentTile.North)
            _direction = 0;
        else if (_latestTile == _parentTile.South)
            _direction = 1;
        else if (_latestTile == _parentTile.West)
            _direction = 2;
        else if (_latestTile == _parentTile.East)
            _direction = 3;

        //Check if he sees the player
        foreach (var tile in _watchedTiles)
        {
            if (tile == GameManager.Instance.Player.ReturnParentTile())
                Debug.Log("GOT HIM");
            if (tile != null && !tile.IsBlocked()) // TEMP
                tile.GetComponentInChildren<SpriteRenderer>().color = new Color(0.5f, 0.5f, 0.5f);
        }

        //Move to the latest tile if its valid
        if (!IsValidTile(_latestTile)) return;
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
    private void CreateSeeingCone(Tile tile, int x, int y)
    {
        var tempTile = GameManager.Instance.MapGenerator.ReturnSpecificTile((int)tile.ReturnPosition().x + x, (int)tile.ReturnPosition().y + y);
        AddTile(_watchedTiles, tempTile);
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
        DetermineDirection();
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
            _tilesWalked = 0;
        }
        else
        {
            //If the tile is blocked make the guard turn immidiately
            _guardMoveState = GuardMoveState.Turning;
            _tilesWalked = 0;
            Turn();
        }
    }

    //ResetGuard to its original location and direction
    public void ResetGuard()
    {
        _initialized = false;
        _parentTile.SetBlocked(false);
        _parentTile = _originalTile;
        _parentTile.SetBlocked(true);
        _direction = _originalDirection;
        InitializeGuard();
    }
//Creates a cone where the guard can see
    private void SeeingCone()
    {
        foreach (var tile in _watchedTiles)
        {
            if (tile != null || !tile.IsBlocked())
                tile.GetComponentInChildren<SpriteRenderer>().color = new Color(1, 1, 1);
        }
        _watchedTiles.Clear();

        switch (_direction)
        {
            case 0:
                CreateSeeingCone(_parentTile, 0, -1);
                CreateSeeingCone(_parentTile, 1, -1);
                CreateSeeingCone(_parentTile, -1, -1);
                CreateSeeingCone(_parentTile, 0, -2);
                CreateSeeingCone(_parentTile, 1, -2);
                CreateSeeingCone(_parentTile, -1, -2);
                CreateSeeingCone(_parentTile, 0, -3);
                CreateSeeingCone(_parentTile, 1, -3);
                CreateSeeingCone(_parentTile, -1, -3);
                CreateSeeingCone(_parentTile, 0, -4);
                CreateSeeingCone(_parentTile, 1, -4);
                CreateSeeingCone(_parentTile, -1, -4);
                CreateSeeingCone(_parentTile, 2, -4);
                CreateSeeingCone(_parentTile, -2, -4);
                break;
            case 1:
                CreateSeeingCone(_parentTile, 0, 1);
                CreateSeeingCone(_parentTile, 1, 1);
                CreateSeeingCone(_parentTile, -1, 1);
                CreateSeeingCone(_parentTile, 0, 2);
                CreateSeeingCone(_parentTile, 1, 2);
                CreateSeeingCone(_parentTile, -1, 2);
                CreateSeeingCone(_parentTile, 0, 3);
                CreateSeeingCone(_parentTile, 1, 3);
                CreateSeeingCone(_parentTile, -1, 3);
                CreateSeeingCone(_parentTile, 0, 4);
                CreateSeeingCone(_parentTile, 1, 4);
                CreateSeeingCone(_parentTile, -1, 4);
                CreateSeeingCone(_parentTile, 2, 4);
                CreateSeeingCone(_parentTile, -2, 4);
                break;
            case 2:
                CreateSeeingCone(_parentTile, -1, 0);
                CreateSeeingCone(_parentTile, -1, -1);
                CreateSeeingCone(_parentTile, -1, 1);
                CreateSeeingCone(_parentTile, -2, 0);
                CreateSeeingCone(_parentTile, -2, -1);
                CreateSeeingCone(_parentTile, -2, 1);
                CreateSeeingCone(_parentTile, -3, 0);
                CreateSeeingCone(_parentTile, -3, -1);
                CreateSeeingCone(_parentTile, -3, 1);
                CreateSeeingCone(_parentTile, -4, 0);
                CreateSeeingCone(_parentTile, -4, 1);
                CreateSeeingCone(_parentTile, -4, -1);
                CreateSeeingCone(_parentTile, -4, -2);
                CreateSeeingCone(_parentTile, -4, 2);
                break;
            case 3:
                CreateSeeingCone(_parentTile, 1, 0);
                CreateSeeingCone(_parentTile, 1, -1);
                CreateSeeingCone(_parentTile, 1, 1);
                CreateSeeingCone(_parentTile, 2, 0);
                CreateSeeingCone(_parentTile, 2, -1);
                CreateSeeingCone(_parentTile, 2, 1);
                CreateSeeingCone(_parentTile, 3, 0);
                CreateSeeingCone(_parentTile, 3, -1);
                CreateSeeingCone(_parentTile, 3, 1);
                CreateSeeingCone(_parentTile, 4, 0);
                CreateSeeingCone(_parentTile, 4, 1);
                CreateSeeingCone(_parentTile, 4, -1);
                CreateSeeingCone(_parentTile, 4, -2);
                CreateSeeingCone(_parentTile, 4, 2);
                break;
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


    
   
   
}
