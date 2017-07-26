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
      private int _mapSize;
        private List<List<Tile>> _map = new List<List<Tile>>();
        [SerializeField]private readonly List<Tile> _puzzleEntryTiles = new List<Tile>();
        private readonly List<Tile> _puzzleCompleteTiles = new List<Tile>();
        private Tile _entryTile;

        /// <summary>
        /// Populate the map with tiles
        /// </summary>
        /// <param name="mapSize"></param> Given from Game manager
        public void GenerateMap(int mapSize)
        {
            for (var i = 0; i < mapSize; i++)
            {
                var row = new List<Tile>();
                for (var j = 0; j < mapSize; j++)
                {
                    var tile = ((GameObject) Instantiate(PrefabHolder.Instance.BaseTilePrefab,
                        new Vector3(i - Mathf.Floor(mapSize / 2f), 0, -j + Mathf.Floor(mapSize / 2f)),
                        Quaternion.Euler(new Vector3()))).GetComponent<Tile>();
               
                    tile.SetPosition(new Vector3(i, j, 0));
                    tile.SetType(TileType.Normal);
                    tile.SetPuzzleNumber(-1);
                    row.Add(tile);
                }
                _map.Add(row);
            }
        }

        //Find the tile that has an entry flag on it
        public Tile FindLevelEntry()
        {
            for (var x = 0; x < _map.Count; x++)
            {
                for (var y = 0; y < _map.Count; y++)
                {
                    if (_map[x][y].IsEntry())
                        return _map[x][y];

                    
                        
                    }

                }
            return null;
        }
         
        

        //Find the tile that has an entry flag on it
        private bool PuzzleEntry(int i, int j)
        {
            if (_map[i][j].IsPuzzleEntry())
            {
                return true;
            }
            return false;
        }

        //Find the tile that has an entry flag on it
        private void PuzzleExit(int i, int j)
        {
            if (_map[i][j].IsPuzzleComplete())
            {
                _puzzleCompleteTiles.Add(_map[i][j]);
            }
        }

        /// <summary>
        /// Load a map from an XML file
        /// </summary>
        /// <param name="name"></param>
        public void LoadMapFromXml(string name)
        {
            //Load map level
            Transform mapTransform = GameManager.Instance.MapTransform;
            if (mapTransform == null) return;
            var container = MapSaveLoad.LoadFromResources(name);
            if(container == null) return;
            _mapSize = container.Size;

            //Remove all children
            for (var i = 0; i < mapTransform.childCount; i++)
            {
                Destroy(mapTransform.GetChild(i).gameObject);
            }

            _map = new List<List<Tile>>();
            for (var x = 0; x < _mapSize; x++)
            {
                var row = new List<Tile>();
                for (var y = 0; y < _mapSize; y++)
                {
                    Tile tile = Instantiate(PrefabHolder.Instance.BaseTilePrefab,new Vector3(x - Mathf.Floor(_mapSize / 2f), 0, -y + Mathf.Floor(_mapSize / 2f)),Quaternion.Euler(new Vector3())).GetComponent<Tile>();
                    tile.transform.parent = mapTransform;
                    tile.SetPosition(new Vector2(x, y));


                    var tempTile = container.Tiles.First(position => position.LocationX == x && position.LocationY == y);
                    TileType type = tempTile.Type;
                    tile.SetType(type);
                    tile.name = tempTile.Type + " Tile";
                    tile.SetObject(tempTile.Object);
                    tile.SetActor(tempTile.Actor);
                    tile.SetPuzzleNumber(Convert.ToInt32(tempTile.PuzzleNumber));
                    switch (tempTile.Flag)
                    {
                        case "PuzzleEntry":
                            tile.SetPuzzleEntry(true);
                            _puzzleEntryTiles.Add(tile);
                            break;
                        case "PuzzleComplete":
                            tile.SetPuzzleComplete(true);
                            _puzzleCompleteTiles.Add(tile);
                            break;
                        case "Entry":
                            tile.SetEntry(true);
                            _entryTile = tile;
                            break;
                        case "Exit":
                            tile.SetExit(true);
                            break;
                        case "Dialogue":
                            tile.SetDialogue(true);
                            break;
                        case "North":
                            tile.SetDirection(0);
                            tile.SetPatrol(true);
                            break;
                        case "South":
                            tile.SetDirection(1);
                            tile.SetPatrol(true);
                            break;
                        case "West":
                            tile.SetDirection(2);
                            tile.SetPatrol(true);
                            break;
                        case "East":
                            tile.SetDirection(3);
                            tile.SetPatrol(true);
                            break;
                        case "Patrol":
                            tile.SetPatrol(true);
                            break;
                        case "Null":
                            break;
                    }
                

                    row.Add(tile);
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
        /// Return the maps entry tile
        /// </summary>
        /// <returns></returns>
        public Tile ReturnEntryTile()
        {
            return _entryTile;
        }

        /// <summary>
        /// Return the maps entry tile
        /// </summary>
        /// <returns></returns>
        public List<Tile> ReturnPuzzleEntryTile()
        {
            return _puzzleEntryTiles;
        }

        /// <summary>
        /// Return the maps entry tile
        /// </summary>
        /// <returns></returns>
        public List<Tile> ReturnPuzzleExitTile()
        {
            return _puzzleCompleteTiles;
        }


        /// <summary>
        /// Return the maps entry tile
        /// </summary>
        /// <returns></returns>
        public Tile ReturnSpecificTile(int x, int y)
        {
            if (x < 0 || x > _mapSize-1) return null;
            if (y < 0 || y > _mapSize-1) return null;
            return _map[x][y];
        }

        #endregion
    }
}
