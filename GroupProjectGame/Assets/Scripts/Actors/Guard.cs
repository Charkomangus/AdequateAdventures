/*******************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*******************************************************/
using System;
using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Tiles;
using UnityEngine;

namespace Assets.Scripts.Actors
{
    /// <summary>
    /// This class controls all the guard behaviour. The feature has been cut so much of the logic can be simplified, partitioned and improved
    /// </summary>
    public class Guard : MonoBehaviour {

        //Guards animation state
        private enum GuardMoveState
        {
            Stationary, Turning, Patrol
        }
        private Animator _animator;

        [Header("Tiles")]
        [SerializeField] private Tile _parentTile;
        [SerializeField] private Tile _latestTile;
        [SerializeField]private Tile _originalTile;

        [Header("Movement")]
        [SerializeField]private GuardMoveState _guardMoveState;
        [SerializeField]private float _moveSpeed;
        [SerializeField]private int _waitTime;
        [SerializeField]private int _patrolLength;
        [SerializeField]private readonly List<Tile> _watchedTiles = new List<Tile>();
        [SerializeField]private readonly List<Tile> _patrolTiles = new List<Tile>();
        private int _tilesWalked;
        private int _originalDirection;
        private int _patrolDirection;
        private int _speedMultiplier;

        [Header("Status")]
        [SerializeField]private bool _initialized;
        [SerializeField]private int _direction;
        [SerializeField] private int _currentPatrolTile;
        [SerializeField]private int _currentPuzzle = -1;
        private bool _caughtPlayer;

        /// <summary>
        /// Set initial values using the parent tile
        /// </summary>
        private void Start()
        {
            _animator = GetComponent<Animator>();
            _guardMoveState = GuardMoveState.Patrol;
            _parentTile = GetComponentInParent<Tile>();
            transform.position = _parentTile.transform.position;
            _originalTile = _parentTile;
            _direction = _parentTile.ReturnDirection();
            _originalDirection = _direction;
            _speedMultiplier = 3;
        }

        /// <summary>
        /// Use this for initialization - Update will not occur until this is called
        /// </summary>
        public void InitializeGuard()
        {  
            _initialized = true;
        }
        
        /// <summary>
        /// Update is called once per frame
        /// </summary>
        private void Update()
        {
            //If the player has not been yet initalised or hasd no valid parent tile return
            if (_parentTile == null || !_initialized) return;

            //Make this guard the child of it's parent tile
            transform.SetParent(_parentTile.transform);
            //Update the puzzle Number
            _currentPuzzle = _parentTile.ReturnPuzzleNumber();

            //If the guard is close to the parent tile speed them up
            if (HasReachedTile())
            {
                //If the player has been caught suspend further movement and launch the Caught Player subroutine
                if (_caughtPlayer)
                {
                    _caughtPlayer = false;
                    StartCoroutine(CaughtPlayer());
                    return;
                }
                //Move quickly
                SmoothMove(transform.position, _parentTile.transform.position, _speedMultiplier * _moveSpeed);

                //If the guard is located on a patrol tile create a route and start following it
                if (_parentTile.ReturnPatrol())
                {
                    _guardMoveState = GuardMoveState.Patrol;
                    if (_patrolTiles.Count <= 0)
                        CreatePatrolRoute(_parentTile);
                    FollowPatrolRoute();
              


                }
                //If not on patrol do the standard behaviour of 4 tiles in a direction, wait, turn and go back
                else
                {
               
                    DetermineDirection();
                    Move(_latestTile);
               
                }
                //Set animation to match direction and status
                DetermineAnimationStatus();
            }
            else
            {
                //Normal movement
                SmoothMove(transform.position, _parentTile.transform.position, _moveSpeed);
            }
            //Create the guards sight area
            SeeingCone();
        }

        /// <summary>
        /// Restart the game from the latest checkpoint and play the caught animation
        /// </summary>
        /// <returns></returns>
        private IEnumerator CaughtPlayer()
        {
            //Disables players controls
            GameManager.Instance.Player.SetInitialized(false);
            //Zoom in dramatically
            if (Camera.main.fieldOfView > 16)
                Camera.main.fieldOfView-= 0.4f;
            yield return new WaitForSeconds(1);
            //Fade in even more dramatically
            GameManager.Instance.UiManager.SetFade(false);
            yield return new WaitForSeconds(2);
            //Restart level from last checkpoint and reset camera
            GameManager.Instance.RestartFromCheckPoint();
            Camera.main.fieldOfView = 60;
        }
       

