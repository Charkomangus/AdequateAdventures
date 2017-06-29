using System;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using Assets.Scripts.MapCreator;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.Tiles
{
    public class Tile : MonoBehaviour, IPointerClickHandler, IPointerDownHandler, IPointerEnterHandler
    {
        [SerializeField] private TileType _type = TileType.Normal;
        [SerializeField] private TileObject _object = TileObject.Empty;
        [SerializeField] private bool _blocked, _exit, _entry, _puzzleComplete, _puzzleEntry;
        [SerializeField] public Vector2 _gridPosition = Vector2.zero;
        private GameObject _tilePrefab, _objectPrefab;
        private GameObject _currentType, _currentObject;
        private string _currentScene;
        private List<Tile> _neighbors = new List<Tile>();
        public Tile North, West, East, South;
        [SerializeField]
        private int _tileDirection = -1;


        // Use this for initialization
        private void Start()
        {
            if (_type == TileType.Null && _currentScene == "Level1")
            {
                Destroy(gameObject);
                return;
            }
            name = _type + " Tile";
            _currentScene = SceneManager.GetActiveScene().name;
            GenerateNewObject();
            if(_tileDirection != -1)
                SetConveyorDirection(_tileDirection);
            switch (_currentScene)
            {
                case "Level1":
                {
                    List<List<Tile>> map = GameManager.Instance.GetComponent<MapGenerator>().ReturnMap();
                    int mapSize = GameManager.Instance.GetComponent<MapGenerator>().ReturnMapSize();
                    GenerateNeighbors(map, mapSize);
                    GetComponentInChildren<TextMesh>().gameObject.SetActive(true);
                    ShowFlags();
                    }
                    break;
                //Level creator
                case "MapCreatorScene":
                {
                    List<List<Tile>> map = GetComponentInParent<MapCreatorManager>().ReturnMap();
                    int mapSize = GetComponentInParent<MapCreatorManager>().ReturnMapSize();
                    GenerateNeighbors(map, mapSize);
                    
                    //Show flags as text
                    GetComponentInChildren<TextMesh>().gameObject.SetActive(true);
                    ShowFlags();
                }
                    break;
            }
            ShowFlags();
            SetObject(_object);

        }

        private void SetConveyorDirection(int direction)
        {
            if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                _type == TileType.GreenConveyorBelt)
                GetComponentInChildren<ConveyorBelt>().SetDirecton(direction);
        }
     

        private void ShowFlags()
        {
            if (_puzzleEntry)
                GetComponentInChildren<TextMesh>().text = "PE";
            else if (_puzzleComplete)
                GetComponentInChildren<TextMesh>().text = "PC";
            else if (_entry)
                GetComponentInChildren<TextMesh>().text = "ENTRY";
            else if (_exit)
                GetComponentInChildren<TextMesh>().text = "EXIT";
            else
                GetComponentInChildren<TextMesh>().text = " ";

        }

        /// <summary>
        /// Each tile will find out what all it's neighboring tiles are and store them in a list. 
        /// </summary>
        public void GenerateNeighbors(List<List<Tile>> map, int mapSize)
        {
            _neighbors = new List<Tile>();

            //NORTH
            if (_gridPosition.y > 0)
            {
                var n = new Vector2(_gridPosition.x, _gridPosition.y - 1);
                _neighbors.Add(map[(int) Mathf.Round(n.x)][(int) Mathf.Round(n.y)]);
                North = map[(int) Mathf.Round(n.x)][(int) Mathf.Round(n.y)];
            }

            //WEST
            if (_gridPosition.x > 0)
            {
                var n = new Vector2(_gridPosition.x - 1, _gridPosition.y);
                _neighbors.Add(map[(int) Mathf.Round(n.x)][(int) Mathf.Round(n.y)]);
                West = map[(int) Mathf.Round(n.x)][(int) Mathf.Round(n.y)];
            }
            //EAST
            if (_gridPosition.x < mapSize - 1)
            {
                var n = new Vector2(_gridPosition.x + 1, _gridPosition.y);
                _neighbors.Add(map[(int) Mathf.Round(n.x)][(int) Mathf.Round(n.y)]);
                East = map[(int) Mathf.Round(n.x)][(int) Mathf.Round(n.y)];
            }

            //SOUTH
            if (_gridPosition.y < mapSize - 1)
            {
                var n = new Vector2(_gridPosition.x, _gridPosition.y + 1);
                _neighbors.Add(map[(int) Mathf.Round(n.x)][(int) Mathf.Round(n.y)]);
                South = map[(int) Mathf.Round(n.x)][(int) Mathf.Round(n.y)];
            }
        }


        //Set the tile prefab and variables
        public void SetType(TileType type)
        {
            name = _type + " Tile";
            _type = type;
            //definitions of TileType properties
            switch (type)
            {
                case TileType.Normal:
                    _blocked = false;
                    _tilePrefab = PrefabHolder.Instance.TileNormal;
                    break;

                case TileType.Oil:
                    _blocked = false;
                    _tilePrefab = PrefabHolder.Instance.TileOil;
                    break;

                case TileType.Ice:
                    _blocked = false;
                    _tilePrefab = PrefabHolder.Instance.TileIce;
                    break;

                case TileType.Blocked:
                    _blocked = true;
                    _tilePrefab = PrefabHolder.Instance.TileBlocked;
                    break;

                case TileType.Wall:
                    _blocked = true;
                    _tilePrefab = PrefabHolder.Instance.TileWall;
                    break;

                case TileType.Fire:
                    _blocked = false;
                    _tilePrefab = PrefabHolder.Instance.TileFire;
                    break;
                case TileType.IceCracks:
                    _blocked = false;
                    _tilePrefab = PrefabHolder.Instance.TileIceCracks;
                    break;
                case TileType.Door:
                    _blocked = true;
                    _tilePrefab = PrefabHolder.Instance.TileDoor;
                    break;
                case TileType.GreenConveyorBelt:
                    _blocked = false;
                    _tilePrefab = PrefabHolder.Instance.GreenBelt;
                    break;
                case TileType.RedConveyorBelt:
                    _blocked = false;
                    _tilePrefab = PrefabHolder.Instance.RedBelt;
                    break;
                case TileType.BlueConveyorBelt:
                    _blocked = false;
                    _tilePrefab = PrefabHolder.Instance.BlueBelt;
                    break;
                case TileType.Null:
                    _blocked = true;
                    _tilePrefab = PrefabHolder.Instance.TileNull;
                    break;
                default:
                    _blocked = false;
                    _tilePrefab = PrefabHolder.Instance.TileNormal;
                    break;
            }

            GenerateVisuals();
        }

        //Set the tile prefab and variables
        public void SetObject(TileObject Object)
        {
            _object = Object;
            //definitions of TileType properties
            switch (Object)
            {
                case TileObject.Box:
                    _blocked = true;
                    _objectPrefab = PrefabHolder.Instance.Box;
                    break;
                case TileObject.SlidingBox:
                    _blocked = true;
                    _objectPrefab = PrefabHolder.Instance.SlidingBox;
                    break;
                case TileObject.Sign:
                    _blocked = true;
                    _objectPrefab = PrefabHolder.Instance.Sign;
                    break;
                case TileObject.GreenSwitch:
                    _blocked = true;
                    _objectPrefab = PrefabHolder.Instance.GreenSwitch;
                    break;
                case TileObject.RedSwitch:
                    _blocked = true;
                    _objectPrefab = PrefabHolder.Instance.RedSwitch;
                    break;
                case TileObject.BlueSwitch:
                    _blocked = true;
                    _objectPrefab = PrefabHolder.Instance.BlueSwitch;
                    break;
                case TileObject.Empty:
                    _objectPrefab = null;
                    break;
                default:
                    throw new ArgumentOutOfRangeException("Object", Object, null);
            }
        }


        //Generate a tiles objects
        public void GenerateNewObject()
        {
            var container = transform.FindChild("Objects").gameObject;
            //initially remove all children
            for (var i = 0; i < container.transform.childCount; i++)
            {
                Destroy(container.transform.GetChild(i).gameObject);
            }
            if (_objectPrefab == null) return;
            var newObject = Instantiate(_objectPrefab, transform.position, Quaternion.Euler(new Vector3(90, 0, 0)));
            newObject.transform.SetParent(container.transform);
            _currentObject = newObject;
        }

        //Generate a tiles objects
        public void GenerateObject(GameObject newObject)
        {
            var container = transform.FindChild("Objects").gameObject;
            //initially remove all children
            for (var i = 0; i < container.transform.childCount; i++)
            {
                Destroy(container.transform.GetChild(i).gameObject);
            }
            if (_objectPrefab == null) return;
            newObject.transform.SetParent(container.transform);
            _currentObject = newObject;
        }

        //Generate a tiles visuals
        public void GenerateVisuals()
        {

            var container = transform.FindChild("Visuals").gameObject;
            //initially remove all children
            for (var i = 0; i < container.transform.childCount; i++)
            {
                Destroy(container.transform.GetChild(i).gameObject);
            }

            var newType = Instantiate(_tilePrefab, transform.position, Quaternion.Euler(new Vector3(90, 0, 0)));
            newType.transform.localScale = new Vector3(1, 1, 1);

            newType.transform.SetParent(container.transform);

            _currentType = newType;
        }

        //Completely destroy a tile, its close family and all it's friends
        private void Delete4()
        {
            if (North != null)
            {
                Delete(North);

                if (North.East != null)
                {
                    Delete(North.ReturnEast());

                    if (North.East.East != null)
                    {
                        Delete(North.ReturnEast().ReturnEast());

                        if (North.East.East.East != null)
                            Delete(North.ReturnEast().ReturnEast().ReturnEast());
                    }
                }
            }
            if (East != null)
            {
                Delete(East);

                if (East.East != null)
                {
                    Delete(East.ReturnEast());

                    if (East.East.East != null)
                    {
                        Delete(East.ReturnEast().ReturnEast());

                    }
                }
            }
            if (South != null)
            {
                if (South.South != null)
                {
                    Delete(South.ReturnSouth());

                    if (South.South.East != null)
                    {
                        Delete(South.ReturnSouth().ReturnEast());

                        if (South.South.East.East != null)
                        {
                            Delete(South.ReturnSouth().ReturnEast().ReturnEast());

                            if (South.South.East.East.East != null)
                                Delete(South.ReturnSouth().ReturnEast().ReturnEast().ReturnEast());
                        }
                    }
                }
            }


            //if (South.ReturnSouth() != null)
        //{
        //    Delete(South.ReturnSouth());

        //    if (South.ReturnSouth().ReturnEast() != null)
        //    {
        //        Delete(South.ReturnSouth().ReturnEast());

        //        if (South.ReturnSouth().ReturnEast() != null)
        //        {
        //            Delete(South.ReturnSouth().ReturnEast().ReturnEast().ReturnEast());

        //            if (South.ReturnSouth().ReturnEast().ReturnEast().ReturnEast()!= null)
        //            {
        //                Delete(South.ReturnSouth().ReturnEast().ReturnEast().ReturnEast());

        //            }
        //        }
        //    }
        //}

        if (South != null)
            {
                Delete(South);

                if (South.East != null)
                {
                    Delete(South.ReturnEast());

                    if (South.East.East != null)
                    {
                        Delete(South.ReturnEast().ReturnEast());

                        if (South.East.East.East != null)
                            Delete(South.ReturnEast().ReturnEast().ReturnEast());
                    }
                }
            }
            Delete(this);
        }


        //Completely destroy a tile and its close family
        private void Delete2()
        {
           
            if(North != null && North.East != null)
                Delete(North.ReturnEast());
            if (North != null)
                Delete(North);
            if (East != null)
                Delete(East);
            Delete(this);
        }

        //Completely destroy a tile
        private void Delete(Tile tile)
        {
            if (tile == null) return;
            tile.SetType(TileType.Null);
            tile.SetEntry(false);
            tile.SetBlocked(false);
            tile.SetExit(false);
            tile.SetPuzzleComplete(false);
            tile.SetPuzzleEntry(false);
            tile.SetDirection(-1);
            tile.SetObject(TileObject.Empty);
        }

        //REMOVE IN RELEASE
        public void OnPointerClick(PointerEventData eventData)
        {
            if (SceneManager.GetActiveScene().name != "MapCreatorScene") return;
         
            switch (MapCreatorManager.Instance.CurrentPlacingStatus)
            {
                case PlacingStatus.Type:
                {
                    if (Input.GetMouseButton(0))
                    {
                        SetType(MapCreatorManager.Instance.TileType);
                          
                    }
                    else if (Input.GetMouseButton(1))
                    {
                        SetType(TileType.Normal);
                    }
                }
                    break;
                case PlacingStatus.Object:
                {
                    if (Input.GetMouseButton(0))
                    {
                        SetObject(MapCreatorManager.Instance.ObjectType);
                   
                        }
                    else if (Input.GetMouseButton(1))
                    {
                        SetObject(TileObject.Empty);
                    }
                    GenerateNewObject();
                    }
                    break;
                case PlacingStatus.Flag:
                {
                    if (Input.GetMouseButton(0))
                    {
                        switch (MapCreatorManager.Instance.TileFlag)
                        {
                            case "Entry":
                                _entry = true;
                                ShowFlags();
                                break;
                            case "Exit":
                                _exit = true;
                                ShowFlags();
                                break;
                            case "PuzzleEntry":
                                _puzzleEntry = true;
                                ShowFlags();
                                break;
                            case "PuzzleExit":
                                _puzzleComplete = true;
                                ShowFlags();
                                break;
                            case "DeleteFlag":
                                _entry = false;
                                _exit = false;
                                _puzzleEntry = false;
                                _puzzleComplete = false;
                                ShowFlags();
                                break;
                            //Set the conveyor belt that is on this tile direction
                            case "North":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                                    _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 0;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(0);

                                }
                                break;
                            case "South":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                                    _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 1;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(1);
                                }
                                break;
                            case "West":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                                    _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 2;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(2);
                                }
                                break;
                            case "East":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                                    _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 3;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(3);
                                }
                                break;
                            case "Delete":
                                Delete(this);
                                break;
                            case "Delete2":
                                Delete2();
                                    break;
                            case "Delete4":
                                Delete4();
                                    break;
                            }
                    }
                    else if (Input.GetMouseButton(1))
                    {
                        _entry = false;
                        _exit = false;
                        _puzzleEntry = false;
                        _puzzleComplete = false;
                    }

                    ShowFlags();
                    break;
                }
            }
        }
        //REMOVE IN RELEASE
        public void OnPointerEnter(PointerEventData eventData)
        {
            if (SceneManager.GetActiveScene().name != "MapCreatorScene") return;

            switch (MapCreatorManager.Instance.CurrentPlacingStatus)
            {
                case PlacingStatus.Type:
                {
                    if (Input.GetMouseButton(0))
                    {
                        SetType(MapCreatorManager.Instance.TileType);
                    }
                    else if (Input.GetMouseButton(1))
                    {
                        SetType(TileType.Normal);
                    }
                }
                    break;
                case PlacingStatus.Object:
                {
                    if (Input.GetMouseButton(0))
                    {
                       SetObject(MapCreatorManager.Instance.ObjectType);
                        }
                    else if (Input.GetMouseButton(1))
                    {
                        SetObject(TileObject.Empty);
                    }
                    GenerateNewObject();
                    }
                    break;
                case PlacingStatus.Flag:
                {
                    if (Input.GetMouseButton(0))
                    {
                        switch (MapCreatorManager.Instance.TileFlag)
                        {
                            case "Entry":
                                _entry = true;
                                GetComponentInChildren<TextMesh>().text = "ENTRY";
                                break;
                            case "Exit":
                                _exit = true;
                                GetComponentInChildren<TextMesh>().text = "EXIT";
                                break;
                            case "PuzzleEntry":
                                _puzzleEntry = true;
                                GetComponentInChildren<TextMesh>().text = "PE";
                                break;
                            case "PuzzleComplete":
                                _puzzleComplete = true;
                                GetComponentInChildren<TextMesh>().text = "PC";
                                break;
                            case "DeleteFlag":
                                _entry = false;
                                _exit = false;
                                _puzzleEntry = false;
                                _puzzleComplete = false;
                                break;

                            //Set the conveyor belt that is on this tile direction
                            case "North":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                                    _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 0;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(0);

                                }
                                break;
                            case "South":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                                    _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 1;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(1);
                                }
                                break;
                            case "West":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                                    _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 2;
                                        GetComponentInChildren<ConveyorBelt>().SetDirecton(2);
                                }
                                break;
                            case "East":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt || _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 3;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(3);
                                }
                                    break;
                            case "Delete":
                                Delete(this);
                                break;
                            case "Delete2":
                                Delete2();
                                break;
                            case "Delete4":
                                Delete4();
                                break;

                            }
                        }
                    else if (Input.GetMouseButton(1))
                    {
                        _entry = false;
                        _exit = false;
                        _puzzleEntry = false;
                        _puzzleComplete = false;
                    }
                    ShowFlags();
                        break;
                }
                    
            }
        }

        //REMOVE IN RELEASE
        public void OnPointerDown(PointerEventData eventData)
        {
            if (SceneManager.GetActiveScene().name != "MapCreatorScene") return;

            switch (MapCreatorManager.Instance.CurrentPlacingStatus)
            {
                case PlacingStatus.Type:
                {
                    if (Input.GetMouseButton(0))
                    {
                        SetType(MapCreatorManager.Instance.TileType);
                    }
                    else if (Input.GetMouseButton(1))
                    {
                        SetType(TileType.Normal);
                    }
                }
                    break;
                case PlacingStatus.Object:
                {
                    if (Input.GetMouseButton(0))
                    {
                        SetObject(MapCreatorManager.Instance.ObjectType);
                        
                    }
                    else if (Input.GetMouseButton(1))
                    {
                        SetObject(TileObject.Empty);

                    }
                    GenerateNewObject();
                    }
                    break;
                case PlacingStatus.Flag:
                {
                    if (Input.GetMouseButton(0))
                    {
                        switch (MapCreatorManager.Instance.TileFlag)
                        {
                            case "Entry":
                                _entry = true;
                                GetComponentInChildren<TextMesh>().text = "ENTRY";
                                break;
                            case "Exit":
                                _exit = true;
                                GetComponentInChildren<TextMesh>().text = "EXIT";
                                break;
                            case "PuzzleEntry":
                                _puzzleEntry = true;
                                GetComponentInChildren<TextMesh>().text = "PE";
                                break;
                            case "PuzzleComplete":
                                _puzzleComplete = true;
                                GetComponentInChildren<TextMesh>().text = "PC";
                                break;
                            case "DeleteFlag":
                                _entry = false;
                                _exit = false;
                                _puzzleEntry = false;
                                _puzzleComplete = false;
                                break;
                            //Set the conveyor belt that is on this tile direction
                            case "North":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                                    _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 0;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(0);

                                }
                                break;
                            case "South":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                                    _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 1;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(1);
                                }
                                break;
                            case "West":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt ||
                                    _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 2;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(2);
                                }
                                break;
                            case "East":
                                if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt || _type == TileType.GreenConveyorBelt)
                                {
                                    _tileDirection = 3;
                                    GetComponentInChildren<ConveyorBelt>().SetDirecton(3);
                                }
                                break;
                            case "Delete":
                                Delete(this);
                                break;
                            case "Delete2":
                                Delete2();
                                break;
                            case "Delete4":
                                Delete4();
                                break;
                            }
                    
                        }
                    else if (Input.GetMouseButton(1))
                    {
                        _entry = false;
                        _exit = false;
                        _puzzleEntry = false;
                        _puzzleComplete = false;
                    }
                    ShowFlags();
                        break;
                    }
                   
            }
        }
        #region Sets & Returns

        /// <summary>
        /// Return Tile north of this tile
        /// </summary>
        /// <returns></returns>
        public Tile ReturnNorth()
        {
            return North;
        }

        /// <summary>
        /// Return Tile South of this tile
        /// </summary>
        /// <returns></returns>
        public Tile ReturnSouth()
        {
            return South;
        }


        /// <summary>
        /// Return Tile West of this tile
        /// </summary>
        /// <returns></returns>
        public Tile ReturnWest()
        {
            return West;
        }


        /// <summary>
        /// Return Tile East of this tile
        /// </summary>
        /// <returns></returns>
        public Tile ReturnEast()
        {
            return East;
        }


        /// <summary>
        /// Set the Tiles render Type
        /// </summary>
        /// <param name="renderType"></param>
        public void SetRenderType(GameObject renderType)
        {
            _currentType = renderType;
        }

        /// <summary>
        /// Return The tiles render Type
        /// </summary>
        /// <returns></returns>
        public GameObject ReturnRenderType()
        {
            return _currentType;
        }

        /// <summary>
        /// Return The tiles render Type
        /// </summary>
        /// <returns></returns>
        public GameObject ReturnCurrentObject()
        {
            return _currentObject;
        }


        /// <summary>
        /// Set the Tiles Position
        /// </summary>
        /// <param name="newPosition"></param>
        public void SetPosition(Vector2 newPosition)
        {
            _gridPosition = newPosition;
        }


        /// <summary>
        /// Return the Tiles neighbors
        /// </summary>
        /// <returns></returns>
        public List<Tile> ReturnNeighbors()
        {
            return _neighbors;
        }

        /// <summary>
        /// Return the current player status
        /// </summary>
        /// <returns></returns>
        public Vector2 ReturnPosition()
        {
            return _gridPosition;
        }

        /// <summary>
        /// Returns the tiles type
        /// </summary>
        /// <returns></returns>
        public TileType ReturnType()
        {
            return _type;
        }

        /// <summary>
        /// Returns the tiles object
        /// </summary>
        /// <returns></returns>
        public TileObject ReturnObject()
        {
            return _object;
        }

        //Set this tile as a level exit
        public void SetExit(bool status)
        {
            _exit = status;
        }

        //Return true if this tile is an exit
        public bool IsExit()
        {
            return _exit;
        }

        //Set this tile as a level entry
        public void SetEntry(bool status)
        {
            _entry = status;
        }

        //Return true if this tile is an entry
        public bool IsEntry()
        {
            return _entry;
        }

        //Set this tile as a puzzle complete tile
        public void SetPuzzleComplete(bool status)
        {
            _puzzleComplete = status;
        }

        //Return true if this tile is an puzzle complete tile
        public bool IsPuzzleComplete()
        {
            return _puzzleComplete;
        }

        //Set this tile as a puzzle entry
        public void SetPuzzleEntry(bool status)
        {
            _puzzleEntry = status;
        }

        //Return true if this tile is an puzzle entry
        public bool IsPuzzleEntry()
        {
            return _puzzleEntry;
        }

        //Set this tile as a blocked tile.
        public void SetBlocked(bool status)
        {
            _blocked = status;
        }

        //Return true if this tile is an puzzle entry
        public bool IsBlocked()
        {
            return _blocked;
        }

        //Set this tiles direction
        public void SetDirection(int direction)
        {
            _tileDirection = direction;
        }

        //Return the tiles direction
        public int ReturnDirection()
        {
            return _tileDirection;
        }


        //Sets tiles material
        public void SetMaterial(Material material)
        {
            GetComponentInChildren<Renderer>().sharedMaterial = material;
        }


        //Returns tiles current material
        public Material ReturnMaterial()
        {
            return GetComponentInChildren<Renderer>().sharedMaterial;
        }

        //Returns tiles current material
        public string ReturnFlag()
        {
            if (_puzzleEntry)
                return "PuzzleEntry";
            if (_puzzleComplete)
                return "PuzzleComplete";
            if (_entry)
                return "Entry";
            if (_exit)
                return "Exit";
            if (_tileDirection != -1)
            {
                switch (_tileDirection)
                {
                    case 0:
                        return "North";
                    case 1:
                        return "South";
                    case 2:
                        return "West";
                    case 3:
                        return "East";
                }
            }
            return "Null";
        }
        #endregion

    }
}
