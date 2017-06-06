using System;
using System.Runtime.Remoting.Messaging;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Tiles;
using Assets.Scripts.Utility;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.Player
{
    public class Player : MonoBehaviour
    {
        [SerializeField]public Tile _parentTile;
        public float normalSpeed, OilSpeed;
        public float _speed;
        public bool _steppedOnOil, _moving, _horizontal, _vertical, _horizontalSide, _verticalSide;
        public Animator _animator;
      
        private Tile _newTile, _childTile;
        private int latest;


        //HOLDING ITEM VARIABLES
        private bool _isHoldingItem;
        private Material _holdingIteMaterial;
        private string _holdingItemName;
        private TileType _holdingItemTileType;
        public Tile _heldItem;
        enum PlayerMoveState
        {
            Up, Down, Right, Left, Idle
        }

        private PlayerMoveState _playerMoveState;
    
        // Use this for initialization
        void Start ()
        {
            normalSpeed = 150;
            OilSpeed = 135;
            _parentTile = null;
            _animator = GetComponent<Animator>();
            _playerMoveState = PlayerMoveState.Idle;

            _speed = normalSpeed;
            if (GameManager.Instance.ReturnLevelEntry() == null)
                _parentTile = GameObject.FindObjectOfType<Tile>();
            else
                _parentTile = GameManager.Instance.ReturnLevelEntry();
            
            transform.position = new Vector3(_parentTile.transform.position.x, transform.position.y, _parentTile.transform.position.z);
            if(GameManager.Instance.CurrentLevel == 10)
                _animator.SetTrigger("Up");
        }
	
        // Update is called once per frame
        void Update()
        {

            if (_heldItem != null)
            {
                if (_heldItem == _parentTile.ReturnNorth())
                {
                    _horizontal = false;
                    _vertical = true;
                }
                else if (_heldItem == _parentTile.ReturnSouth())
                {
                    _horizontal = false;
                    _vertical = true;
                }
                else if (_heldItem == _parentTile.ReturnEast())
                {
                    _horizontal = true;
                    _vertical = false;
                }
                else if(_heldItem == _parentTile.ReturnWest())
                {
                    _horizontal = true;
                    _vertical = false;
                }

            }
            else
            {
                _horizontal = false;
                _vertical = false;
            }

            GetComponent<SpriteRenderer>().sortingOrder = Mathf.RoundToInt(transform.position.z * 100f) * 1;
            if (GameManager.Instance.ReturnLevelEntry() == null)
                _parentTile = GameObject.FindObjectOfType<Tile>();
            if (_parentTile != null)
            {
               
               SmoothMove(new Vector3(_parentTile.transform.position.x, transform.position.y, _parentTile.transform.position.z),
                   transform.position, _speed);


                SteppedIOnOil();
                PlayerInput();
                if(HasReachedTile())
                    DetermineMoveState();
                ResolveCurrentTile();
            }
          
        }

        void ResolveCurrentTile()
        {
            switch (_parentTile.ReturnType())
            {
                case TileType.Normal:
                    break;
                case TileType.Oil:
                    break;
                case TileType.Blocked:
                    break;
                case TileType.Wall:
                    break;
                case TileType.Fire:
                    break;
                case TileType.Null:
                    break;
                case TileType.Entry:
                    break;
                case TileType.Exit:
                    SceneManager.LoadScene("Transistion");
                    Debug.Log("VICTORY!");
                    break;
                case TileType.Belt1:
                    break;
                case TileType.Belt2:
                    break;
                case TileType.Belt3:
                    break;
                case TileType.Door:
                    break;
                case TileType.Box:
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        void SteppedIOnOil()
        {
            if (_parentTile.ReturnType() == TileType.Oil && _moving)
            {
                _steppedOnOil = true;
                _speed = OilSpeed;
            }
            else
            {
                _steppedOnOil = false;
                _playerMoveState = PlayerMoveState.Idle;
                _speed = normalSpeed;
            }
        }

        void SmoothMove(Vector3 startPosition, Vector3 endPosition, float seconds)
        {
            
            float moveTime = 0.0f;
            moveTime += Time.deltaTime * _speed;
            float length = (Mathf.Pow(1.3f, moveTime) - 1f);
           
            transform.position = Vector3.Lerp(startPosition, endPosition, length);
          
        }

        private bool HasReachedTile()
        {
            if (_parentTile != null)
            {
                if (Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.4f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.4f)
                    return true;
                return false;
            }
            return false;
        }

        private void Interact()
        {
            if (_newTile == null)
            {
                switch (latest)
                {
                    case 0:
                        return;
                    case 1:
                        if (_parentTile.ReturnNorth().ReturnType() == TileType.Box ||
                            _parentTile.ReturnNorth().ReturnType() == TileType.RollableBox)
                            _newTile = _parentTile.ReturnNorth();
                        else
                            return;
                        
                        break;
                    case 2:
                        if (_parentTile.ReturnSouth().ReturnType() == TileType.Box ||
                            _parentTile.ReturnSouth().ReturnType() == TileType.RollableBox)
                            _newTile = _parentTile.ReturnSouth();
                        else
                            return;
                        break;
                    case 3:
                        if (_parentTile.ReturnWest().ReturnType() == TileType.Box ||
                            _parentTile.ReturnWest().ReturnType() == TileType.RollableBox)
                            _newTile = _parentTile.ReturnWest();
                        else
                            return;
                        break;
                    case 4:
                        if (_parentTile.ReturnEast().ReturnType() == TileType.Box ||
                            _parentTile.ReturnEast().ReturnType() == TileType.RollableBox)
                            _newTile = _parentTile.ReturnEast();
                        else
                            return;
                        break;
                }
            }


            if (_isHoldingItem)
            {
                Debug.Log("Dropped Item");
                _isHoldingItem = false;
                _heldItem.Blocked = true;
                _heldItem.SetType(_holdingItemTileType);
                _heldItem.SetMaterial(_holdingIteMaterial);
                _heldItem.name = _holdingItemName;

                _heldItem = null;
                _vertical = false;
                _horizontal = false;
            }
            else
            {
                if (_newTile.ReturnType() == TileType.Box)
                {
                    Debug.Log("Picked up Item");
                    _isHoldingItem = true;

                    _horizontalSide = _newTile.transform.position.z > _parentTile.transform.position.z;
                    _verticalSide = _newTile.transform.position.x > _parentTile.transform.position.x;

                    _holdingItemTileType = _newTile.ReturnType();
                    _holdingIteMaterial = _newTile.ReturnMaterial();
                    _holdingItemName = _newTile.name;
                    _heldItem = _newTile;
                    _newTile.Blocked = false;
               
                }
                else if (_newTile.ReturnType() == TileType.RollableBox)
                {
                    Tile originaltile = _newTile;
                    Debug.Log("Heyhoo");
                    _holdingItemTileType = _newTile.ReturnType();
                    _holdingIteMaterial = _newTile.ReturnMaterial();
                    _holdingItemName = _newTile.name;


                    if (_newTile == _parentTile.ReturnNorth())
                    {
                        Tile nextTile = _newTile;
                        nextTile.Blocked = false;
                        while (!nextTile.IsBlocked() || nextTile.ReturnType() == TileType.Fire)
                        {
                            nextTile.ReturnSouth().SetType(TileType.Normal);
                            nextTile.ReturnSouth().Blocked = false;
                            nextTile.ReturnSouth().SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                            nextTile.ReturnSouth().name = "Normal Tile";

                            nextTile.SetType(_holdingItemTileType);
                            nextTile.SetMaterial(_holdingIteMaterial);
                            nextTile.name = _holdingItemName;
                            nextTile = nextTile.ReturnNorth();
                            Debug.Log("Moved");

                        }
                        Debug.Log("Hit a thing");
                        GameManager.Instance.audioManager.PlayAudio(GameManager.Instance.audioManager.CRATE_OBSTACLE_COLLISION, false);
                        if (nextTile.ReturnType() == TileType.Door)
                        {
                            nextTile.SetMaterial(GameManager.Instance.brokenDoor);
                            nextTile.Blocked = false;
                            nextTile.ReturnSouth().SetType(TileType.Normal);
                            nextTile.ReturnSouth().Blocked = false;
                            nextTile.ReturnSouth().SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                            nextTile.ReturnSouth().name = "Normal Tile";
                        }
                        else if (nextTile.ReturnType() == TileType.Fire)
                        {
                            originaltile.SetType(_holdingItemTileType);
                            originaltile.SetMaterial(_holdingIteMaterial);
                            originaltile.name = _holdingItemName;
                            originaltile.Blocked = true;
                        }
                    }
                    else if (_newTile == _parentTile.ReturnSouth())
                    {
                        Tile nextTile = _newTile;
                        nextTile.Blocked = false;
                        while (!nextTile.IsBlocked() || nextTile.ReturnType() == TileType.Fire)
                        {
                            nextTile.ReturnNorth().SetType(TileType.Normal);
                            nextTile.ReturnNorth().Blocked = false;
                            nextTile.ReturnNorth().SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                            nextTile.ReturnNorth().name = "Normal Tile";

                            nextTile.SetType(_holdingItemTileType);
                            nextTile.SetMaterial(_holdingIteMaterial);
                            nextTile.name = _holdingItemName;
                            nextTile = nextTile.ReturnSouth();
                            Debug.Log("Moved");

                        }
                        Debug.Log("Hit a thing");
                        GameManager.Instance.audioManager.PlayAudio(GameManager.Instance.audioManager.CRATE_OBSTACLE_COLLISION, false);
                        if (nextTile.ReturnType() == TileType.Door)
                        {
                            nextTile.Blocked = false;
                            nextTile.SetMaterial(GameManager.Instance.brokenDoor);
                            nextTile.ReturnNorth().SetType(TileType.Normal);
                            nextTile.ReturnNorth().Blocked = false;
                            nextTile.ReturnNorth().SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                            nextTile.ReturnNorth().name = "Normal Tile";
                        }
                        else if (nextTile.ReturnType() == TileType.Fire)
                        {
                            originaltile.SetType(_holdingItemTileType);
                            originaltile.SetMaterial(_holdingIteMaterial);
                            originaltile.name = _holdingItemName;
                            originaltile.Blocked = true;
                        }
                    }
                    else if (_newTile == _parentTile.ReturnEast())
                    {
                        Tile nextTile = _newTile;
                        nextTile.Blocked = false;
                        while (!nextTile.IsBlocked() || nextTile.ReturnType() == TileType.Fire)
                        {
                            nextTile.ReturnWest().SetType(TileType.Normal);
                            nextTile.ReturnWest().Blocked = false;
                            nextTile.ReturnWest().SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                            nextTile.ReturnWest().name = "Normal Tile";

                            nextTile.SetType(_holdingItemTileType);
                            nextTile.SetMaterial(_holdingIteMaterial);
                            nextTile.name = _holdingItemName;
                            nextTile = nextTile.ReturnEast();
                            Debug.Log("Moved");

                        }
                        Debug.Log("Hit a thing");
                        GameManager.Instance.audioManager.PlayAudio(GameManager.Instance.audioManager.CRATE_OBSTACLE_COLLISION, false);
                        if (nextTile.ReturnType() == TileType.Door)
                        {
                            nextTile.SetMaterial(GameManager.Instance.brokenDoor);
                            nextTile.Blocked = false;
                            nextTile.ReturnWest().SetType(TileType.Normal);
                            nextTile.ReturnWest().Blocked = false;
                            nextTile.ReturnWest().SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                            nextTile.ReturnWest().name = "Normal Tile";
                        }
                        else if (nextTile.ReturnType() == TileType.Fire)
                        {
                            originaltile.SetType(_holdingItemTileType);
                            originaltile.SetMaterial(_holdingIteMaterial);
                            originaltile.name = _holdingItemName;
                            originaltile.Blocked = true;
                        }
                    }
                    else if (_newTile == _parentTile.ReturnWest())
                    {
                        Tile nextTile = _newTile;
                        nextTile.Blocked = false;
                               while (!nextTile.IsBlocked() || nextTile.ReturnType() == TileType.Fire)
                        {
                            nextTile.ReturnEast().SetType(TileType.Normal);
                            nextTile.ReturnEast().Blocked = false;
                            nextTile.ReturnEast().SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                            nextTile.ReturnEast().name = "Normal Tile";

                            nextTile.SetType(_holdingItemTileType);
                            nextTile.SetMaterial(_holdingIteMaterial);
                            nextTile.name = _holdingItemName;
                            nextTile = nextTile.ReturnWest();
                            Debug.Log("Moved");

                        }
                        Debug.Log("Hit a thing");
                        GameManager.Instance.audioManager.PlayAudio(GameManager.Instance.audioManager.CRATE_OBSTACLE_COLLISION, false);
                        if (nextTile.ReturnType() == TileType.Door)
                        {
                            nextTile.SetMaterial(GameManager.Instance.brokenDoor);
                            nextTile.Blocked = false;
                            nextTile.ReturnEast().SetType(TileType.Normal);
                            nextTile.ReturnEast().Blocked = false;
                            nextTile.ReturnEast().SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                            nextTile.ReturnEast().name = "Normal Tile";
                        }
                        else if (nextTile.ReturnType() == TileType.Fire)
                        {
                            nextTile.Blocked = false;
                            nextTile.ReturnEast().SetType(TileType.Normal);
                            nextTile.ReturnEast().Blocked = false;
                            nextTile.ReturnEast().SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                            nextTile.ReturnEast().name = "Normal Tile";


                            originaltile.SetType(_holdingItemTileType);
                            originaltile.SetMaterial(_holdingIteMaterial);
                            originaltile.name = _holdingItemName;
                            originaltile.Blocked = true;
                        }
                    }

                }
            }
        }





        //Determing what happens depending on the pkayer input and position (WARNING: Monster function)
        private void DetermineMoveState()
        {
      

            _moving = true;
            switch (_playerMoveState)
            {

                case PlayerMoveState.Up:

                    if (_parentTile.GetComponent<Tile>().ReturnNorth() == null) return;
                    if (_parentTile.GetComponent<Tile>().ReturnNorth().IsBlocked())
                    {
                        _newTile = _parentTile.GetComponent<Tile>().ReturnNorth();
                        if (_isHoldingItem && _newTile.ReturnType() == TileType.Fire)
                        {
                            _heldItem.GetComponentInChildren<Crate>().ReturnToOriginalPosition();
                            _isHoldingItem = false;
                        }
                        _moving = false;
                        _animator.SetTrigger("Up");
                    }
                    else if (_isHoldingItem)
                    {
                        if (_newTile.ReturnType() == TileType.Oil || _horizontal) return;
                        _newTile = _parentTile.GetComponent<Tile>().ReturnNorth();
                        if (_newTile.ReturnType() == TileType.Oil) return;
                        _vertical = true;
                        _horizontal = false;
                        GameManager.Instance.audioManager.PlayAudio(GameManager.Instance.audioManager.CRATE_PUSH, false);
                        //PUSHING
                        if (_horizontalSide)
                        {
                            _animator.SetTrigger("Up");
                            _childTile = _newTile.ReturnNorth();

                            if (_childTile.IsBlocked() || _childTile.ReturnType() == TileType.Oil) return; 

                            //FIRE
                            if (_childTile.ReturnType() == TileType.Fire)
                            {

                                _heldItem.ReturnCrate().GetComponent<Crate>().ReturnToOriginalPosition();
                                _childTile = null;
                                _isHoldingItem = false;
                                _newTile.SetType(TileType.Normal);
                                _newTile.name = "Normal Tile";
                                _newTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                                return;
                            }

                            _newTile.SetType(TileType.Normal);
                            _newTile.name = "Normal Tile";
                            _newTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);

                            //CRATE

                            _childTile.SetItem(_newTile.ReturnCrate());
                            _newTile.ReturnCrate().transform.SetParent(_childTile.transform, false);

                            _childTile.SetType(_holdingItemTileType);
                            _childTile.name = _holdingItemName;
                            _childTile.SetMaterial(_holdingIteMaterial);
                            _childTile.Blocked = false;
                            _heldItem = _childTile;
                            _parentTile = _newTile;
                        }
                        //PULLING
                        else
                        {
                           Debug.Log("Pulling");
                            _animator.SetTrigger("Down");


                            _childTile = _parentTile.ReturnSouth();
                            switch (_newTile.ReturnType())
                            {
                                case TileType.Oil:
                                    return;
                                case TileType.Fire:
                                    _heldItem.ReturnCrate().GetComponent<Crate>().ReturnToOriginalPosition();
                                    _isHoldingItem = false;
                                    _childTile.SetType(TileType.Normal);
                                    _childTile.name = "Normal Tile";
                                    _childTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                                    Tile entry = GameManager.Instance._levelEntry;
                                    _parentTile = entry;
                                    transform.position = new Vector3(entry.transform.position.x, transform.position.y, entry.transform.position.z);
                                    GameManager.Instance.uiManager.TriggerFade();
                                    return;
                            }
                            //FIRE

                            _childTile.SetType(TileType.Normal);
                            _childTile.name = "Normal Tile";
                            _childTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                            
                            //CRATE
                            _parentTile.SetItem(_childTile.ReturnCrate());
                            _childTile.ReturnCrate().transform.SetParent(_parentTile.transform, false);

                            _parentTile.SetType(_holdingItemTileType);
                            _parentTile.name = _holdingItemName;
                            _parentTile.SetMaterial(_holdingIteMaterial);
                            _parentTile.Blocked = false;
                            _heldItem = _parentTile;
                            _parentTile = _newTile;
                        }
                    }
                    else
                    {
                        _newTile = _parentTile.GetComponent<Tile>().ReturnNorth();
                        _animator.SetTrigger("Up");
                        if (_parentTile.GetComponent<Tile>().ReturnNorth().ReturnType() == TileType.Fire)
                        {
                            Tile entry = GameManager.Instance._levelEntry;
                            _parentTile = entry;
                            transform.position = new Vector3(entry.transform.position.x, transform.position.y,entry.transform.position.z);
                            GameManager.Instance.uiManager.TriggerFade();
                        }
                        else
                            _parentTile = _parentTile.GetComponent<Tile>().ReturnNorth();
                    }

                    break;

                case PlayerMoveState.Down:

                    
                  
            
                    if (_parentTile.GetComponent<Tile>().ReturnSouth() == null) return;
                    if (_parentTile.GetComponent<Tile>().ReturnSouth().IsBlocked())
                    {
                        _newTile = _parentTile.GetComponent<Tile>().ReturnSouth();
                        if (_isHoldingItem && _newTile.ReturnType() == TileType.Fire)
                        {
                            _heldItem.GetComponentInChildren<Crate>().ReturnToOriginalPosition();
                            _isHoldingItem = false;
                        }

                        _moving = false;
                        _animator.SetTrigger("Down");
                    }
                    else if (_isHoldingItem)
                    {
                        if (_newTile.ReturnType() == TileType.Oil || _horizontal) return;
                        _newTile = _parentTile.GetComponent<Tile>().ReturnSouth();
                        if (_newTile.ReturnType() == TileType.Oil) return;
                        _vertical = true;
                        _horizontal = false;

                        GameManager.Instance.audioManager.PlayAudio(GameManager.Instance.audioManager.CRATE_PUSH, false);
                        //PULLING
                        if (_horizontalSide)

                        {
                            _animator.SetTrigger("Up");

                            _childTile = _parentTile.ReturnNorth();
                            if (_parentTile.IsBlocked()) return;
                            //FIRE
                            switch (_newTile.ReturnType())
                            {
                                case TileType.Oil:
                                    return;
                                case TileType.Fire:
                                    _heldItem.ReturnCrate().GetComponent<Crate>().ReturnToOriginalPosition();
                                    _isHoldingItem = false;
                                    _childTile.SetType(TileType.Normal);
                                    _childTile.name = "Normal Tile";
                                    _childTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                                    Tile entry = GameManager.Instance._levelEntry;
                                    _parentTile = entry;
                                    transform.position = new Vector3(entry.transform.position.x, transform.position.y, entry.transform.position.z);
                                    GameManager.Instance.uiManager.TriggerFade();
                                    return;
                            }

                            _childTile.SetType(TileType.Normal);
                            _childTile.name = "Normal Tile";
                            _childTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);

                            //CRATE
                            _parentTile.SetItem(_childTile.ReturnCrate());
                            _childTile.ReturnCrate().transform.SetParent(_parentTile.transform, false);


                            _parentTile.SetType(_holdingItemTileType);
                            _parentTile.name = _holdingItemName;
                            _parentTile.SetMaterial(_holdingIteMaterial);
                            _parentTile.Blocked = false;
                            _heldItem = _parentTile;
                            _parentTile = _newTile;
                        }


                        //PUSHING
                        else
                        {
                            _animator.SetTrigger("Down");
                            _childTile = _newTile.ReturnSouth();
                            if (_childTile.IsBlocked()) return;

                            //FIRE
                            switch (_childTile.ReturnType())
                            {
                                case TileType.Oil:
                                    return;
                                case TileType.Fire:
                                    _heldItem.ReturnCrate().GetComponent<Crate>().ReturnToOriginalPosition();
                                    _childTile = null;
                                    _isHoldingItem = false;
                                    _newTile.SetType(TileType.Normal);
                                    _newTile.name = "Normal Tile";
                                    _newTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                                    return;
                            }


                            _newTile.SetType(TileType.Normal);
                            _newTile.name = "Normal Tile";
                            _newTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);

                            //CRATE
                            _childTile.SetItem(_newTile.ReturnCrate());
                            _newTile.ReturnCrate().transform.SetParent(_childTile.transform, false);

                            _childTile.SetType(_holdingItemTileType);
                            _childTile.name = _holdingItemName;
                            _childTile.SetMaterial(_holdingIteMaterial);
                            _childTile.Blocked = false;
                            _heldItem = _childTile;

                            _parentTile = _newTile;

                        }
                    }
                    else
                    {
                        _newTile = _parentTile.GetComponent<Tile>().ReturnSouth();
                        _animator.SetTrigger("Down");
                        if (_parentTile.GetComponent<Tile>().ReturnSouth().ReturnType() == TileType.Fire)
                        {
                            Tile entry = GameManager.Instance._levelEntry;
                            _parentTile = entry;
                            transform.position = new Vector3(entry.transform.position.x, transform.position.y, entry.transform.position.z);
                            GameManager.Instance.uiManager.TriggerFade();
                        }
                        else
                            _parentTile = _parentTile.GetComponent<Tile>().ReturnSouth();
                    }

                    break;
                case PlayerMoveState.Left:
                    _newTile = _parentTile.GetComponent<Tile>().ReturnWest();

                    if (_parentTile.GetComponent<Tile>().ReturnWest() == null) return;

                    if (_parentTile.GetComponent<Tile>().ReturnWest().IsBlocked())
                    {
                        _newTile = _parentTile.GetComponent<Tile>().ReturnWest();
                        if (_isHoldingItem && _newTile.ReturnType() == TileType.Fire)
                        {
                            _heldItem.GetComponentInChildren<Crate>().ReturnToOriginalPosition();
                            _isHoldingItem = false;
                        }

                        if(_isHoldingItem && _vertical)
                        _moving = false;
                        _animator.SetTrigger("Left");
                    }
                    else if (_isHoldingItem)
                    {
                        if (_newTile.ReturnType() == TileType.Oil || _vertical) return;
                        _newTile = _parentTile.GetComponent<Tile>().ReturnWest();
                        if (_newTile.ReturnType() == TileType.Oil) return;
                        _vertical = false;
                        _horizontal = true;
                        GameManager.Instance.audioManager.PlayAudio(GameManager.Instance.audioManager.CRATE_PUSH, false);
                        //PULLING
                        if (_verticalSide)

                        {
                            _animator.SetTrigger("Right");

                            _childTile = _parentTile.ReturnEast();
                            if (_parentTile.IsBlocked() || _newTile.ReturnType() == TileType.Oil) return;

                            //FIRE
                            if (_newTile.ReturnType() == TileType.Fire)
                            {
                                _heldItem.ReturnCrate().GetComponent<Crate>().ReturnToOriginalPosition();
                                _isHoldingItem = false;
                                _childTile.SetType(TileType.Normal);
                                _childTile.name = "Normal Tile";
                                _childTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                                Tile entry = GameManager.Instance._levelEntry;
                                _parentTile = entry;
                                transform.position = new Vector3(entry.transform.position.x, transform.position.y, entry.transform.position.z);
                                GameManager.Instance.uiManager.TriggerFade();
                                return;
                            }

                            _childTile.SetType(TileType.Normal);
                            _childTile.name = "Normal Tile";
                            _childTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);

                            //CRATE
                            _parentTile.SetItem(_childTile.ReturnCrate());
                            _childTile.ReturnCrate().transform.SetParent(_parentTile.transform, false);

                            _parentTile.SetType(_holdingItemTileType);
                            _parentTile.name = _holdingItemName;
                            _parentTile.SetMaterial(_holdingIteMaterial);
                            _parentTile.Blocked = false;
                            _heldItem = _parentTile;
                            _parentTile = _newTile;
                        }


                        //PUSHING
                        else
                        {
                            _animator.SetTrigger("Left");
                            _childTile = _newTile.ReturnWest();
                            if (_childTile.IsBlocked()) return;

                            //FIRE
                            switch (_childTile.ReturnType())
                            {
                                case TileType.Oil:
                                    return;
                                case TileType.Fire:
                                    _heldItem.ReturnCrate().GetComponent<Crate>().ReturnToOriginalPosition();
                                    _childTile = null;
                                    _isHoldingItem = false;
                                    _newTile.SetType(TileType.Normal);
                                    _newTile.name = "Normal Tile";
                                    _newTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                                    return;
                            }

                            _newTile.SetType(TileType.Normal);
                            _newTile.name = "Normal Tile";
                            _newTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);

                            //CRATE
                            _childTile.SetItem(_newTile.ReturnCrate());
                            _newTile.ReturnCrate().transform.SetParent(_childTile.transform, false);
                            
                            _childTile.SetType(_holdingItemTileType);
                            _childTile.name = _holdingItemName;
                            _childTile.SetMaterial(_holdingIteMaterial);
                            _childTile.Blocked = false;
                            _heldItem = _childTile;

                            _parentTile = _newTile;

                        }
                    }
                    else
                    {
                        _newTile = _parentTile.GetComponent<Tile>().ReturnWest();
                        _animator.SetTrigger("Left");
                        if (_parentTile.GetComponent<Tile>().ReturnWest().ReturnType() == TileType.Fire)
                        {
                            Tile entry = GameManager.Instance._levelEntry;
                            _parentTile = entry;
                            transform.position = new Vector3(entry.transform.position.x, transform.position.y, entry.transform.position.z);
                            GameManager.Instance.uiManager.TriggerFade();
                        }
                        else
                            _parentTile = _parentTile.GetComponent<Tile>().ReturnWest();
                    }
                    break;
                case PlayerMoveState.Right:
                  
                    if (_parentTile.GetComponent<Tile>().ReturnEast() == null) return;
                    if (_parentTile.GetComponent<Tile>().ReturnEast().IsBlocked())
                    {
                        _newTile = _parentTile.GetComponent<Tile>().ReturnEast();
                        if (_isHoldingItem && _newTile.ReturnType() == TileType.Fire)
                        {
                            _heldItem.GetComponentInChildren<Crate>().ReturnToOriginalPosition();
                            _isHoldingItem = false;
                        }

                        _moving = false;
                        _animator.SetTrigger("Right");
                    }
                    else if (_isHoldingItem)
                    {
                        if (_newTile.ReturnType() == TileType.Oil || _vertical) return;
                        _newTile = _parentTile.GetComponent<Tile>().ReturnEast();
                        if (_newTile.ReturnType() == TileType.Oil) return;
                        _vertical = false;
                        _horizontal = true;
                        GameManager.Instance.audioManager.PlayAudio(GameManager.Instance.audioManager.CRATE_PUSH, false);
                        //PULLING
                        if (!_verticalSide)

                        {
                            _animator.SetTrigger("Left");

                            _childTile = _parentTile.ReturnWest();
                            if (_parentTile.IsBlocked()) return;

                            switch (_newTile.ReturnType())
                            {
                                case TileType.Oil:
                                    return;
                                case TileType.Fire:
                                    _heldItem.ReturnCrate().GetComponent<Crate>().ReturnToOriginalPosition();
                                    _isHoldingItem = false;
                                    _childTile.SetType(TileType.Normal);
                                    _childTile.name = "Normal Tile";
                                    _childTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                                    Tile entry = GameManager.Instance._levelEntry;
                                    _parentTile = entry;
                                    transform.position = new Vector3(entry.transform.position.x, transform.position.y, entry.transform.position.z);
                                    GameManager.Instance.uiManager.TriggerFade();
                                    return;
                            }
                            //FIRE

                            _childTile.SetType(TileType.Normal);
                            _childTile.name = "Normal Tile";
                            _childTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);

                            //CRATE

                            _parentTile.SetItem(_childTile.ReturnCrate());
                            _childTile.ReturnCrate().transform.SetParent(_parentTile.transform, false);

                            _parentTile.SetType(_holdingItemTileType);
                            _parentTile.name = _holdingItemName;
                            _parentTile.SetMaterial(_holdingIteMaterial);
                            _parentTile.Blocked = false;
                            _heldItem = _parentTile;
                            _parentTile = _newTile;
                        }


                        //PUSHING
                        else
                        {
                            _animator.SetTrigger("Right");
                            _childTile = _newTile.ReturnEast();
                            if (_childTile.IsBlocked()) return;

                            //FIRE
                            switch (_childTile.ReturnType())
                            {
                                case TileType.Oil:
                                    return;
                                case TileType.Fire:
                                    _heldItem.ReturnCrate().GetComponent<Crate>().ReturnToOriginalPosition();
                                    _childTile = null;
                                    _isHoldingItem = false;
                                    _newTile.SetType(TileType.Normal);
                                    _newTile.name = "Normal Tile";
                                    _newTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);
                                    return;
                            }

                            _newTile.SetType(TileType.Normal);
                            _newTile.name = "Normal Tile";
                            _newTile.SetMaterial(PrefabHolder.Instance.TileNormalMaterial);

                            //CRATE
                            _childTile.SetItem(_newTile.ReturnCrate());
                            _newTile.ReturnCrate().transform.SetParent(_childTile.transform, false);

                            _childTile.SetType(_holdingItemTileType);
                            _childTile.name = _holdingItemName;
                            _childTile.SetMaterial(_holdingIteMaterial);
                            _childTile.Blocked = false;
                            _heldItem = _childTile;

                            _parentTile = _newTile;

                        }
                    }
                    else
                    {
                        _newTile = _parentTile.GetComponent<Tile>().ReturnEast();
                        _animator.SetTrigger("Right");
                        if (_parentTile.GetComponent<Tile>().ReturnEast().ReturnType() == TileType.Fire)
                        {
                            Tile entry = GameManager.Instance._levelEntry;
                            _parentTile = entry;
                            transform.position = new Vector3(entry.transform.position.x, transform.position.y, entry.transform.position.z);
                            GameManager.Instance.uiManager.TriggerFade();
                        }
                        else
                            _parentTile = _parentTile.GetComponent<Tile>().ReturnEast();
                    }
                    break;


                case PlayerMoveState.Idle:
                    _animator.SetTrigger("Idle");
                    break;
                
                    
            }
        }

        void PlayerInput()
        {
            if (GameManager.Instance.CurrentLevel == 10) return;
            if (_steppedOnOil && _playerMoveState != PlayerMoveState.Idle) return;
            if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
            {
               if (_horizontal) return;

               
                latest = 1;
                _playerMoveState = PlayerMoveState.Up;
            }

            else if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
            {
                if (_horizontal) return;
                latest = 2;
                _playerMoveState = PlayerMoveState.Down;
             
            }

            else if(Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
            {
                if (_vertical) return;
                latest = 3;
                _playerMoveState = PlayerMoveState.Left;
                
            }

            else if(Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
            {
                if (_vertical) return;
                latest = 4;
                _playerMoveState = PlayerMoveState.Right;
            }

            else if(Input.GetKeyDown(KeyCode.E) || Input.GetKeyDown(KeyCode.Keypad0))
            {
                Interact();
            }


            if (transform.position != _parentTile.transform.position)
            {

                if (Input.GetKeyUp(KeyCode.D) || Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.W) ||
                    Input.GetKeyUp(KeyCode.S) || Input.GetKeyUp(KeyCode.UpArrow) ||
                    Input.GetKeyUp(KeyCode.RightArrow) || Input.GetKeyUp(KeyCode.LeftArrow) ||
                    Input.GetKeyUp(KeyCode.DownArrow))
                {
                    latest = 0; 
                    _playerMoveState = PlayerMoveState.Idle;
                }
            }




        }

       
    }
}
