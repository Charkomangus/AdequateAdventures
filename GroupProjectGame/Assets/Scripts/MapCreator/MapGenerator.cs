using System;
using System.Collections.Generic;
using System.Linq;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Tiles;
using UnityEngine;

namespace Assets.Scripts.MapCreator
{
    /// <summary>
    /// This class generates the map. 
    /// </summary>
    public class MapGenerator : MonoBehaviour
    {
        public GameObject TileList;
        private int _mapSize;
        private List<List<Tile>> _map = new List<List<Tile>>();
        private readonly List<Tile> _boxList = new List<Tile>();
        /// <summary>
        /// Populate the map with tiles
        /// </summary>
        /// <param name="mapSize"></param> Given from Game manager
        /// <param name="tilePrefab"></param> Given from Game manager
        public void GenerateMap(int mapSize)
        {
            for (var i = 0; i < mapSize; i++)
            {
                var row = new List<Tile>();
                for (var j = 0; j < mapSize; j++)
                {
                    var tile = ((GameObject)Instantiate(PrefabHolder.Instance.BaseTilePrefab, new Vector3(i - Mathf.Floor(mapSize / 2f), 0, -j + Mathf.Floor(mapSize / 2f)), Quaternion.Euler(new Vector3()))).GetComponent<Tile>();
                   tile.transform.SetParent(TileList.transform);
                    tile.SetPosition(new Vector3(i, j, 0));
                    tile.SetType(TileType.Normal);
                   
                    row.Add(tile);
                }
                _map.Add(row);
            }
        }


        /// <summary>
        /// Load a map from an XML file
        /// </summary>
        /// <param name="level"></param>
        public void LoadMapFromXml(string name)
        {
            _boxList.Clear();
         
            //Load map level
            Transform _mapTransform = GameManager.Instance.MapTransform;
            var container = MapSaveLoad.LoadFromResources(name);
            _mapSize = container.Size;
            
            //Remove all children
            for (var i = 0; i < _mapTransform.childCount; i++)
            {
                Destroy(_mapTransform.GetChild(i).gameObject);
            }

            _map = new List<List<Tile>>();
            for (var x = 0; x < _mapSize; x++)
            {
                var row = new List<Tile>();
                for (var y = 0; y < _mapSize; y++)
                {
                    Tile tile = Instantiate(PrefabHolder.Instance.BaseTilePrefab, new Vector3(x - Mathf.Floor(_mapSize / 2f), 0, -y + Mathf.Floor(_mapSize / 2f)), Quaternion.Euler(new Vector3())).GetComponent<Tile>();
                    tile.transform.parent = _mapTransform;
                    tile.SetPosition(new Vector2(x, y));
                    TileType type = (TileType)container.Tiles.First(position => position.LocX == x && position.LocY == y).Id;
          
                    tile.SetType((TileType)container.Tiles.First(position => position.LocX == x && position.LocY == y).Id);
                 
                    tile.name = ((TileType)container.Tiles.First(position => position.LocX == x && position.LocY == y).Id) + " Tile";
                   row.Add(tile);
                    switch (type)
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
                            _boxList.Add(tile);
                            break;
                        
                    }
                }
                _map.Add(row);
            }
        }
        #region Sets & Returns
        /// <summary>
        /// Return the currently generated Map
        /// </summary>
        /// <returns></returns>
        public List<List<Tile>> ReturnMap()
        {
            return _map;
        }

        /// <summary>
        /// Return the currently generated Maps size
        /// </summary>
        /// <returns></returns>
        public int ReturnMapSize()
        {
            return _mapSize;
        }


        /// <summary>
        /// Return all box tiles in map
        /// </summary>
        /// <returns></returns>
        public List<Tile> ReturnBoxTiles()
        {
            return _boxList;
        }
        #endregion
    }
}
