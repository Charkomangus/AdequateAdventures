using System;
using System.Collections;
using Assets.Scripts.Cameras;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Objects;
using Assets.Scripts.Tiles;
using UnityEngine;

namespace Assets.Scripts.Player
{
    //Player animation state
    internal enum PlayerMoveState
    {
        Up, Down, Right, Left, Idle, UpPush, DownPush, RightPush, LeftPush
    }

    public class Player : MonoBehaviour
    {

        private Animator _playerAnimator;

        [Header("Tiles")]
        [SerializeField]private Tile _parentTile;
        [SerializeField]private Tile _latestTile;
        [SerializeField]private int _currentPuzzle = -1;
        [SerializeField]private Tile _currentPuzzleTile;

        [Header("Movement")]
        [SerializeField]private PlayerMoveState _playerMoveState;
        [SerializeField]private float _moveSpeed;
        [SerializeField]private float _slidingSpeed;
        [SerializeField]private float _normalSpeed;

        [Header("Status")]
        [SerializeField]private bool _sliding;
        [SerializeField]private bool _moving;
        [SerializeField]private bool _endedLevel;
        [SerializeField] private bool _scheduleToDie;
        [SerializeField]private bool _initialized;
        //Int to indicate direction 0 is North, 1 is South, 2 is East, 3 is West
        private int _direction;
   
    
        // Use this for initialization
        public void InitializePlayer()
        {
            _playerAnimator = GetComponent<Animator>();
            _playerMoveState = PlayerMoveState.Idle;

            //Start at entry tile - if it's null pick one at random.
            _parentTile = DetermingStartingTile();
            
            transform.position = _parentTile.transform.position;
          
            _moveSpeed = _normalSpeed;
            _slidingSpeed = _moveSpeed * 2;
            _sliding = false;
            _moving = false;
            _endedLevel = false;
            _initialized = true;
        }

        //Start at entry tile - if it's null pick one at random.
        public Tile DetermingStartingTile()
        {
          return GameManager.Instance.ReturnLevelEntry() ?? FindObjectOfType<Tile>();
        }