        /// <summary>
        /// Create a route using patrol tiles
        /// </summary>
        /// <param name="tile"></param>
        private void AddPatrolTiles(Tile tile)
        {
            //If the original tile is not present in the route add it
            if (!_patrolTiles.Contains(tile))
            {
                _patrolTiles.Add(tile);
            }
            //If the original tiles neighbors are patrol tiles and are not present in the route add them - typically the max is 2 patrol neighbor tiles
            foreach (var neighbor in tile.ReturnNeighbors())
            {
                if (!neighbor.ReturnPatrol() || _patrolTiles.Contains(neighbor)) continue;
                _patrolTiles.Add(neighbor);
                //Recursion until patrol route is complete
                AddPatrolTiles(neighbor);
            }
        }
        /// <summary>
        /// Create a list with all the patrol tiles including the original tile
        /// </summary>
        /// <param name="tile"></param>
        private void CreatePatrolRoute(Tile tile)
        {
            //If the original tile is not present in the route add it
            if (!_patrolTiles.Contains(_parentTile))
            {
                _patrolTiles.Add(_parentTile);
            }

            //Using the guards direction start the patrol from a particular neighbor - WARNING if direction given has no patrol tile it will default to West
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
                    //Find the closest patrol neighbor
                    foreach (var neighbor in _parentTile.ReturnNeighbors())
                    {
                        if (!neighbor.ReturnPatrol() || _patrolTiles.Contains(neighbor)) continue;
                        _patrolTiles.Add(neighbor);

                        AddPatrolTiles(neighbor);
                    }
                    break;
            }


            //DEBUG PURPOSES - Number patrol tiles
            for (int i = 0; i < _patrolTiles.Count; i++)
            {
                _patrolTiles[i].GetComponentInChildren<TextMesh>().text = i.ToString();
            }
        }


        /// <summary>
        /// Go from one tile to the next
        /// </summary>
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
       
