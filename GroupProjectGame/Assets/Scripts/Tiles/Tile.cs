/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using System;
using System.Collections.Generic;
using Assets.Scripts.Actors;
using Assets.Scripts.MainManagers;
using Assets.Scripts.MapCreator;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

namespace Assets.Scripts.Tiles
{
    /// <summary>
    /// The tile class is the building block of this project - It determines what a tile is, what its behaviour will be like and what objects or actors will be present upon it
    /// </summary>
    public class Tile : MonoBehaviour, IPointerDownHandler, IPointerEnterHandler
    {
        [Header("Tile Type")]
        [SerializeField]
        private TileType _type = TileType.Normal;

        [Header("Object")]
        [SerializeField]
        private TileObject _object = TileObject.Empty;

        [Header("Actor")]
        [SerializeField]
        private Actor _actor = Actor.Null;

        [Header("Flags")]
        [SerializeField]
        private bool _blocked;
        [SerializeField]
        private bool _dialogue;
        [SerializeField]
        private bool _exit;
        [SerializeField]
        private bool _entry;
        [SerializeField]
        private bool _puzzleComplete;
        [SerializeField]
        private bool _puzzleEntry;
        [SerializeField]
        private bool _patrol;
        [SerializeField]
        private int _puzzleNumber = -1;
        [SerializeField]
        private int _tileDirection = -1;

        [Header("Position")]
        [SerializeField]
        private Vector2 _gridPosition = Vector2.zero;

        //Local reference to Prefabs of the tile and objects
        private GameObject _tilePrefab, _objectPrefab, _actorPrefab;

        //Which type and object does this tile currently have
        private GameObject _currentType, _currentObject, _currentActor;

        [Header("Neighbors")]
        private readonly List<Tile> _tiles = new List<Tile>();
        private List<Tile> _neighbors = new List<Tile>();
        public Tile North, West, East, South;

        /// <summary>
        /// Use this for initialization
        /// </summary>
        private void Start()
        {
            //If the tiles type is null and it's currently in level destroy this tile
            if (_type == TileType.Null && SceneManager.GetActiveScene().name == "Level1")
            {
                Destroy(gameObject);
                return;
            }

            //If the tile is a fire tile randomise the appearance of the fire
            if(_type == TileType.Fire)
            {
                var temp = GetComponentInChildren<ParticleSystem>();
                temp.transform.localScale = new Vector3(Random.Range(0.85f,1.5f),Random.Range(0.85f, 1.5f),Random.Range(0.85f, 1.5f));
                temp.transform.Rotate(new Vector3(0, 0, Random.Range(0, 359)));
            }

            //Set Tiles name for easy identification
            name = _type + " Tile";


            //Get a reference to the current map - Depending on the scene, from a different source
            List<List<Tile>> map = new List<List<Tile>>();
            switch (SceneManager.GetActiveScene().name)
            {
                case "Level1":
                    map = GameManager.Instance.GetComponent<MapGenerator>().ReturnMap();
                    break;

                case "MapCreatorScene":
                    map = MapCreatorManager.Instance.ReturnMap();
                    break;
            }
            //Generate neighbors
            GenerateNeighbors(map, map.Count);

            //Generate the tiles object
            GenerateNewObject();
            SetObject(_object);

            //If this tile has an assigned direction (that isnt -1) set whatever objects reside on it directions
            if (_tileDirection != -1)
            {
                SetObjectsDirection(_tileDirection);
            }

            //Show what flags this tile has
            ShowFlags();
            //If it is the Start or the end of a puzzle borrow the opuzzle number of tiles around you
            if(IsPuzzleEntry() || IsPuzzleComplete())
                BorrowPuzzleNumber();
        }

        /*This is used to set the tiles type, objects and actors*/
        #region Set Traits