        // Update is called once per frame
        private void Update()
        {
            //If the player has not been yet initalised or hasd no valid parent tile return
            if (_parentTile == null || !_initialized) return;

            DetermineMovement();
            //If the player is close to the parent tile speed them up and read further input
            if (HasReachedTile())
            {
                //Free the current parent tile and kill the object
                if (_scheduleToDie)
                {
                    StartCoroutine(PlayerDeath());
                    _parentTile.GetComponentInChildren<ParticleSystem>().Play();
                    _parentTile.GetComponentInChildren<SpriteRenderer>().sprite = Resources.Load<Sprite>("LevelMapArt/icecrackbroken");
                    _scheduleToDie = false;
                    return;
                }

                SmoothMove(transform.position, _parentTile.transform.position, 3 * _moveSpeed);
                PlayerInput();
                DetermineMoveState();
            }
            else
            {
                SmoothMove(transform.position, _parentTile.transform.position, _moveSpeed);
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
                case TileType.IceCracks:
                    _scheduleToDie = true;
                    
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

        //Determine which way the player is going and which animation to play
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

        //Move player smoothly
        public void SmoothMove(Vector3 startPosition, Vector3 endPosition, float speed)
        { 
            transform.position = Vector3.Lerp(startPosition, endPosition, speed * Time.deltaTime);
        }
      
        //Check if player has reached parent tile
        private bool HasReachedTile()
        {
            return Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.6f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.6f;
        }

        private void OnTriggerEnter(Collider other)
        {
            Debug.Log(other.gameObject.name);
        }
        //DetermineMovement what the player will do depending on which tile they are intercating with
        private void Interact()
        {
            if(_latestTile == null) return;
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

        private void DetermineFlagsEncountered(Tile tile)
        {
            if (tile.IsPuzzleEntry() || tile.IsPuzzleComplete())
                _currentPuzzleTile = tile;
            else if (tile.IsExit())
            {
                GameManager.Instance.UiManager.SetFade(false);
                GameManager.Instance.NextLevelDebug();
            }
            else if (tile.IsDialogue())
            {


                GameManager.Instance.TriggerDialogue(tile);


            }
        }


        //Check if movement should happen to the tile and set whcih tile the player is directly looking at
        private void Move(Tile destination)
        {
            if (IsValidTile(destination))
            {
                DetermineFlagsEncountered(destination);
                
                //If the destination tile is a conveyor belt with the opposing direction of the player cancel the move. This is done to avoid the player glitching back and forth
                if(destination.ReturnType() == TileType.RedConveyorBelt || destination.ReturnType() == TileType.BlueConveyorBelt || destination.ReturnType() == TileType.GreenConveyorBelt)
                    switch (destination.GetComponentInChildren<ConveyorBelt>().ReturnDirection())
                    {
                        case 0:
                            if (_direction == 1) return;
                            break;
                        case 1:
                            if (_direction == 0) return;
                            break;
                        case 2:
                            if (_direction == 2) return;
                            break;
                        case 3:
                            if (_direction == 3) return;
                            break;
                    }

                //Treat the tile the player is on as a blocked tile
                _parentTile.SetBlocked(false);
                _parentTile = destination;
                _parentTile.SetBlocked(true);
                _moving = true;
                _currentPuzzle = destination.ReturnPuzzleNumber();
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
                _playerAnimator.Play("Player" + trigger + "Idle");
                return;
            }
            _playerAnimator.Play("Player" + trigger +"Animation");

            //DEPRECIATED FEATURE
            //There is a separate animation system using Unity's mechanim via triggers. This has been abandonded because the visual aspect
            //was not expansion friendly and the transitions of animations did not line up well. It has been kept in for legacy purposes.
            //  _playerAnimator.SetTrigger(trigger);
        }

        //Guard waits in place
        private IEnumerator PlayerDeath()
        {
            var gameCamera = UnityEngine.Camera.main.GetComponent<GameCamera>();
            GetComponent<SpriteRenderer>().enabled = false;
            _initialized = false;
            gameCamera.SetCameraHeight(2);
            yield return new WaitForSeconds(1);
            GameManager.Instance.UiManager.SetFade(false);
            yield return new WaitForSeconds(2);


            GameManager.Instance.RestartFromCheckPoint();
            
            gameCamera.transform.position = new Vector3(gameCamera.transform.position.x, 7.5f, gameCamera.transform.position.z);
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
        private void PlayerInput()
        {
            //If the level is ending stop all input and set player to idle
            if (_endedLevel)
            {
                _playerMoveState = PlayerMoveState.Idle;
                return;
            }

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
            if (_playerMoveState != PlayerMoveState.Up)
            {
                if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
                    _playerMoveState = PlayerMoveState.Up;
            }
            if (_playerMoveState != PlayerMoveState.Down)
            {
                if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
                    _playerMoveState = PlayerMoveState.Down;
            }
            if (_playerMoveState != PlayerMoveState.Left)
            {
                if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
                    _playerMoveState = PlayerMoveState.Left;
            }
            if (_playerMoveState != PlayerMoveState.Right)
            {
                if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
                    _playerMoveState = PlayerMoveState.Right;
            }
        }

        //Reset to the players location to the last checkpoint
        public void Restart()
        {
            //Check if there is a checkpoint - if not use the level entry as one
            var tile = _currentPuzzleTile ?? GameManager.Instance.LevelEntry;
            GetComponent<SpriteRenderer>().enabled = true;
            transform.position = tile.transform.position;
            SetParentTile(tile);
            _latestTile = null;
            _playerMoveState = PlayerMoveState.Idle;
            _initialized = true;
        }

        //Set the players parent tile and unblocks their current one
        public void SetParentTile(Tile tile)
        {
            _parentTile.SetBlocked(false);
            _parentTile = tile;
          
        }

        //Set the players parent tile and unblocks their current one
        public Tile ReturnParentTile()
        {
            return _parentTile;
        }

        //Return true if the player is moving
        public bool IsMoving()
        {
            return _moving;
        }


        //Return true if the player is moving
        public bool IsInitialized()
        {
            return _initialized;
        }


        //Set if the player is initialised or not
        public void SetInitialized(bool status)
        {
            _initialized = status;
        }


        //Return which puzzle the player is standing in
        public int ReturnCurrentPuzzle()
        {
            return _currentPuzzle;
        }
        
    }

}
