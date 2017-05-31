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
        /// 
        public Button Save;
        public Button Load;
        public Button NewMap;
        public Button ClearMap;
        public Button TileNormal;
        public Button TileOil;
        public Button TileBlocked;
        public Button TileWall;
        public Button TileFire;
        public Button TileNull;
        public Button TileExit;
        public Button TileEntry;
        public Button TileBelt1;
        public Button TileBelt2;
        public Button TileBelt3;
        public Button TileDoor;
        public Button TileBox;
        public Button TileRollableBox;
        public Button TileSwitch;


        //UI
        public InputField SaveName;
        public InputField LoadName;
        public InputField NewMapSize;
        public Text Size;
        public Text SelectedTile;

        //CAMERA
        private MapCreatorCamera _mainCamera;

        // Use this for initialization
        private void Awake () {
            Instance = this;
            Size.text = (MapSize * MapSize).ToString() + " tiles big.";          
            _mapTransform = transform.FindChild("Map");

            //Setting up Listeners for the UI elements                 
            ClearMap.onClick.AddListener(delegate { GenerateBlankMap(MapSize); });
            TileNormal.onClick.AddListener(delegate { PalletSelection = TileType.Normal;});
            TileOil.onClick.AddListener(delegate { PalletSelection = TileType.Oil; });
            TileBlocked.onClick.AddListener(delegate { PalletSelection = TileType.Blocked; });
            TileWall.onClick.AddListener(delegate { PalletSelection = TileType.Wall; });
            TileNull.onClick.AddListener(delegate { PalletSelection = TileType.Null; });
            TileFire.onClick.AddListener(delegate { PalletSelection = TileType.Fire; });
            TileExit.onClick.AddListener(delegate { PalletSelection = TileType.Exit; });
            TileEntry.onClick.AddListener(delegate { PalletSelection = TileType.Entry; });

            TileBelt1.onClick.AddListener(delegate { PalletSelection = TileType.Belt1; });
            TileBelt2.onClick.AddListener(delegate { PalletSelection = TileType.Belt2; });
            TileBelt3.onClick.AddListener(delegate { PalletSelection = TileType.Belt3; });
            TileDoor.onClick.AddListener(delegate { PalletSelection = TileType.Door; });
            TileBox.onClick.AddListener(delegate { PalletSelection = TileType.Box; });
            TileRollableBox.onClick.AddListener(delegate { PalletSelection = TileType.RollableBox; });
            TileSwitch.onClick.AddListener(delegate { PalletSelection = TileType.TileSwitch; });


            SaveName.onValueChanged.AddListener(delegate { _mainCamera.Enabled = false; });
            LoadName.onValueChanged.AddListener(delegate { _mainCamera.Enabled = false; });
            NewMapSize.onValueChanged.AddListener(delegate { _mainCamera.Enabled = false; });

            SaveName.onEndEdit.AddListener(delegate { SaveMapToXml(SaveName.text); _mainCamera.Enabled = true; });
            LoadName.onEndEdit.AddListener(delegate { LoadMapFromXml(LoadName.text); _mainCamera.Enabled = true; });
            NewMapSize.onEndEdit.AddListener(delegate { NewMapInput(NewMapSize); _mainCamera.Enabled = true; });


            _mainCamera = Camera.main.GetComponent<MapCreatorCamera>();


        }


        private void Start()
        {
            GenerateBlankMap(20);
            Size.text = "20 tiles big.";
        }

        private void Update()
        {
            SelectedTile.text = "SELECTED TILE: " + PalletSelection.ToString().ToUpper();
        }

   


        //Parse the new map input
        private void NewMapInput(InputField input)
        {
            if (input.text.Length > 0)
            {         
                int temp;
                Int32.TryParse(input.text, out temp);
                MapSize = temp;
                Size.text = (MapSize * MapSize).ToString() + " tiles big.";
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

            if (container == null) return;
            MapSize = container.Size;
            Size.text = (MapSize * MapSize).ToString() + " tiles big.";
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
