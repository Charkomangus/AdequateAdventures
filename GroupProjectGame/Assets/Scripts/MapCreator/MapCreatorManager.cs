using System;
using System.Collections.Generic;
using System.Linq;
using Assets.Scripts.Cameras;
using Assets.Scripts.Tiles;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts.MapCreator
{
    public class MapCreatorManager : MonoBehaviour {
         //Creating an Instance so scripts can access it's variables.
        public static MapCreatorManager Instance;
        public TileType PalletSelection = TileType.Normal;
        public int MapSize;
        private List<List<Tile>> _map = new List<List<Tile>>();
        private Transform _mapTransform;

        /// <summary>
        /// UI buttons
        /// </summary>
      
        //Utility
        public Button Save;
        public Button Load;
        public Button NewMap;
        public Button ClearMap;
   
        //Tile Types
        public Button TileNormal;
        public Button TileOil;
        public Button TileIce;
        public Button TileIceCracks;
        public Button TileFire;
        public Button TileBlocked;
        public Button TileWall;
        public Button TileNull;

        //Tile Flags
        public Button TileEntry;
        public Button TileExit;
        public Button PuzzleEntry;
        public Button PuzzleComplete;

        //Tile Objects
        public Button TileBox;
        public Button TileRollingBox;
        public Button TileSwitch;
        public Button TileBelt1;
        public Button TileBelt2;
        public Button TileBelt3;
        public Button TileDoor;
  
        //UI
        public InputField SaveName;
        public InputField LoadName;
        public InputField NewMapSize;
        public Text Size;
        public Text SelectedTile;
        public Text CurrentLevel;
        private string _oldCurrentLevel;
        public Animator MapNotification;

        //CAMERA
        private MapCreatorCamera _mainCamera;

        /// <summary>
        /// Setting up Listeners for the UI elements & initialising variables.
        /// </summary>
        private void Awake()
        {
            Instance = this;
           
            _mapTransform = transform.FindChild("Map");
            _mainCamera = Camera.main.GetComponent<MapCreatorCamera>();


            


            ClearMap.onClick.AddListener(delegate { GenerateBlankMap(MapSize); });
            SaveName.onValueChanged.AddListener(delegate { _mainCamera.Enabled = false; });
            SaveName.onEndEdit.AddListener(delegate { NewMapNotification(SaveName.text,0); _mainCamera.Enabled = true;  SaveName.gameObject.SetActive(false);});

            LoadName.onValueChanged.AddListener(delegate { _mainCamera.Enabled = false; });
            LoadName.onEndEdit.AddListener(delegate { _mainCamera.Enabled = true; NewMapNotification(LoadName.text, 1);LoadName.gameObject.SetActive(false); LoadMapFromXml(LoadName.text); });

            NewMapSize.onValueChanged.AddListener(delegate { _mainCamera.Enabled = false;  });
            NewMapSize.onEndEdit.AddListener(delegate { _mainCamera.Enabled = true; NewMapSize.gameObject.SetActive(false); NewMapNotification(NewMapSize.text, 2); NewMapInput(NewMapSize); });

            //Tile Type
            TileNormal.onClick.AddListener(delegate { PalletSelection = TileType.Normal; });
            TileOil.onClick.AddListener(delegate { PalletSelection = TileType.Oil; });
            TileIce.onClick.AddListener(delegate { PalletSelection = TileType.Oil; });
            TileIceCracks.onClick.AddListener(delegate { PalletSelection = TileType.Fire; });
            TileFire.onClick.AddListener(delegate { PalletSelection = TileType.Fire; });
            TileBlocked.onClick.AddListener(delegate { PalletSelection = TileType.Blocked; });
            TileWall.onClick.AddListener(delegate { PalletSelection = TileType.Wall; });
            TileNull.onClick.AddListener(delegate { PalletSelection = TileType.Null; });

            //Tile Flags
            TileEntry.onClick.AddListener(delegate { PalletSelection = TileType.Entry; });
            TileExit.onClick.AddListener(delegate { PalletSelection = TileType.Exit; });
            PuzzleEntry.onClick.AddListener(delegate { PalletSelection = TileType.Entry; });
            PuzzleComplete.onClick.AddListener(delegate { PalletSelection = TileType.Exit; });

            //Tile Objects
            TileBox.onClick.AddListener(delegate { PalletSelection = TileType.Box; });
            TileRollingBox.onClick.AddListener(delegate { PalletSelection = TileType.RollableBox; });
            TileSwitch.onClick.AddListener(delegate { PalletSelection = TileType.TileSwitch; });
            TileBelt1.onClick.AddListener(delegate { PalletSelection = TileType.Belt1; });
            TileBelt2.onClick.AddListener(delegate { PalletSelection = TileType.Belt2; });
            TileBelt3.onClick.AddListener(delegate { PalletSelection = TileType.Belt3; });
            TileDoor.onClick.AddListener(delegate { PalletSelection = TileType.Door; });

        }


        private void Start()
        {
            GenerateBlankMap(20);
            Size.text = MapSize + " x " + MapSize + "\n " + (MapSize * MapSize) + " tiles.";
            CurrentLevel.text = "CurrentLevel: N/A";
        }

        private void Update()
        {
            SelectedTile.text = "SELECTED TILE: " + PalletSelection.ToString().ToUpper();
        }

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
            var container = MapSaveLoad.LoadFromResources(filename);

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
                    var tile = ((GameObject)Instantiate(PrefabHolder.Instance.BaseTilePrefab, new Vector3(x - Mathf.Floor(MapSize/2f),0, -y + Mathf.Floor(MapSize/2f)), Quaternion.Euler(new Vector3()))).GetComponent<Tile>();
                    tile.transform.parent = _mapTransform;
                    tile.SetPosition(new Vector2(x, y));
                    tile.SetType((TileType)container.Tiles.First(position => position.LocX == x && position.LocY == y).Id);
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
