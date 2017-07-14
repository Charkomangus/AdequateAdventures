using System;
using System.Collections.Generic;
using System.Linq;
using Assets.Scripts.Cameras;
using Assets.Scripts.Dialogue;
using Assets.Scripts.Tiles;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts.MapCreator
{
    public enum PlacingStatus
    {
        Type,
        Object,
        Flag,
        Actor
    }

    public class MapCreatorManager : MonoBehaviour {
         //Creating an Instance so scripts can access it's variables.
        public static MapCreatorManager Instance;
        public int MapSize;
        //Number of puzzles in map
        public int PuzzleNumber;
        public PlacingStatus CurrentPlacingStatus;
        private List<List<Tile>> _map = new List<List<Tile>>();
        private Transform _mapTransform;

        
        /// <summary>
        /// UI buttons
        /// </summary>
        [Header("Utility")]
        public Button Save;
        public Button Load;
        public Button NewMap;
        public Button ClearMap;
        public Toggle OverlayToggle;
        public Slider OverlayOpacitySlider;
        public Text OverlayOpacityPercentage, OverlayNameText;
        public Button Delete, Delete2, DeleteAll;
        public Button RemovePuzzleNumber;
        public Button RemoveActors;

        //Category buttons
        public Button Types, Flags, Objects, Actors;
      
        [Header("Tile Types")]
        public TileType TileType;
        public Button TileNormal;
        public Button TileOil;
        public Button TileIce;
        public Button TileIceCracks;
        public Button TileFire;
        public Button TileBlocked;
        public Button TileWall;
        public Button TileDoor;
        public Button TileRedBelt;
        public Button TileGreenBelt;
        public Button TileBlueBelt;
        public Button TileNull;
       
        [Header("Tile Flags")]
        public string TileFlag;
        public Button TileEntry;
        public Button TileExit;
        public Button PuzzleEntry;
        public Button PuzzleComplete;
        public Button Puzzle;
        public Button North;
        public Button South;
        public Button West;
        public Button East;
        public Button Patrol;
        public Button FlagNull;

        [Header("Tile Objects")]
        public TileObject ObjectType;
        public Button ObjectBox;
        public Button ObjectRollingBox;
        public Button ObjectSign;
        public Button ObjectRedSwitch;
        public Button ObjectGreenSwitch;
        public Button ObjectBlueSwitch;
        public Button ObjectNull;

        [Header("Tile Objects")]
        public Actor ActorType;
        public Button Badger;
        public Button Beaver;
        public Button Hedgehog;
        public Button Mouse;
        public Button InjuredMouse;
        public Button Pig;
        public Button Rats;
        public Button Weasel;
        public Button Guard;
        public Button DeleteActors;

        [Header("UI")]
        public InputField SaveName;
        public InputField LoadName;
        public InputField NewMapSize;
        public Text Size;
        public Text SelectedTile;
        public Text CurrentLevel;
        private string _oldCurrentLevel;
        public Animator MapNotification;

        public SpriteRenderer _overlay;
        private Sprite _overlaySprite;
        private string _overlayMap;
        //CAMERA
        private MapCreatorCamera _mainCamera;

        /// <summary>
        /// Setting up Listeners for the UI elements & initialising variables.
        /// </summary>
        private void Awake()
        {
            Instance = this;
            TileType = TileType.Normal;
            ObjectType = TileObject.Empty;
            TileFlag = "N/A";
            CurrentPlacingStatus = PlacingStatus.Type;

            _mapTransform = transform.Find("Map");
            _mainCamera = Camera.main.GetComponent<MapCreatorCamera>();
            OverlayOpacityPercentage.text = (int)(_overlay.color.a * 100) + "%";
            OverlayOpacitySlider.value = _overlay.color.a;

            //UI buttons
            ClearMap.onClick.AddListener(delegate { GenerateBlankMap(MapSize); SetOverlay(""); });
            SaveName.onValueChanged.AddListener(delegate { _mainCamera.Enabled = false; });
            SaveName.onEndEdit.AddListener(delegate
            {
                PuzzleNumber = 0;
                NewMapNotification(SaveName.text, 0);
                SetOverlay(SaveName.text);
                _mainCamera.Enabled = true;
                SaveName.gameObject.SetActive(false);
                SaveMapToXml(SaveName.text);
            });

            LoadName.onValueChanged.AddListener(delegate { _mainCamera.Enabled = false; });
            LoadName.onEndEdit.AddListener(delegate
            {
                PuzzleNumber = 0;
                _mainCamera.Enabled = true;
                NewMapNotification(LoadName.text, 1);
                SetOverlay(LoadName.text);
                LoadName.gameObject.SetActive(false);
                LoadMapFromXml(LoadName.text);
              
            });

            NewMapSize.onValueChanged.AddListener(delegate { _mainCamera.Enabled = false; });
            NewMapSize.onEndEdit.AddListener(delegate
            {
                PuzzleNumber = 0;
                _mainCamera.Enabled = true;
                NewMapSize.gameObject.SetActive(false);
                NewMapNotification(NewMapSize.text, 2);
                SetOverlay("");
                NewMapInput(NewMapSize);
            });

            OverlayToggle.onValueChanged.AddListener(delegate { _overlay.gameObject.SetActive(OverlayToggle.isOn); });
            OverlayOpacitySlider.onValueChanged.AddListener(delegate 
            {
            _overlay.color = new Color(1,1,1,OverlayOpacitySlider.value);
            OverlayOpacityPercentage.text = (int)(OverlayOpacitySlider.value*100) + "%";
            });


            Delete.onClick.AddListener(delegate { TileFlag = "Delete"; CurrentPlacingStatus = PlacingStatus.Flag; });
            Delete2.onClick.AddListener(delegate { TileFlag = "Delete2"; CurrentPlacingStatus = PlacingStatus.Flag; });
            DeleteAll.onClick.AddListener(delegate { TileFlag = "DeleteAll"; CurrentPlacingStatus = PlacingStatus.Flag; });
            RemovePuzzleNumber.onClick.AddListener(delegate { RemovePuzzleNumbers(); });
            //Category buttons
            Types.onClick.AddListener(delegate { CurrentPlacingStatus = PlacingStatus.Type; TileType = TileType.Normal; });
            Flags.onClick.AddListener(delegate { CurrentPlacingStatus = PlacingStatus.Flag; TileFlag = "N/A"; });
            Objects.onClick.AddListener(delegate { CurrentPlacingStatus = PlacingStatus.Object; ObjectType = TileObject.Empty; });
            Actors.onClick.AddListener(delegate { CurrentPlacingStatus = PlacingStatus.Actor; ActorType = Actor.Null; });
            //Tile Type
            TileNormal.onClick.AddListener(delegate { TileType = TileType.Normal; });
            TileOil.onClick.AddListener(delegate { TileType = TileType.Oil; });
            TileIce.onClick.AddListener(delegate { TileType = TileType.Ice; });
            TileIceCracks.onClick.AddListener(delegate { TileType = TileType.IceCracks; });
            TileFire.onClick.AddListener(delegate { TileType = TileType.Fire; });
            TileBlocked.onClick.AddListener(delegate { TileType = TileType.Blocked; });
            TileWall.onClick.AddListener(delegate { TileType = TileType.Wall; });
            TileDoor.onClick.AddListener(delegate { TileType = TileType.Door; });
            TileRedBelt.onClick.AddListener(delegate { TileType = TileType.RedConveyorBelt; });
            TileGreenBelt.onClick.AddListener(delegate { TileType = TileType.GreenConveyorBelt; });
            TileBlueBelt.onClick.AddListener(delegate { TileType = TileType.BlueConveyorBelt; });
            TileNull.onClick.AddListener(delegate { TileType = TileType.Null; });
            TileNull.onClick.AddListener(delegate { TileType = TileType.Null; });
            //Tile Flags
            TileEntry.onClick.AddListener(delegate { TileFlag = "Entry"; });
            TileExit.onClick.AddListener(delegate { TileFlag = "Exit"; });
            PuzzleEntry.onClick.AddListener(delegate { TileFlag = "PuzzleEntry"; });
            PuzzleComplete.onClick.AddListener(delegate { TileFlag = "PuzzleComplete"; });
            Puzzle.onClick.AddListener(delegate { TileFlag = "Puzzle"; });
            North.onClick.AddListener(delegate { TileFlag = "North"; });
            South.onClick.AddListener(delegate { TileFlag = "South"; });
            West.onClick.AddListener(delegate { TileFlag = "West"; });
            East.onClick.AddListener(delegate { TileFlag = "East"; });
            Patrol.onClick.AddListener(delegate { TileFlag = "Patrol"; });
            FlagNull.onClick.AddListener(delegate { TileFlag = "DeleteFlag"; });

            //Tile Objects
            ObjectBox.onClick.AddListener(delegate { ObjectType = TileObject.Box; });
            ObjectRollingBox.onClick.AddListener(delegate { ObjectType = TileObject.SlidingBox; });
            ObjectSign.onClick.AddListener(delegate { ObjectType = TileObject.Sign; });
            ObjectRedSwitch.onClick.AddListener(delegate { ObjectType = TileObject.RedSwitch; });
            ObjectGreenSwitch.onClick.AddListener(delegate { ObjectType = TileObject.GreenSwitch; });
            ObjectBlueSwitch.onClick.AddListener(delegate { ObjectType = TileObject.BlueSwitch; });
            ObjectNull.onClick.AddListener(delegate { ObjectType = TileObject.Empty; });

            //Actors
            Badger.onClick.AddListener(delegate { ActorType = Actor.Badger; });
            Beaver.onClick.AddListener(delegate { ActorType = Actor.Beaver; });
            Hedgehog.onClick.AddListener(delegate { ActorType = Actor.Hedgehog; });
            Mouse.onClick.AddListener(delegate { ActorType = Actor.Mouse; });
            InjuredMouse.onClick.AddListener(delegate { ActorType = Actor.InjuredMouse; });
            Pig.onClick.AddListener(delegate { ActorType = Actor.Pig; });
            Rats.onClick.AddListener(delegate { ActorType = Actor.Rats; });
            Weasel.onClick.AddListener(delegate { ActorType = Actor.Weasel; });
            Guard.onClick.AddListener(delegate { ActorType = Actor.Guard; });
            DeleteActors.onClick.AddListener(delegate { ActorType = Actor.Null; });
            RemoveActors.onClick.AddListener(delegate { RemoveAllActors(); });
        }
     
        private void Start()
        {
            GenerateBlankMap(20);
            Size.text = MapSize + " x " + MapSize + "\n " + (MapSize * MapSize) + " tiles.";
            CurrentLevel.text = "CurrentLevel: N/A";
        }

        //Remove any puzzle numbers
        private void RemovePuzzleNumbers()
        {
            PuzzleNumber = 0;
            for (var x = 0; x < MapSize; x++)
            {
                for (var y = 0; y < MapSize; y++)
                {
                    _map[x][y].SetPuzzleNumber(-1);
                }
            }
        }

        //Delete all actors in the map
        private void RemoveAllActors()
        {
            for (var x = 0; x < MapSize; x++)
            {
                for (var y = 0; y < MapSize; y++)
                {
                    _map[x][y].SetActor(Actor.Null);
                }
            }
        }

        //Switch on an art overlay if there is one
        private void SetOverlay(string mapName)
        {
            _overlaySprite = Resources.Load<Sprite>("LevelMapArt/EnviromentArt/" + mapName);
            if (_overlaySprite == null)
            {
                OverlayNameText.text = "N/A";
                _overlay.sprite = null;
            }
            else
            {
                _overlay.sprite = _overlaySprite;
                OverlayNameText.text = mapName;
            }
        }

        //Update Ui
        private void Update()
        {
            switch (CurrentPlacingStatus)
            {
                case PlacingStatus.Type:
                    SelectedTile.text = "SELECTED TYPE: " + TileType.ToString().ToUpper();
                    break;
                case PlacingStatus.Object:
                    SelectedTile.text = "SELECTED OBJECT: " + ObjectType.ToString().ToUpper();
                    break;
                case PlacingStatus.Flag:
                    SelectedTile.text = "SELECTED FLAG: " + TileFlag.ToUpper();
                    break;
                case PlacingStatus.Actor:
                    SelectedTile.text = "SELECTED ACTOR: " + ActorType.ToString().ToUpper();
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        
        }
        //Notify user of any changes such as the map has been saved, etc.
        private void NewMapNotification(string mapName, int mode)
        {
            MapNotification.SetTrigger("Open");
            switch (mode)
            {
                case 0:
                    MapNotification.GetComponent<Text>().text = "'" + mapName + "' " + "Map has been saved!";
                    _oldCurrentLevel = CurrentLevel.text;
                    CurrentLevel.text = "CurrentLevel: " + mapName;
                    break;
                case 1:
                    MapNotification.GetComponent<Text>().text = "'" + mapName + "' " + "Map has been loaded!";
                    _oldCurrentLevel = CurrentLevel.text;
                    CurrentLevel.text = "CurrentLevel: " + mapName;
                    break;
                case 2:
                    MapNotification.GetComponent<Text>().text = "New " + mapName + " x " + mapName + " Map";
                    _oldCurrentLevel = CurrentLevel.text;
                    CurrentLevel.text = "CurrentLevel: N/A";
                    break;
            }
        }
        
        //Parse the new map input
        private void NewMapInput(InputField input)
        {
            if (input.text.Length > 0)
            {         
                int temp;
               if(Int32.TryParse(input.text, out temp) == false)
                {
                    MapNotification.GetComponent<Text>().text = "Incorrect format. Full numbers only.";
                    CurrentLevel.text = _oldCurrentLevel;
                    return;
                }
                MapSize = temp;
                Size.text = MapSize + " x " + MapSize + "\n " + (MapSize * MapSize) + " tiles.";
                GenerateBlankMap(temp);
            }
            else if (input.text.Length == 0)
            {
                Debug.Log("Main Input Empty");
            }
        }

        /// <summary>
        ///Create a completely blank Map
        /// </summary>
        /// <param name="mapSize"></param>
        private void GenerateBlankMap(int mapSize) {
            MapSize = mapSize;

            //Remove all children
            for(var i = 0; i < _mapTransform.childCount; i++) {
                Destroy (_mapTransform.GetChild(i).gameObject);
            }

            _map = new List<List<Tile>>();
            for (var x = 0; x < MapSize; x++)
            {
                var row = new List<Tile>();
                for (var y = 0; y < MapSize; y++)
                {
                    var tile =((GameObject)Instantiate(PrefabHolder.Instance.BaseTilePrefab,new Vector3(x - Mathf.Floor(MapSize/2f), 0, -y + Mathf.Floor(MapSize/2f)),Quaternion.Euler(new Vector3()))).GetComponent<Tile>();
                    tile.transform.parent = _mapTransform;
                    tile.SetPosition(new Vector2(x, y));
                    tile.SetType(TileType.Normal);
                    tile.SetActor(Actor.Null);
                    tile.SetObject(TileObject.Empty);
                    tile.SetPuzzleNumber(-1);
                    row.Add(tile);
                }
                _map.Add(row);
            }
        }


      
        /// <summary>
        /// Load a map from an XML file
        /// </summary>
        private void LoadMapFromXml(string filename) {
          
            //Load map level
            var container = MapSaveLoad.LoadFromResources("LevelMaps/"+filename);

            if (container == null)
            {
                MapNotification.GetComponent<Text>().text = "No such file name found!";
                CurrentLevel.text = _oldCurrentLevel;
                return;
            }
            MapSize = container.Size;
            Size.text = MapSize + " x " + MapSize + "\n " + (MapSize * MapSize) + " tiles.";
            //Remove all children
            for (var i = 0; i < _mapTransform.childCount; i++) {
                Destroy (_mapTransform.GetChild(i).gameObject);
            }

            _map = new List<List<Tile>>();
            for (var x = 0; x < MapSize; x++) 
            {
                var row = new List<Tile>();
                for (var y = 0; y < MapSize; y++) 
                {
                    var tile = Instantiate(PrefabHolder.Instance.BaseTilePrefab, new Vector3(x - Mathf.Floor(MapSize/2f),0, -y + Mathf.Floor(MapSize/2f)), Quaternion.Euler(new Vector3())).GetComponent<Tile>();
                    tile.transform.parent = _mapTransform;
                    tile.SetPosition(new Vector2(x, y));
                    var tempTile = container.Tiles.First(position => position.LocationX == x && position.LocationY == y);
                    tile.SetType((TileType)tempTile.Type);
                    tile.SetObject(tempTile.Object);
                    tile.SetActor(tempTile.Actor);
                    tile.SetPuzzleNumber(Convert.ToInt32(tempTile.PuzzleNumber));
                    switch (tempTile.Flag)
                    {
                        case "PuzzleEntry":
                            tile.SetPuzzleEntry(true);
                            break;
                        case "PuzzleComplete":
                            tile.SetPuzzleComplete(true);
                            break;
                        case "Entry":
                            tile.SetEntry(true);
                            break;
                        case "Exit":
                            tile.SetExit(true);
                            break;
                        case "North":
                            tile.SetDirection(0);
                            break;
                        case "South":
                            tile.SetDirection(1);
                            break;
                        case "West":
                            tile.SetDirection(2);
                            break;
                        case "East":
                            tile.SetDirection(3);
                            break;
                        case "Patrol":
                            tile.SetPatrol(true);
                            break;
                        case "Null":
                            break;

                    }
                    row.Add (tile);
                }
                _map.Add(row);
            }
        }


        /// <summary>
        /// Save current map to an xml file
        /// </summary>
        private void SaveMapToXml(string filename)
        {
            MapSaveLoad.Save(MapSaveLoad.CreateMapContainer(_map), filename + ".xml");
        }

        /// <summary>
        /// Return current map
        /// </summary>
        public List<List<Tile>> ReturnMap()
        {
            return _map;
        }

        /// <summary>
        /// Return current map size
        /// </summary>
        public int ReturnMapSize()
        {
            return MapSize;
        }


     
    }
}
