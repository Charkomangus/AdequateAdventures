﻿using System;
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
                    var tile = ((GameObject)Instantiate(PrefabHolder.Instance.BaseTilePrefab, new Vector3(i - Mathf.Floor(mapSize / 2f), 0, -j + Mathf.Floor(mapSize / 2f)), Quaternion.Euler(new Vector3()))).GetComponent<Tile>();
                   tile.transform.SetParent(TileList.transform);
                    tile.SetPosition(new Vector3(i, j, 0));
                    tile.SetType(TileType.Normal);
                   FindLevelEntry(i, j);
                    row.Add(tile);
                }
                _map.Add(row);
            }
        }

        //Find the tile that has an entry flag on it
        void FindLevelEntry(int i, int j)
        {
            if (_map[i][j].IsEntry())
                _entryTile = _map[i][j];
            
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

                    switch (tempTile.Flag)
                    {
                        case "PuzzleEntry":
                            tile.SetPuzzleEntry();
                         
                            break;
                        case "PuzzleComplete":
                            tile.SetPuzzleComplete();
                            break;
                        case "Entry":
                            tile.SetEntry();
                            _entryTile = tile;
                            break;
                        case "Exit":
                            tile.SetExit();
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
        public Tile ReturnSpecificTile(int x, int y)
        {
            return _map[x][y];
        }

        #endregion
    }
}