        /// <summary>
        /// Writes what flags the tile has on a text mesh - for designer usage in level design
        /// </summary>
        public void ShowFlags()
        {
            if (!GetComponentInChildren<TextMesh>().gameObject.activeSelf)
            {
                GetComponentInChildren<TextMesh>().gameObject.SetActive(true);
            }
            if (_puzzleEntry)
                GetComponentInChildren<TextMesh>().text = "PE";
            else if (_puzzleComplete)
                GetComponentInChildren<TextMesh>().text = "PC";
            else if (_entry)
                GetComponentInChildren<TextMesh>().text = "ENTRY";
            else if (_exit)
                GetComponentInChildren<TextMesh>().text = "EXIT";
            else if (_dialogue)
                GetComponentInChildren<TextMesh>().text = "DLGE";
            else if (_puzzleNumber >= 0)
                GetComponentInChildren<TextMesh>().text = _puzzleNumber.ToString(); //TEMP
            else if (_tileDirection != -1)
                GetComponentInChildren<TextMesh>().text = _tileDirection.ToString();

            else if (_patrol)
                GetComponentInChildren<TextMesh>().text = "PATROL";
            else
                GetComponentInChildren<TextMesh>().text = " ";
        }


        /// <summary>
        /// Sets the tiles type, generates it and also sets if its blocked or not
        /// </summary>
        /// <param name="type"></param>
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
            //Generate the tile prefab
            GenerateVisuals();
        }