            //When you reach the last patrol tile
            if (_currentPatrolTile == _patrolTiles.Count - 1 && _patrolDirection != -1)
            {
                foreach (var neighbor in _patrolTiles[_currentPatrolTile].ReturnNeighbors())
                {
                    //if it connects to the first tile continue from there
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
            //Initial tile
            else if (_currentPatrolTile == 0 && _patrolDirection != 1)
            {
                foreach (var neighbor in _patrolTiles[0].ReturnNeighbors())
                {          
                    //If it connects to the last tile and your direction is that way go that way      
                    if (neighbor == _patrolTiles[_patrolTiles.Count-1])
                    {
                        _currentPatrolTile = _patrolTiles.Count;
                        _patrolDirection = -1;
                        break;
                    }
                    //Otherwise keep going forward
                    _patrolDirection = 1;
                }
            }
       
            //Increment the current patrol tile by 1 or -1
            _currentPatrolTile += _patrolDirection;

            _latestTile = _patrolTiles[_currentPatrolTile];

            //If the next tile is blocked reverse direction
            if (_latestTile.IsBlocked())
            {
                _patrolDirection = -_patrolDirection;
                _currentPatrolTile += _patrolDirection;
                return;
            }

            //Set guard to patrol mode
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

            //Move to the latest tile - free earlier tile
            _parentTile.SetBlocked(false);
            _parentTile = _latestTile;
            _parentTile.SetBlocked(true);

        }
        
        /// <summary>
        /// Checks if this is a valid tile to look at
        /// </summary>
        /// <param name="seeeingList">Area that catches player</param>
        private void AddTile(List<Tile> seeeingList, Tile tile)
        {
            if (tile == null) return;
            seeeingList.Add(tile);
        }


        /// <summary>
        /// Creates a cone with all the tiles the guard sees
        /// </summary>
        private bool CreateSeeingCone(Tile tile, int x, int y)
        {
            //Find the specific tile - this is to avoid using the neighbor system which can result in slow loading times
            var tempTile = GameManager.Instance.MapGenerator.ReturnSpecificTile((int)tile.ReturnPosition().x + x, (int)tile.ReturnPosition().y + y);

            //If the players tile is that specific tile the game is up and the caught player coroutine will launch
            if (tempTile == GameManager.Instance.Player.ReturnParentTile())
            {
                _caughtPlayer = true;
            }
            //Otherwise if this tile is valid add it to the list
            else if (IsValidTile(tempTile))
            {
                AddTile(_watchedTiles, tempTile);
                return true;
            }
            return false;
        }

        /// <summary>
        /// Switch direction
        /// </summary>
        private void Turn()
        {
            //Seeing Cone is not active while turning
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

        /// <summary>
        /// Determine which way to go
        /// </summary>
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

        /// <summary>
        /// Move guard smoothly - Frame Independent
        /// </summary>
        private void SmoothMove(Vector3 startPosition, Vector3 endPosition, float speed)
        {
            transform.position = Vector3.Lerp(startPosition, endPosition, speed * Time.deltaTime);
        }

        /// <summary>
        /// Check if guard has reached parent tile or is close
        /// </summary>
        private bool HasReachedTile()
        {
            return Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.4f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.4f;
        }
        
        /// <summary>
        /// Determine if this tile is not null or blocked
        /// </summary>
        private static bool IsValidTile(Tile tile)
        {
            if (tile == null)
                return false;
            return !tile.IsBlocked();
        }

        /// <summary>
        /// Guard waits in place
        /// </summary>
        private IEnumerator Wait()
        {       
            yield return new WaitForSeconds(_waitTime);
            Turn();
        }

        /// <summary>
        /// Check if movement should happen to the tile and set whcih tile the player is directly looking at
        /// </summary>
        /// <param name="destination"></param>
        private void Move(Tile destination)
        {
            if (IsValidTile(destination))
            {
                //Free older parent
                _parentTile.SetBlocked(false);
                _parentTile = destination;
                //Treat the tile the player is on as a blocked tile
                _parentTile.SetBlocked(true);
                //Make note of what puzzle the guard is now in
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

        /// <summary>
        /// ResetGuard to its original location and direction
        /// </summary>
        public void ResetGuard()
        {
            _initialized = false;
            _direction = _originalDirection;
            _parentTile.SetBlocked(false);
            _parentTile = _originalTile;
            _parentTile.SetBlocked(true);
            transform.position = _parentTile.transform.position;
            InitializeGuard();
        }


        /// <summary>
        /// Creates a cone where the guard can see
        /// </summary>
        private void SeeingCone()
        {
            if (_watchedTiles.Count > 0)
            {

                //DEBUG - clear old seeing tiles from an colour
                foreach (var tile in _watchedTiles)
                {
                    tile.GetComponentInChildren<SpriteRenderer>().color = new Color(1, 1, 1);
                }

                _watchedTiles.Clear();
            }
            //Depending on the direction the guard is facing create a 3 x 3 seeing block. Any tiles that are blocked or null will not be included
            switch (_direction)
            {
                case 0:
                    //First Row
                    if (CreateSeeingCone(_parentTile, 0, -1))
                        if (CreateSeeingCone(_parentTile, 0, -2))
                            CreateSeeingCone(_parentTile, 0, -3);
                    //Second Row
                    if (CreateSeeingCone(_parentTile, 1, -1))
                        if (CreateSeeingCone(_parentTile, 1, -2))
                            CreateSeeingCone(_parentTile, 1, -3);
                    //Third Row
                    if (CreateSeeingCone(_parentTile, -1, -1))
                        if (CreateSeeingCone(_parentTile, -1, -2))
                            CreateSeeingCone(_parentTile, -1, -3);
                    break;
                case 1:
                    //First Row
                    if (CreateSeeingCone(_parentTile, 0, 1))
                        if (CreateSeeingCone(_parentTile, 0, 2))
                            CreateSeeingCone(_parentTile, 0, 3);
                    //Second Row
                    if (CreateSeeingCone(_parentTile, 1, 1))
                        if (CreateSeeingCone(_parentTile, 1, 2))
                            CreateSeeingCone(_parentTile, 1, 3);
                    //Third Row
                    if (CreateSeeingCone(_parentTile, -1, 1))
                        if (CreateSeeingCone(_parentTile, -1, 2))
                            CreateSeeingCone(_parentTile, -1, 3);

               
                    break;
                case 2:
                    //First Row
                    if (CreateSeeingCone(_parentTile, -1, 0))
                        if (CreateSeeingCone(_parentTile, -2, 0))
                            CreateSeeingCone(_parentTile, -3, 0);
                    //Second Row
                    if (CreateSeeingCone(_parentTile, -1, 1))
                        if (CreateSeeingCone(_parentTile, -2, 1))
                            CreateSeeingCone(_parentTile, -3, 1);
                    //Third Row
                    if (CreateSeeingCone(_parentTile, -1, -1))
                        if (CreateSeeingCone(_parentTile, -2, -1))
                            CreateSeeingCone(_parentTile, -3, -1);
                    break;
                case 3:
                    //First Row
                    if (CreateSeeingCone(_parentTile, 1, 0))
                        if (CreateSeeingCone(_parentTile, 2, 0))
                            CreateSeeingCone(_parentTile, 3, 0);
                    //Second Row
                    if (CreateSeeingCone(_parentTile, 1, -1))
                        if (CreateSeeingCone(_parentTile, 2, -1))
                            CreateSeeingCone(_parentTile, 3, -1);
                    //Third Row
                    if (CreateSeeingCone(_parentTile, 1, 1))
                        if (CreateSeeingCone(_parentTile, 2, 1))
                            CreateSeeingCone(_parentTile, 3, 1);
                    break;
                default:
                    Debug.Log("IMPOSSIBLE!");
                    break;
            }


            //DEBUG - Colour seeign tiles so designers can more easily expirement with stealth
            if (_watchedTiles.Count <= 0) return;

            foreach (var tile in _watchedTiles)
            {
                tile.GetComponentInChildren<SpriteRenderer>().color = new Color(0.5f, 0.5f, 0.5f);
            }

        }


        /// <summary>
        /// Play the apropriate animation depending on the direction and status of the guard
        /// </summary>
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
                    //No animations exist for turning
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

        #region Gets & Sets
        /// <summary>
        /// Set the direction and play the apropriate animation
        /// </summary>
        /// <param name="direction"></param>
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
        /// <summary>
        /// Return which puzzle the guards are in
        /// </summary>
        /// <returns></returns>
        public int ReturnCurrentPuzzle()
        {
            return _currentPuzzle;
        }


        #endregion
    }
}
