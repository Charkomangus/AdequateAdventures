using System.Collections.Generic;
using Assets.Scripts.MapCreator;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.Tiles
{
    public class Tile : MonoBehaviour, IPointerClickHandler
    {



        public Vector2 GridPosition = Vector2.zero;
        private GameObject _prefab;
        private GameObject _renderType;
        public TileType Type = TileType.Normal;
        public bool Blocked, Exit, Entry;
        private List<Tile> Neighbors = new List<Tile>();
        public Tile _north, West, East, South;
        [SerializeField]private GameObject _item;
        
      
        // Use this for initialization
        private void Start()
        {
            //if (SceneManager.GetActiveScene().name == "Level1")
            //{
            //    List<List<Tile>> map = GameManager.Instance.GetComponent<MapGenerator>().ReturnMap();
            //    int mapSize = GameManager.Instance.GetComponent<MapGenerator>().ReturnMapSize();
            //    GenerateNeighbors(map, mapSize);
            //}
            if(SceneManager.GetActiveScene().name == "MapCreatorScene")
            {
                List<List<Tile>> map = GetComponentInParent<MapCreatorManager>().ReturnMap();
                int mapSize = GetComponentInParent<MapCreatorManager>().ReturnMapSize();
                GenerateNeighbors(map, mapSize);
            }
        }

        /// <summary>
        /// Each tile will find out what all it's neighboring tiles are and store them in a list. 
        /// </summary>
        public void GenerateNeighbors(List<List<Tile>> map, int mapSize)
        {
            Neighbors = new List<Tile>();

            //NORTH
            if (GridPosition.y > 0)
            {
                var n = new Vector2(GridPosition.x, GridPosition.y - 1);
                Neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
                _north = map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)];
            }

            //WEST
            if (GridPosition.x > 0)
            {
                var n = new Vector2(GridPosition.x - 1, GridPosition.y);
                Neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
                West = map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)];
            }
            //EAST
            if (GridPosition.x < mapSize - 1)
            {
                var n = new Vector2(GridPosition.x + 1, GridPosition.y);
                Neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
                East = map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)];
            }

            //SOUTH
            if (GridPosition.y < mapSize - 1)
            {
                var n = new Vector2(GridPosition.x, GridPosition.y + 1);
                Neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
                South = map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)];
            }


            //////NORTHWEST
            //if (GridPosition.y > 0 && GridPosition.x > 0)
            //{
            //    var n = new Vector2(GridPosition.x - 1, GridPosition.y - 1);
            //    Neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
            //}
            ////NORTHEAST
            //if (GridPosition.y > 0 && GridPosition.x < mapSize - 1)
            //{
            //    var n = new Vector2(GridPosition.x + 1, GridPosition.y - 1);
            //    Neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
            //}
            ////SOUTHWEST
            //if (GridPosition.y < mapSize - 1 && GridPosition.x > 0)
            //{
            //    var n = new Vector2(GridPosition.x - 1, GridPosition.y + 1);
            //    Neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
            //}
            ////SOUTHEAST
            //if (GridPosition.y < mapSize - 1 && GridPosition.x < mapSize - 1)
            //{
            //    var n = new Vector2(GridPosition.x + 1, GridPosition.y + 1);
            //    Neighbors.Add(map[(int)Mathf.Round(n.x)][(int)Mathf.Round(n.y)]);
            //}
            
        }
     
        //Set this tile as a level exit
        public void SetExit()
        {
            Exit = !Exit;
        }

        //Return true if this tile is an exit
        public bool IsExit()
        {
            return Exit;
        }
        //Set this tile as a level entry
        public void SetEntry()
        {
            Entry = !Entry;
        }
        //Return true if this tile is an entry
        public bool IsEntry()
        {
            return Entry;
        }

        //Set the tile prefab and variables
        public void SetType(TileType type)
        {
            Type = type;
            //definitions of TileType properties
            switch (type)
            {
                case TileType.Normal:
                    Blocked = false;
                    _prefab = PrefabHolder.Instance.TileNormalPrefab;
                    break;

                case TileType.Oil:
                    Blocked = false;
                    _prefab = PrefabHolder.Instance.TileOil;
                    break;

                case TileType.Blocked:
                    Blocked = true;
                    _prefab = PrefabHolder.Instance.TileBlocked;
                    break;

                case TileType.Wall:
                    Blocked = true;
                    _prefab = PrefabHolder.Instance.TileWall;
                    break;

                case TileType.Fire:
                    Blocked = false;
                    _prefab = PrefabHolder.Instance.TileFire;
                    break;
                case TileType.Null:
                    Blocked = true;
                    _prefab = PrefabHolder.Instance.TileNull;
                    break;
                case TileType.Entry:
                    Entry = true;
                    Exit = false;
                    Blocked = false;
                    _prefab = SceneManager.GetActiveScene().name == "MapCreatorScene" ? PrefabHolder.Instance.TileEntry : PrefabHolder.Instance.TileNormalPrefab;
                    break;
                case TileType.Exit:
                    Exit = true;
                    Entry = false;
                    Blocked = false;
                    _prefab = PrefabHolder.Instance.TileNormalPrefab;
                    _prefab = SceneManager.GetActiveScene().name == "MapCreatorScene" ? PrefabHolder.Instance.TileExit : PrefabHolder.Instance.TileNormalPrefab;
                    break;
                case TileType.Belt1:
                    Blocked = false;
                    _prefab = PrefabHolder.Instance.TileBelt1;
                    break;
                case TileType.Belt2:
                    Blocked = false;
                    _prefab = PrefabHolder.Instance.TileBelt2;
                    break;
                case TileType.Belt3:
                    Blocked = false;
                    _prefab = PrefabHolder.Instance.TileBelt3;
                    break;
                case TileType.Door:
                    Blocked = true;
                    _prefab = PrefabHolder.Instance.TileDoor;
                    break;
                case TileType.Box:
               
                    Blocked = true;
                    _prefab = PrefabHolder.Instance.TileBox;
                    break;
                case TileType.RollableBox:
                    Blocked = true;
                    _prefab = PrefabHolder.Instance.RollableBox;
                    break;
                case TileType.TileSwitch:
                    Blocked = true;
                    _prefab = PrefabHolder.Instance.TileSwitch;
                    break;
                default:
                    Blocked = false;
                    _prefab = PrefabHolder.Instance.TileNormalPrefab;
                    break;
            }

            GenerateVisuals();
        }

        //Return crate
        public GameObject ReturnCrate()
        {
            _item = GetComponentInChildren<Crate>().gameObject;
            return _item;
        }

        public void SetItem(GameObject Item)
        {
            _item = Item;
        }


        public void GenerateVisuals()
        {
        
              var container = transform.FindChild("Visuals").gameObject;
            //initially remove all children
            for (var i = 0; i < container.transform.childCount; i++)
            {
                Destroy(container.transform.GetChild(i).gameObject);
            }

            GameObject renderType;
            renderType = (GameObject)Instantiate(_prefab, transform.position, Quaternion.Euler(new Vector3(0, 0, 0)));
            renderType.transform.localScale = new Vector3(1,-1,1);
            renderType.transform.parent = container.transform;

            _renderType = renderType;
        }

        private void OnMouseEnter()
        {
            if (SceneManager.GetActiveScene().name != "MapCreatorScene") return;
            if (Input.GetMouseButton(0))
            {
                SetType(MapCreatorManager.Instance.PalletSelection);
            }
            else if (Input.GetMouseButton(1))
            {
                SetType(TileType.Normal);

            }
        }

        private void OnMouseDown()
        {
            if (SceneManager.GetActiveScene().name != "MapCreatorScene") return;
            if (Input.GetMouseButton(0))
            {
                SetType(MapCreatorManager.Instance.PalletSelection);
            }
            else if (Input.GetMouseButton(1))
            {
                SetType(TileType.Normal);

            }
        }

        /// <summary>
        /// When tile is clciked....
        /// </summary>
        /// <param name="eventData"></param>
        public void OnPointerClick(PointerEventData eventData)
        {
            switch (eventData.button)
            {
                case PointerEventData.InputButton.Left:
                    SetType(MapCreatorManager.Instance.PalletSelection);
                    break;
                case PointerEventData.InputButton.Middle:
                    Debug.Log("Invalid Input");
                    break;
                case PointerEventData.InputButton.Right:
                    SetType(TileType.Normal);
                    break;
                default:
                    Debug.Log("Invalid Input");
                    break;
            }

        }
     



       
        

        #region Sets & Returns

        /// <summary>
        /// Return Tile north of this tile
        /// </summary>
        /// <returns></returns>
        public Tile ReturnNorth()
        {
            return _north;
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
            _renderType = renderType;
        }

        /// <summary>
        /// Return The tiles render Type
        /// </summary>
        /// <returns></returns>
        public GameObject ReturnRenderType()
        {
            return _renderType;
        }



        /// <summary>
        /// Set the Tiles Position
        /// </summary>
        /// <param name="newPosition"></param>
        public void SetPosition(Vector2 newPosition)
        {
            GridPosition = newPosition;
        }

     
        /// <summary>
        /// Return the Tiles neighbors
        /// </summary>
        /// <returns></returns>
        public List<Tile> ReturnNeighbors()
        {
            return Neighbors;
        }

        /// <summary>
        /// Return the current player status
        /// </summary>
        /// <returns></returns>
        public Vector2 ReturnPosition()
        {
            return GridPosition;
        }

        /// <summary>
        /// Returns the tiles type
        /// </summary>
        /// <returns></returns>
        public TileType ReturnType()
        {
            return Type;
        }

        /// <summary>
        /// Returns true if the tile is impassable
        /// </summary>
        /// <returns></returns>
        public bool IsBlocked()
        {
            return Blocked;
        }


        /// <summary>
        /// Sets tiles material
        /// </summary>
        /// <returns></returns>
        public void SetMaterial(Material material)
        {
            GetComponentInChildren<Renderer>().sharedMaterial = material;
        }


        /// <summary>
        /// Returns tiles current material
        /// </summary>
        /// <returns></returns>
        public Material ReturnMaterial()
        {
            return GetComponentInChildren<Renderer>().sharedMaterial;
        }
        #endregion
    }
}