        /// <summary>
        /// Sets the tiles flags - only one at a time
        /// </summary>
        /// <param name="tileFlag"></param>
        public void SetFlag(string tileFlag)
        {
            switch (tileFlag)
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
                case "PuzzleComplete":
                    _puzzleComplete = true;
                    ShowFlags();
                    break;
                case "Puzzle":
                    PuzzleLoop(MapCreatorManager.Instance.PuzzleNumber);
                    ShowFlags();
                    break;
                case "Patrol":
                    _patrol = true;
                    ShowFlags();
                    break;
                case "Dialogue":
                    _dialogue = true;
                    ShowFlags();
                    break;
                case "DeleteFlag":
                    DeleteFlags(this);
                    ShowFlags();
                    break;
                //Set the conveyor belt or actors direction
                case "North":
                    _tileDirection = 0;
                    SetObjectsDirection(_tileDirection);
                    break;
                case "South":
                    _tileDirection = 1;
                    SetObjectsDirection(_tileDirection);
                    break;
                case "West":
                    _tileDirection = 2;
                    SetObjectsDirection(_tileDirection);
                    break;
                case "East":
                    _tileDirection = 3;
                    SetObjectsDirection(_tileDirection);
                    break;
                case "Delete":
                    Delete(this);
                    break;
                case "Delete2":
                    Delete2();
                    break;
                case "DeleteAll":
                    DeleteAll(this);
                    break;
            }
        }

        /// <summary>
        /// Take the puzzle number of a neighbor
        /// </summary>
        private void BorrowPuzzleNumber()
        {
            foreach (var neighbor in _neighbors)
            {
               if (neighbor.ReturnPuzzleNumber() == -1) continue;
                SetPuzzleNumber(neighbor.ReturnPuzzleNumber());
                break;
            }
        }

        /// <summary>
        /// Sets the direction of objects or actors present
        /// </summary>
        private void SetObjectsDirection(int direction)
        {
            if (_type == TileType.BlueConveyorBelt || _type == TileType.RedConveyorBelt || _type == TileType.GreenConveyorBelt)
            {
                GetComponentInChildren<ConveyorBelt>().SetDirecton(direction);
            }
            else if (_currentActor != null)
            {
                GetComponentInChildren<Guard>().SetDirection(direction);
            }
        }


        /// <summary>
        /// Sets the apropriate actor prefab - ready to be created
        /// </summary>
        /// <param name="actor"></param>
        public void SetActor(Actor actor)
        {
            _actor = actor;
            switch (actor)
            {
                case Actor.Badger:
                    _blocked = true;
                    _actorPrefab = PrefabHolder.Instance.Badger;
                    break;
                case Actor.Beaver:
                    _blocked = true;
                    _actorPrefab = PrefabHolder.Instance.Beaver;
                    break;
                case Actor.Hedgehog:
                    _blocked = true;
                    _actorPrefab = PrefabHolder.Instance.Hedgehog;
                    break;
                case Actor.Mouse:
                    _blocked = true;
                    _actorPrefab = PrefabHolder.Instance.Mouse;
                    break;
                case Actor.InjuredMouse:
                    _blocked = true;
                    _actorPrefab = PrefabHolder.Instance.InjuredMouse;
                    break;
                case Actor.Pig:
                    _blocked = true;
                    _actorPrefab = PrefabHolder.Instance.Pig;
                    break;
                case Actor.Rats:
                    _blocked = true;
                    _actorPrefab = PrefabHolder.Instance.Rats;
                    break;
                case Actor.Weasel:
                    _blocked = true;
                    _actorPrefab = PrefabHolder.Instance.Weasel;
                    break;
                case Actor.Guard:
                    _blocked = true;
                    _actorPrefab = PrefabHolder.Instance.Guard;
                    break;
                case Actor.Null:
                    _actorPrefab = null;
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
            GenerateNewActor();
        }

        

        //Set the tiles obhect and variables
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
                case TileObject.Evidence1:
                    _objectPrefab = PrefabHolder.Instance.Evidence1;
                    break;
                case TileObject.Evidence2:
                    _objectPrefab = PrefabHolder.Instance.Evidence2;
                    break;
                case TileObject.Evidence3:
                    _objectPrefab = PrefabHolder.Instance.Evidence3;
                    break;
                case TileObject.Evidence4:
                    _objectPrefab = PrefabHolder.Instance.Evidence4;
                    break;
                case TileObject.Evidence5:
                    _objectPrefab = PrefabHolder.Instance.Evidence5;
                    break;
                case TileObject.Evidence6:
                    _objectPrefab = PrefabHolder.Instance.Evidence6;
                    break;
                case TileObject.Evidence7:
                    _objectPrefab = PrefabHolder.Instance.Evidence7;
                    break;
                case TileObject.Evidence8:
                    _objectPrefab = PrefabHolder.Instance.Evidence8;
                    break;
                case TileObject.Evidence9:
                    _objectPrefab = PrefabHolder.Instance.Evidence9;
                    break;
                default:
                    throw new ArgumentOutOfRangeException("Object", Object, null);
            }
        }
        #endregion

        /*This section is used to generate the tiles type, objects and actors*/
        #region GenerateStuff

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
                _neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
                North = map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)];
            }

            //WEST
            if (_gridPosition.x > 0)
            {
                var n = new Vector2(_gridPosition.x - 1, _gridPosition.y);
                _neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
                West = map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)];
            }
            //EAST
            if (_gridPosition.x < mapSize - 1)
            {
                var n = new Vector2(_gridPosition.x + 1, _gridPosition.y);
                _neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
                East = map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)];
            }

            //SOUTH
            if (_gridPosition.y < mapSize - 1)
            {
                var n = new Vector2(_gridPosition.x, _gridPosition.y + 1);
                _neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
                South = map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)];
            }
        }

        /// <summary>
        /// Instantiate a new copy of an object in this tile
        /// </summary>
        public void GenerateNewObject()
        {
            var container = transform.Find("Objects").gameObject;
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

        /// <summary>
        /// Transfer an existing object to this tile
        /// </summary>
        /// <param name="newObject"></param>
        public void GenerateObject(GameObject newObject)
        {
            var container = transform.Find("Objects").gameObject;
            //initially remove all children
            for (var i = 0; i < container.transform.childCount; i++)
            {
                Destroy(container.transform.GetChild(i).gameObject);
            }
            if (_objectPrefab == null) return;
            newObject.transform.SetParent(container.transform);
            _currentObject = newObject;
        }

        /// <summary>
        /// Instantiate a new copy of an actor to this tile
        /// </summary>
        public void GenerateNewActor()
        {
            var container = transform.Find("Actors").gameObject;
            //initially remove all children
            for (var i = 0; i < container.transform.childCount; i++)
            {
                Destroy(container.transform.GetChild(i).gameObject);
            }
            if (_actorPrefab == null) return;
            var newActor = Instantiate(_actorPrefab, transform.position, Quaternion.Euler(new Vector3(90, 0, 0)));
            newActor.transform.SetParent(container.transform);
            _currentActor = newActor;
        }

        /// <summary>
        /// Move an existing actor to this tile
        /// </summary>
        /// <param name="newActor"></param>
        public void GenerateActor(GameObject newActor)
        {
            var container = transform.Find("Actors").gameObject;
            //initially remove all children
            for (var i = 0; i < container.transform.childCount; i++)
            {
                Destroy(container.transform.GetChild(i).gameObject);
            }
            if (_actorPrefab == null) return;
            newActor.transform.SetParent(container.transform);
            _currentActor = newActor;
        }

        /// <summary>
        /// Instantiate the chosen tile prefab - certain tile types will import other logic with them
        /// </summary>
        public void GenerateVisuals()
        {
            var container = transform.Find("Visuals").gameObject;
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
        #endregion

        /*This section is used to delete tiles or reset them to default state*/
        #region Delete   

        /// <summary>
        /// Delete this tile and the one next two and the two below them
        /// </summary>
        private void Delete2()
        {
            if (North != null && North.East != null)
                Delete(North.ReturnEast());
            if (North != null)
                Delete(North);
            if (East != null)
                Delete(East);
            Delete(this);
        }

        /// <summary>
        /// Delete a tile
        /// </summary>
        /// <param name="tile"></param>
        private void Delete(Tile tile)
        {
            if (tile == null) return;
            tile.SetType(TileType.Null);
            DeleteFlags(tile);
            tile.SetDirection(-1);
            tile.SetObject(TileObject.Empty);
        }

        /// <summary>
        /// Set all flags, bools and ints of a tile to false/-1
        /// </summary>
        /// <param name="tile"></param>
        private void DeleteFlags(Tile tile)
        {
            tile.SetEntry(false);
            tile.SetBlocked(false);
            tile.SetExit(false);
            tile.SetPatrol(false);
            tile.SetDialogue(false);
            tile.SetPuzzleComplete(false);
            tile.SetPuzzleEntry(false);
            tile.SetPuzzleNumber(-1);
            tile.SetDirection(-1);
        }

        /// <summary>
        /// Delete a tile and all othertiles in a southern tile only stopping if it hits a wall or null
        /// </summary>
        /// <param name="tile"></param>
        private void DeleteAll(Tile tile)
        {
            while (true)
            {
                if (tile.South != null && tile.South.ReturnType() != TileType.Wall)
                {
                    _tiles.Add(tile.South);
                    tile = tile.South;
                    continue;
                }
                foreach (var tempTile in _tiles)
                    Delete(tempTile);

                Delete(this);
                break;
            }
        }

        #endregion

        /*This is used to categorise tiles in spearate puzzle areas primarily for area of effect of switches and reseting puzzles*/
        #region Puzzle

        /// <summary>
        /// Set all valid tiles to the apropriate puzzle number then increase the puzzle number
        /// </summary>
        /// <param name="puzzleNumber">Number of puzzle</param>
        public void PuzzleLoop(int puzzleNumber)
        {
            SetPuzzle(puzzleNumber);
            MapCreatorManager.Instance.PuzzleNumber++;
        }

        /// <summary>
        /// Create an area that constitutes a puzzle. Stops at walls and PuzzleComlete/PuzzleEntry tiles.
        /// </summary>
        /// <param name="puzzleNumber"></param>
        private void SetPuzzle(int puzzleNumber)
        {
            //Set this tile to the aproproate puzzle number
            if (IsValidPuzzleTile(this, puzzleNumber))
            {
                SetPuzzleNumber(puzzleNumber);
            }

            //Set all valid neighbors to the same then call this function from them
            foreach (var neighbor in _neighbors)
            {
                if (IsValidPuzzleTile(neighbor, puzzleNumber)) continue;
                neighbor.SetPuzzleNumber(puzzleNumber);
                neighbor.SetPuzzle(puzzleNumber);
            }
        }

        /// <summary>
        /// Check if this tile can be a valid puzzle tile
        /// </summary>
        /// <param name="tile">A tile</param>
        /// <param name="puzzleNumber">Current Puzzle Number</param>
        /// <returns></returns>
        private bool IsValidPuzzleTile(Tile tile, int puzzleNumber)
        {
            return tile.ReturnPuzzleNumber() == puzzleNumber || tile.IsPuzzleComplete() || tile.IsPuzzleEntry() ||
                   tile.ReturnType() == TileType.Door || tile.ReturnType() == TileType.Wall ||
                   tile.ReturnType() == TileType.Blocked;
        }

        #endregion

        /*This is used for the map creator - it allows to "paint" the tiles over*/
        #region Paint Tile


        /// <summary>
        /// When the mouse is clicked   
        /// </summary>
        /// <param name="eventData">Mouse input</param>
        public void OnPointerClick(PointerEventData eventData)
        {
            if (SceneManager.GetActiveScene().name != "MapCreatorScene") return;
            SetTile();
        }

        /// <summary>
        /// When the mouse enters the tile
        /// </summary>
        /// <param name="eventData">Mouse input</param>
        public void OnPointerEnter(PointerEventData eventData)
        {
            if (SceneManager.GetActiveScene().name != "MapCreatorScene") return;
            SetTile();
        }

        /// <summary>
        /// When the mouse mouse is clicked
        /// </summary>
        /// <param name="eventData">Mouse input</param>
        public void OnPointerDown(PointerEventData eventData)
        {
            if (SceneManager.GetActiveScene().name != "MapCreatorScene") return;
            SetTile();
        }


        /// <summary>
        /// Set all the tiles traits (Type, Flags, Objects and Actors) by clicking on the tile in the map creator
        /// </summary>
        private void SetTile()
        {
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
                        SetFlag(MapCreatorManager.Instance.TileFlag);
                    }
                    else if (Input.GetMouseButton(1))
                    {
                        DeleteFlags(this);
                    }
                    ShowFlags();
                    break;
                }
                case PlacingStatus.Actor:
                {
                    if (Input.GetMouseButton(0))
                    {
                        SetActor(MapCreatorManager.Instance.ActorType);
                    }
                    else if (Input.GetMouseButton(1))
                    {
                        SetActor(Actor.Null);
                    }
                    break;
                }
            }
        }

        #endregion

        /*As the primary building block of this project tiles require almost all their variables to be accesible - what follows is all the gets and sets that requires*/
        #region Sets & Returns

        /// <summary>
        /// Deactivate this tiles dialogue flag and continue to do so for all the neighbors that are also dialogues
        /// </summary>
        public void DeleteDialogue()
        {
            SetDialogue(false);
            ShowFlags();

            foreach (var neighbor in ReturnNeighbors())
            {
                if (!neighbor.IsDialogue()) continue;
                neighbor.SetDialogue(false);
                neighbor.ShowFlags();
                neighbor.DeleteDialogue();
            }
        }

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
        /// Return The tiles object type
        /// </summary>
        /// <returns></returns>
        public TileObject ReturnCurrentObjectType(){
            
            return _object;
        }

        /// <summary>
        /// Return The tiles render Type
        /// </summary>
        /// <returns></returns>
        public GameObject ReturnCurrentActor()
        {
            return _currentActor;
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
        /// <returns>Tile neighbors</returns>
        public List<Tile> ReturnNeighbors()
        {
            return _neighbors;
        }

        /// <summary>
        /// Return the current player status
        /// </summary>
        /// <returns>Position in grid</returns>
        public Vector2 ReturnPosition()
        {
            return _gridPosition;
        }

        /// <summary>
        /// Returns the tiles type
        /// </summary>
        /// <returns>Tile Type</returns>
        public TileType ReturnType()
        {
            return _type;
        }

        /// <summary>
        /// Returns the tiles object
        /// </summary>
        /// <returns>Object on Tile</returns>
        public TileObject ReturnObject()
        {
            return _object;
        }
        /// <summary>
        /// Returns the tiles actor
        /// </summary>
        /// <returns>Actor on Tile</returns>
        public Actor ReturnActor()
        {
            return _actor;
        }

        /// <summary>
        /// Set this tile as a level exit
        /// </summary>
        public void SetExit(bool status)
        {
            _exit = status;
        }
        /// <summary>
        ///Return true if this tile is an exit
        /// </summary>
        public bool IsExit()
        {
            return _exit;
        }

        /// <summary>
        /// Set this tile as a level entry
        /// </summary>
        public void SetEntry(bool status)
        {
            _entry = status;
        }

        /// <summary>
        /// Return true if this tile is an entry
        /// </summary>
        public bool IsEntry()
        {
            return _entry;
        }

        /// <summary>
        /// Set this tile as a puzzle complete tile
        /// </summary>
        public void SetPuzzleComplete(bool status)
        {
            _puzzleComplete = status;
        }

        /// <summary>
        /// Return true if this tile is an puzzle complete tile
        /// </summary>
        public bool IsPuzzleComplete()
        {
            return _puzzleComplete;
        }

        /// <summary>
        /// Set this tile as a dialogue tile
        /// </summary>
        public void SetDialogue(bool status)
        {
            _dialogue = status;
        }

        /// <summary>
        /// Return true if this tile is a dialogue tile
        /// </summary>
        public bool IsDialogue()
        {
            return _dialogue;
        }

        /// <summary>
        /// Set this tile as a puzzle entry
        /// </summary>
        public void SetPuzzleEntry(bool status)
        {
            _puzzleEntry = status;
        }

        /// <summary>
        /// Return true if this tile is an puzzle entry
        /// </summary>
        public bool IsPuzzleEntry()
        {
            return _puzzleEntry;
        }

        /// <summary>
        /// Set tile blocked
        /// </summary>
        public void SetBlocked(bool status)
        {
            _blocked = status;
        }

        /// <summary>
        /// Return if tile is blocked
        /// </summary>
        public bool IsBlocked()
        {
            return _blocked;
        }

        /// <summary>
        /// Set this tiles direction
        /// </summary>
        public void SetDirection(int direction)
        {
            _tileDirection = direction;
        }

        /// <summary>
        /// Return if tile is a patrol tile
        /// </summary>
        public bool ReturnPatrol()
        {
            return _patrol;
        }

        /// <summary>
        /// Set tiles as a patrol tiles
        /// </summary>
        public void SetPatrol(bool status)
        {
            _patrol = status;
            ShowFlags();
        }

        /// <summary>
        /// Return tiles puzzle number
        /// </summary>
        public int ReturnPuzzleNumber()
        {
            return _puzzleNumber;
        }

        /// <summary>
        /// Set tiles puzzle number
        /// </summary>
        public void SetPuzzleNumber(int puzzleNumber)
        {
            _puzzleNumber = puzzleNumber;
            ShowFlags();
        }

        /// <summary>
        /// Returns tiles current dirrection
        /// </summary>
        public int ReturnDirection()
        {
            return _tileDirection;
        }


        /// <summary>
        /// Set tiles current material
        /// </summary>
        public void SetMaterial(Material material)
        {
            GetComponentInChildren<Renderer>().sharedMaterial = material;
        }

        /// <summary>
        /// Returns tiles current material
        /// </summary>
        public Material ReturnMaterial()
        {
            return GetComponentInChildren<Renderer>().sharedMaterial;
        }

        /// <summary>
        /// Return wwhat flag the tile has. If multiple exists only the most important will be returned
        /// </summary>
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
            else if (_patrol)
                return "Patrol";
            if (_dialogue)
                return "Dialogue";
            return "Null";
        }

        #endregion

    }
}
