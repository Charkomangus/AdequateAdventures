/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using System;
using System.Collections;
using Assets.Scripts.Cameras;
using Assets.Scripts.Evidence;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Objects;
using Assets.Scripts.Tiles;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Assets.Scripts.Player
{
    //Player animation state
    internal enum PlayerMoveState
    {
        Up, Down, Right, Left, Idle, UpPush, DownPush, RightPush, LeftPush
    }

    /// <summary>
    /// The main player class. Controls player movement, user input and interaction with objects.
    /// </summary>
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

        [SerializeField]private SpriteRenderer[] Reflections;
        //Int to indicate direction 0 is North, 1 is South, 2 is East, 3 is West
        private int _direction;


        /// <summary>
        /// Use this for initialization
        /// </summary>
        public void InitializePlayer()
        {
            _playerAnimator = GetComponent<Animator>();
            _playerMoveState = PlayerMoveState.Idle;

            //Start at entry tile - if it's null pick one at random.
            _parentTile = DetermingStartingTile();
            if(_parentTile != null)
                transform.position = _parentTile.transform.position;
          
            _moveSpeed = _normalSpeed;
            _slidingSpeed = _moveSpeed * 2;
            _sliding = false;
            _moving = false;
            _endedLevel = false;
            _initialized = true;
            Reflections = GetComponentsInChildren<SpriteRenderer>();
            for (int i = 1; i < Reflections.Length; i++)
            {
                Reflections[i].color = new Color(0,0,0,0);
            }
        }

        /// <summary>
        /// Start at entry tile - if it's null pick one at random.
        /// </summary>
        /// <returns></returns>
        public Tile DetermingStartingTile()
        {
          return GameManager.Instance.ReturnLevelEntry() ?? FindObjectOfType<Tile>();
        }

        /// <summary>
        /// Update is called once per frame
        /// </summary>
        private void Update()
        {
            if (_parentTile == null)
            {
                _parentTile = DetermingStartingTile();
                if(_parentTile == null) return;
                transform.position = _parentTile.transform.position;
            }
            //If the player has not been yet initalised or hasd no valid parent tile return
            if (_parentTile == null || !_initialized) return;
         
        
            DetermineMovement();
            //If the player is close to the parent tile speed them up and read further input
            if (HasReachedTile())
            {
                if(_parentTile.ReturnType() == TileType.Normal)
                    SetReflection(-1);
                //Free the current parent tile and kill the object
                if (_scheduleToDie)
                {
                    StartCoroutine(PlayerDeath());

                    if (_parentTile.ReturnType() == TileType.IceCracks)
                    {
                            _parentTile.GetComponentInChildren<ParticleSystem>().Play();
                        var temp = _parentTile.GetComponentInChildren<SpriteRenderer>();
                        temp.sprite = Resources.Load<Sprite>("LevelMapArt/icecrackbroken");

                        temp.transform.localScale = new Vector3(Random.Range(0.6f, 0.9f), Random.Range(0.6f, 0.9f), Random.Range(0.6f, 0.9f));
                        temp.transform.Rotate(new Vector3(0, 0, Random.Range(0, 180)));
                    }
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


        /// <summary>
        /// Determines what happens depending on ther type of tile the player is on
        /// </summary>
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

        /// <summary>
        /// Determine which way the player is going and which animation to play
        /// </summary>
        /// <param name="direction"></param>
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

        /// <summary>
        /// Open the apropriate reflection depending on the players direction
        /// </summary>
        /// <param name="i"></param>
        private void SetReflection(int i)
        {
            for (int j = 1; j < Reflections.Length; j++)
            {
                //If you are not sliding set them all to false
                if (!_sliding)
                    i = -1;
                Reflections[j].color = j == i ? new Color(0.8f, 0.8f, 0.8f, 0.8f) : new Color(0, 0, 0, 0);
            }
        }

        /// <summary>
        /// Move player smoothly
        /// </summary>
        /// <param name="startPosition"></param>
        /// <param name="endPosition"></param>
        /// <param name="speed"></param>
        public void SmoothMove(Vector3 startPosition, Vector3 endPosition, float speed)
        {
            transform.position = Vector3.Lerp(startPosition, endPosition, speed * Time.deltaTime);
        }

        /// <summary>
        /// Check if player has reached parent tile
        /// </summary>
        /// <returns></returns>
        private bool HasReachedTile()
        {
            return Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.5f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.5f;
        }


        /// <summary>
        /// DetermineMovement what the player will do depending on which tile they are intercating with
        /// </summary>
        private void Interact()
        {
            if(_latestTile == null) return;
            TileObject Object = _latestTile.ReturnObject();
          
            Debug.Log("Interacting with " + Object);
            var sfx = GameManager.Instance.AudioManager;
            switch (Object)
            {
                //Push box in the apropriate direction
                case TileObject.Box:
                    switch (_direction) 
                    {
                        case 0:
                            StartCoroutine(_latestTile.GetComponentInChildren<Box>().SetParentTile(_latestTile.ReturnNorth(), _direction));
                            break;
                        case 1:
                            StartCoroutine(_latestTile.GetComponentInChildren<Box>().SetParentTile(_latestTile.ReturnSouth(), _direction));
                            break;
                        case 2:
                            StartCoroutine(_latestTile.GetComponentInChildren<Box>().SetParentTile(_latestTile.ReturnEast(), _direction));
                            break;
                        case 3:
                            StartCoroutine(_latestTile.GetComponentInChildren<Box>().SetParentTile(_latestTile.ReturnWest(), _direction));
                            break;
                    }
                    break;

                //Push sliding box in the apropriate direction
                case TileObject.SlidingBox:
                    switch (_direction)
                    {
                        case 0:
                            StartCoroutine(_latestTile.GetComponentInChildren<SlidingBox>().SetParentTile(_latestTile.ReturnNorth(), _direction));
                            break;
                        case 1:
                            StartCoroutine(_latestTile.GetComponentInChildren<SlidingBox>().SetParentTile(_latestTile.ReturnSouth(), _direction));
                            break;
                        case 2:
                            StartCoroutine(_latestTile.GetComponentInChildren<SlidingBox>().SetParentTile(_latestTile.ReturnEast(), _direction));
                            break;
                        case 3:
                            StartCoroutine(_latestTile.GetComponentInChildren<SlidingBox>().SetParentTile(_latestTile.ReturnWest(), _direction));
                            break;
                    }
                    break;

                //Change direction of green conveyor belts
                case TileObject.GreenSwitch:
                    sfx.PlayAudio(sfx.Switch, false);
                    _latestTile.GetComponentInChildren<Switch>().FlipSwitch();
                    break;

                //Change direction of red conveyor belts
                case TileObject.RedSwitch:
                    sfx.PlayAudio(sfx.Switch, false);
                    _latestTile.GetComponentInChildren<Switch>().FlipSwitch();
                    break;

                //Change direction of blue conveyor belts
                case TileObject.BlueSwitch:
                    sfx.PlayAudio(sfx.Switch, false);
                    _latestTile.GetComponentInChildren<Switch>().FlipSwitch();
                    break;

                //Open text box with apropriate message
                case TileObject.Sign:
                    GameManager.Instance.UiManager.Open(_latestTile.GetComponentInChildren<Sign>().ReturnSignText());
                    break;
                //Pickup evidence
                case TileObject.Evidence1:
                case TileObject.Evidence2:
                case TileObject.Evidence3:
                case TileObject.Evidence4:
                case TileObject.Evidence5:
                case TileObject.Evidence6:
                case TileObject.Evidence7:
                case TileObject.Evidence8:
                case TileObject.Evidence9:
                    _latestTile.GetComponentInChildren<Evidences>().EvidencePickedUp();
                    break;
                //Do nothing
                case TileObject.Empty:
                    break;
                
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        /// <summary>
        /// Determine if this tile can be moved into
        /// </summary>
        /// <param name="tile"></param>
        /// <returns></returns>
        private static bool IsValidTile(Tile tile)
        {
            if (tile == null)
                return false;
            return !tile.IsBlocked();
        }

        /// <summary>
        /// Check what flags this tile has an deal with that apropriatelly
        /// </summary>
        /// <param name="tile"></param>
        private void DetermineFlagsEncountered(Tile tile)
        {
            if ((tile.IsPuzzleEntry() || tile.IsEntry())&& GameManager.Instance.MapGenerator.ReturnSpecificTile((int)tile.ReturnPosition().x, (int)tile.ReturnPosition().y) != _currentPuzzleTile)
            {
                _currentPuzzleTile = tile;
                GameManager.Instance.UiManager.TriggerCheckpoint();
            }
            else if (tile.IsPuzzleComplete())
            {
                _currentPuzzleTile = tile;
            }
            else if (tile.IsExit())
            {
                GameManager.Instance.UiManager.SetFade(false);
                StartCoroutine(GameManager.Instance.EndOfLevel());
            }
            else if (tile.IsDialogue())
            {
                GameManager.Instance.TriggerDialogue(tile);
            }
            else if (tile.ReturnCurrentObject() != null)
            {
                var temp = tile.ReturnCurrentObjectType();

                switch (temp)
                {
                    case TileObject.Evidence1:
                    case TileObject.Evidence2:
                    case TileObject.Evidence3:
                    case TileObject.Evidence4:
                    case TileObject.Evidence5:
                    case TileObject.Evidence6:
                    case TileObject.Evidence7:
                    case TileObject.Evidence8:
                    case TileObject.Evidence9:
                        tile.ReturnCurrentObject().GetComponent<Evidences>().EvidencePickedUp();
                        break;
                }
            }
        }

        /// <summary>
        /// Check if movement should happen to the tile and set whcih tile the player is directly looking at
        /// </summary>
        /// <param name="destination"></param>
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

        /// <summary>
        /// Set animation if player is not sliding
        /// </summary>
        /// <param name="trigger"></param>
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

        /// <summary>
        /// Player will respawn and death animation will play
        /// </summary>
        /// <returns></returns>
        private IEnumerator PlayerDeath()
        {
            //disable the reflections
            SetReflection(-1);
            //Find camera
            var gameCamera = UnityEngine.Camera.main.GetComponent<GameCamera>();
            //Switch off player image
            GetComponent<SpriteRenderer>().enabled = false;
            //Set player to not update
            _initialized = false;
            //Zoom in the camera
            gameCamera.SetCameraHeight(2);         
            yield return new WaitForSeconds(1);
            //Fade in
            GameManager.Instance.UiManager.SetFade(false);
            yield return new WaitForSeconds(2);

            //Reset camera and player
            gameCamera.SetCameraHeight(7.5f);
            gameCamera.transform.position = new Vector3(gameCamera.transform.position.x, 7.5f, gameCamera.transform.position.z);
            GameManager.Instance.RestartFromCheckPoint();
            Camera.main.GetComponent<GameCamera>().DetermineHeight();
        }

        /// <summary>
        /// Determing what happens depending on the player input and position 
        /// </summary>
        private void DetermineMoveState()
        {
            switch (_playerMoveState)
            {
                case PlayerMoveState.Up:

                    DetermineAnimationStatus("Up");
                    SetReflection(2);
                    _direction = 0;
                    Move(_parentTile.ReturnNorth());
                    break;

                case PlayerMoveState.Down:
                    DetermineAnimationStatus("Down");
                    SetReflection(1);
                    _direction = 1;
                    Move(_parentTile.ReturnSouth());
                    break;

                case PlayerMoveState.Right:
                    DetermineAnimationStatus("Right");
                    SetReflection(4);
                    _direction = 2;
                    Move(_parentTile.ReturnEast());
                    break;

                case PlayerMoveState.Left:
                    DetermineAnimationStatus("Left");
                    SetReflection(3);
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

        /// <summary>
        /// Controls what player input will do to the character
        /// </summary>
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
            if (Input.GetKeyDown(KeyCode.E) || Input.GetKeyDown("[0]"))
            {
                if(!GameManager.Instance.DialogueManager.IsOpen() && !GameManager.Instance.JournalManager.IsOpen())
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
            //UP
            if (_playerMoveState != PlayerMoveState.Up)
            { 
                if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
                    _playerMoveState = PlayerMoveState.Up;
            }
            //DOWN
            if (_playerMoveState != PlayerMoveState.Down)
            {
                if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
                    _playerMoveState = PlayerMoveState.Down;
            }
            //LEFT
            if (_playerMoveState != PlayerMoveState.Left)
            {
                if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
                    _playerMoveState = PlayerMoveState.Left;
            }
            //RIGHT
            if (_playerMoveState != PlayerMoveState.Right)
            {
                if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
                    _playerMoveState = PlayerMoveState.Right;
            }
        }

        /// <summary>
        /// Reset to the players location to the last checkpoint
        /// </summary>
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

        /// <summary>
        /// Set the players parent tile and unblocks their current one
        /// </summary>
        /// <param name="tile"></param>
        public void SetParentTile(Tile tile)
        {
            _parentTile.SetBlocked(false);
            _parentTile = tile;
          
        }

        /// <summary>
        /// Set the players parent tile and unblocks their current one
        /// </summary>
        /// <returns></returns>
        public Tile ReturnParentTile()
        {
            return _parentTile;
        }

        /// <summary>
        /// Return true if the player is moving
        /// </summary>
        /// <returns></returns>
        public bool IsMoving()
        {
            return _moving;
        }


        /// <summary>
        /// Return true if the player is moving
        /// </summary>
        /// <returns></returns>
        public bool IsInitialized()
        {
            return _initialized;
        }

        /// <summary>
        /// Set if the player is initialised or not
        /// </summary>
        /// <param name="status"></param>
        public void SetInitialized(bool status)
        {
            _initialized = status;
        }

        /// <summary>
        /// Return which puzzle the player is standing in
        /// </summary>
        /// <returns></returns>
        public int ReturnCurrentPuzzle()
        {
            return _currentPuzzle;
        }
        
    }

}
