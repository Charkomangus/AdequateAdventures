using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Remoting.Messaging;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Objects;
using Assets.Scripts.Tiles;
using Assets.Scripts.Utility;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.Player
{
    //Player animation state
    enum PlayerMoveState
    {
        Up, Down, Right, Left, Idle, UpPush, DownPush, RightPush, LeftPush
    }

    public class Player : MonoBehaviour
    {

        private Animator _playerAnimator;

        [Header("Tiles")]
        [SerializeField]private Tile _parentTile;
        [SerializeField]private Tile _latestTile;


        [Header("Movement")]
        [SerializeField]private PlayerMoveState _playerMoveState;
        [SerializeField]private float _moveSpeed;
        [SerializeField]private float _slidingSpeed;
        [SerializeField]private float _normalSpeed;

        [Header("Status")]
        [SerializeField]private bool _sliding;
        [SerializeField]private bool _moving;


        private bool _initialized;
        //Int to indicate direction 0 is North, 1 is South, 2 is East, 3 is West
        private int _direction;
   
    
        // Use this for initialization
        public void InitializePlayer()
        {
            _playerAnimator = GetComponent<Animator>();
            _playerMoveState = PlayerMoveState.Idle;

            //Start at entry tile - if it's null pick one at random.
            _parentTile = GameManager.Instance.ReturnLevelEntry() ?? FindObjectOfType<Tile>();
            transform.position = new Vector3(_parentTile.transform.position.x, transform.position.y, _parentTile.transform.position.z);
            _normalSpeed = _moveSpeed;
            _slidingSpeed = _moveSpeed * 2;
           
            _initialized = true;
        }
	
        // Update is called once per frame
        void Update()
        {
            //If the player has not been yet initalised or hasd no valid parent tile return
            if (_parentTile == null || !_initialized) return;

            DetermineMovement();
            //If the player is close to the parent tile speed them up and read further input
            if (HasReachedTile())
            {
                SmoothMove(transform.position, _parentTile.transform.position, 3 * _moveSpeed);
                PlayerInput();
                DetermineMoveState();             
            }
            else
            {
                SmoothMove(transform.position, _parentTile.transform.position, _moveSpeed);
            }

            //DEBUG - TEMP
            if (_latestTile != null)
            {
                _latestTile.GetComponentInChildren<SpriteRenderer>().color = new Color(0.5f, 0.5f, 0.5f);
            }

      
        }


        //Determines what happens depending on ther type of tile the player is on
        private void DetermineMovement()
        {
            switch (_parentTile.ReturnType())
            {
                //Player slides on the oil
                case TileType.Oil:
                    _sliding = true;
                    _moveSpeed = _slidingSpeed;
                  
                    break;
                //Player slides on the ice
                case TileType.Ice:
                    _sliding = true;
                    _moveSpeed = _slidingSpeed;
                   
                    break;
                //No special movement
                case TileType.Normal:
                    _sliding = false;
                    _moveSpeed = _normalSpeed;
                    break;
                //Player spawns at puzzle entry
                case TileType.Fire:
                    _parentTile = GameManager.Instance.ReturnLevelEntry();
                    transform.position = _parentTile.transform.position;
                    break;
                //Player spawns at puzzle entry
                case TileType.IceCracks:
                    _parentTile = GameManager.Instance.ReturnLevelEntry();
                    transform.position = _parentTile.transform.position;
                    break;

                //Player slides on belt
                case TileType.GreenConveyorBelt:
                    _sliding = true;
                    var greenBelt = _parentTile.GetComponentInChildren<ConveyorBelt>();
                    _moveSpeed = greenBelt.ReturnSpeed();
                    DetermineDirection(greenBelt.ReturnDirection());
                    break;
                //Player slides on belt
                case TileType.RedConveyorBelt:
                    _sliding = true;
                    var redBelt = _parentTile.GetComponentInChildren<ConveyorBelt>();
                    _moveSpeed = redBelt.ReturnSpeed();
                    DetermineDirection(redBelt.ReturnDirection());
                    break;
                //Player slides on belt
                case TileType.BlueConveyorBelt:
                    _sliding = true;
                    var blueBelt = _parentTile.GetComponentInChildren<ConveyorBelt>();
                    _moveSpeed = blueBelt.ReturnSpeed();
                    DetermineDirection(blueBelt.ReturnDirection());
                    break;
                case TileType.Blocked:
                    break;
                case TileType.Wall:
                    break;
                case TileType.Door:
                    break;
                case TileType.Null:
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        private void DetermineDirection(int direction)
        {
            switch (direction)
            {
                case 0:
                    _playerMoveState = PlayerMoveState.Up;
                        if(_moving)
                    _playerAnimator.Play("PlayerUpIdle");
                    break;
                case 1:
                    _playerMoveState = PlayerMoveState.Down;
                    if (_moving)
                        _playerAnimator.Play("PlayerDownIdle");
                    break;
                case 2:
                    _playerMoveState = PlayerMoveState.Left;
                    if (_moving)
                        _playerAnimator.Play("PlayerLeftIdle");
                    break;
                case 3:
                    _playerMoveState = PlayerMoveState.Right;
                    if (_moving)
                        _playerAnimator.Play("PlayerRightIdle");
                    break;
            }
        }

        public void SmoothMove(Vector3 startPosition, Vector3 endPosition, float speed)
        { 
            transform.position = Vector3.Lerp(startPosition, endPosition, speed * Time.deltaTime);
        }
      
        //Check if player has reached parent tile
        private bool HasReachedTile()
        {
            return Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.6f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.6f;
        }

        //DetermineMovement what the player will do depending on which tile they are intercating with
        private void Interact()
        {
        
            TileObject Object = _latestTile.ReturnObject();
            Debug.Log("Interacting with " + Object);

            switch (Object)
            {
                //Push box in the apropriate direction
                case TileObject.Box:
                    switch (_direction) 
                    {
                        case 0:
                            _latestTile.GetComponentInChildren<Box>().SetParentTile(_latestTile.ReturnNorth(), _direction);
                            break;
                        case 1:
                            _latestTile.GetComponentInChildren<Box>().SetParentTile(_latestTile.ReturnSouth(), _direction);
                            break;
                        case 2:
                            _latestTile.GetComponentInChildren<Box>().SetParentTile(_latestTile.ReturnEast(), _direction);
                            break;
                        case 3:
                            _latestTile.GetComponentInChildren<Box>().SetParentTile(_latestTile.ReturnWest(), _direction);
                            break;
                    }
                    break;

                //Push sliding box in the apropriate direction
                case TileObject.SlidingBox:
                    switch (_direction)
                    {
                        case 0:
                            _latestTile.GetComponentInChildren<SlidingBox>().SetParentTile(_latestTile.ReturnNorth(), _direction);
                            break;
                        case 1:
                            _latestTile.GetComponentInChildren<SlidingBox>().SetParentTile(_latestTile.ReturnSouth(), _direction);
                            break;
                        case 2:
                            _latestTile.GetComponentInChildren<SlidingBox>().SetParentTile(_latestTile.ReturnEast(), _direction);
                            break;
                        case 3:
                            _latestTile.GetComponentInChildren<SlidingBox>().SetParentTile(_latestTile.ReturnWest(), _direction);
                            break;
                    }
                    break;

                //Change direction of green conveyor belts
                case TileObject.GreenSwitch:
                    _latestTile.GetComponentInChildren<Switch>().FlipSwitch();
                    break;

                //Change direction of red conveyor belts
                case TileObject.RedSwitch:
                    _latestTile.GetComponentInChildren<Switch>().FlipSwitch();
                    break;

                //Change direction of blue conveyor belts
                case TileObject.BlueSwitch:
                    _latestTile.GetComponentInChildren<Switch>().FlipSwitch();
                    break;

                //Open text box with apropriate message
                case TileObject.Sign:
                    GameManager.Instance.UiManager.Open(_latestTile.GetComponentInChildren<Sign>().ReturnSignText());
                    break;
                
                //Do nothing
                case TileObject.Empty:
                    break;
            }
        }

        //Determine if this tile can be moved into
        private static bool IsValidTile(Tile tile)
        {
            if (tile == null)
                return false;
            return !tile.IsBlocked();
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
                _moving = true;

                //Depending on the direction facing save which tile the player is looking at
                switch (_direction) 
                {
                    case 0:
                        _latestTile = destination.ReturnNorth();
                        break;
                    case 1:
                        _latestTile = destination.ReturnSouth();
                        break;
                    case 2:
                        _latestTile = destination.ReturnEast();
                        break;
                    case 3:
                        _latestTile = destination.ReturnWest();
                        break;
                }
              
            }
            else
            {
                //If the tile is blocked make it the tile being looked at
                _latestTile = destination;
                _moving = false;
            }
        }

        //Set animation if player is not sliding
        private void DetermineAnimationStatus(string trigger)
        {
            if (_sliding && _moving)
            {
               return;
            }
            _playerAnimator.SetTrigger(trigger);
        }

        //Determing what happens depending on the player input and position 
        private void DetermineMoveState()
        {
            switch (_playerMoveState)
            {
                case PlayerMoveState.Up:

                    DetermineAnimationStatus("Up");
                    _direction = 0;
                    Move(_parentTile.ReturnNorth());
                    break;

                case PlayerMoveState.Down:
                    DetermineAnimationStatus("Down");
                    _direction = 1;
                    Move(_parentTile.ReturnSouth());
                    break;

                case PlayerMoveState.Right:
                    DetermineAnimationStatus("Right");
                    _direction = 2;
                    Move(_parentTile.ReturnEast());
                    break;

                case PlayerMoveState.Left:
                    DetermineAnimationStatus("Left");
                    _direction = 3;
                    Move(_parentTile.ReturnWest());
                    break;

                case PlayerMoveState.Idle:
                    _playerAnimator.SetTrigger("Idle");
                    _moving = false;
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        //Controls what player input will do to the character
        void PlayerInput()
        {
            //A player cannot act if they are currently sliding
            if (_sliding && _moving) return;

            //Interact with objects
            if (Input.GetKeyDown(KeyCode.E) || Input.GetKeyDown(KeyCode.Keypad0))
            {
                Interact();
            }

            //If none of the movement keys are pressed the player is assumed to be idle.
            if (!Input.GetKey(KeyCode.D) && !Input.GetKey(KeyCode.A) && !Input.GetKey(KeyCode.W) &&
                !Input.GetKey(KeyCode.S) && !Input.GetKey(KeyCode.UpArrow) && !Input.GetKey(KeyCode.RightArrow) && !Input.GetKey(KeyCode.LeftArrow) &&
                !Input.GetKey(KeyCode.DownArrow) && HasReachedTile())
            {
                _playerMoveState = PlayerMoveState.Idle;
                return;
            }

            if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
                _playerMoveState = PlayerMoveState.Up;

            else if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
                _playerMoveState = PlayerMoveState.Down;

            else if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
                _playerMoveState = PlayerMoveState.Left;

            else if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
            _playerMoveState = PlayerMoveState.Right;
        }


        //Set the players parent tile
        public void SetParentTile(Tile tile)
        {
            _parentTile = tile;
          
        }

        //Return true if the player is moving
        public bool IsMoving()
        {
            return _moving;

        }
    }

}
