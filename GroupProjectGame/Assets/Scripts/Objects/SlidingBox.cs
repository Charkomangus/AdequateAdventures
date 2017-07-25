/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using System;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Tiles;
using Boo.Lang;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Assets.Scripts.Objects
{
    public class SlidingBox : MonoBehaviour
    {


        [Header("Tiles")]
        [SerializeField]
        private Tile _parentTile, _originalTile;
        private float _moveSpeed;
        private List<Tile> _newTiles;
        [SerializeField]private bool _scheduleToDie, _conveyed;
        [SerializeField]private int _direction;
        [SerializeField]
        private int _puzzleNumber;
        private TileType _parentTileType;
        // Use this for initialization
        private void Start()
        {
            _moveSpeed = 2;
            _parentTile = GetComponentInParent<Tile>();
            _originalTile = _parentTile;
            _puzzleNumber = _parentTile.ReturnPuzzleNumber();
        }

        // Update is called once per frame
        private void Update()
        {
            //Only perform this if the object is in the target tile
            if (HasReachedTile())
            {
                //Move towards the tile slowly
                SmoothMove(transform.position, _parentTile.transform.position, _moveSpeed);

                //If its on a conveyor belt change its 
                if (_conveyed)
                {
                    _moveSpeed = _parentTile.GetComponentInChildren<ConveyorBelt>().ReturnSpeed();
                    int direction = _parentTile.GetComponentInChildren<ConveyorBelt>().ReturnDirection();
                    switch (direction)
                    {
                        case 0:
                            SetParentTile(_parentTile.North, direction);
                            break;
                        case 1:
                            SetParentTile(_parentTile.South, direction);
                            break;
                        case 2:
                            SetParentTile(_parentTile.West, direction);
                            break;
                        case 3:
                            SetParentTile(_parentTile.East, direction);
                            break;
                      
                    }
                }
              
                //Free the current parent tile and kill the object
                else if (_scheduleToDie)
                {
                    _scheduleToDie = false;
                    if (_parentTile.ReturnType() == TileType.IceCracks)
                    {
                        _parentTile.GetComponentInChildren<ParticleSystem>().Play();
                        var temp = _parentTile.GetComponentInChildren<SpriteRenderer>();
                        temp.sprite = Resources.Load<Sprite>("LevelMapArt/icecrackbroken");

                        temp.transform.localScale = new Vector3(Random.Range(0.6f, 0.9f), Random.Range(0.6f, 0.9f), Random.Range(0.6f, 0.9f));
                        temp.transform.Rotate(new Vector3(0, 0, Random.Range(0, 180)));
                    }
                    _parentTile.SetBlocked(false);
                    _parentTile.SetObject(TileObject.Empty);
                    GetComponent<SpriteRenderer>().enabled = false;
                    ResetObject();
                }
            }
            else
            {
                _moveSpeed = 2;
                //Move towards the tile quickly
                SmoothMove(transform.position, _parentTile.transform.position, 2 * _moveSpeed);
            }
        }

        //Return the box back to it's original position
        public void ResetObject()
        {
            if (_originalTile == GameManager.Instance.Player.ReturnParentTile())
            {
                foreach (var neighbor in _originalTile.ReturnNeighbors())
                {
                    if (neighbor.IsBlocked() == false && neighbor.ReturnType() != TileType.IceCracks && neighbor.ReturnType() != TileType.Fire)
                    {
                        SetParentTile(neighbor, -1);
                        transform.position = neighbor.transform.position;
                        break;
                    }
                }
            }
            else
            {
                SetParentTile(_originalTile, -1);
                transform.position = _originalTile.transform.position;
            }
            GetComponent<SpriteRenderer>().enabled = true;
            _scheduleToDie = false;
            _direction = -1;
        }

        //Set parent tile. Depending on the tile type different behaviours will emerge.
        public void SetParentTile(Tile tile, int direction)
        {
            _direction = direction;
            while (true)
            {
                if (tile == null) return;
                if (tile.IsBlocked() && tile.ReturnType() != TileType.Door) return;

                //Free the current parent tile
                _parentTile.SetBlocked(false);
                _parentTile.SetObject(TileObject.Empty);


                //Set new tile as parent tile
                _parentTile = tile;
                _parentTile.SetObject(TileObject.SlidingBox);
                _parentTile.GenerateObject(gameObject);

                _parentTileType = tile.ReturnType();

                if (direction == -1) return;
                switch (_parentTileType)
                {

                    case TileType.Door:
                        _parentTile.SetBlocked(false);
                        _scheduleToDie = true;
                        return;
                    //If the box encounters Ice cracks or fire kill it when it reaches the tile
                    case TileType.IceCracks:
                    case TileType.Fire:
                        _scheduleToDie = true;
                        return;

                    //Switch direction to fit the belts
                    case TileType.RedConveyorBelt:
                    case TileType.GreenConveyorBelt:
                    case TileType.BlueConveyorBelt:
                        _direction = _parentTile.GetComponentInChildren<ConveyorBelt>().ReturnDirection();
                        _conveyed = true;
                        break;
                    default:
                        if (_conveyed == false)
                        {
                          
                            switch (_direction)
                            {
                                case 0:
                                    tile = _parentTile.North;

                                    continue;
                                case 1:
                                    tile = _parentTile.South;
                                    continue;
                                case 2:
                                    tile = _parentTile.East;
                                    continue;
                                case 3:
                                    tile = _parentTile.West;
                                    continue;
                            }
                            break;
                        }
                        else

                        _conveyed = false;
                        switch (_direction)
                        {
                            case 0:
                                tile = _parentTile.North;
                                
                                continue;
                            case 1:
                                tile = _parentTile.South;
                                continue;
                            case 2:
                                tile = _parentTile.East;
                                continue;
                            case 3:
                                tile = _parentTile.West;
                                continue;
                        }
                        break;

                }

                //If the box is on a conveyor update its direction and set it to be conveyed
                break;
            }
        }

        /// <summary>
        /// Check if the object is close to the tile
        /// </summary>
        /// <returns></returns>
        private bool HasReachedTile()
        {
            if (_conveyed)
                return Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.6f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.6f;
            return Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.3f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.3f;
        }

        /// <summary>
        /// Move to a new location smoothly - frame independent
        /// </summary>
        /// <param name="startPosition">Current Tile</param>
        /// <param name="endPosition">Destinatiob</param>
        /// <param name="speed">Multiplied by Time.deltaTime</param>
        public void SmoothMove(Vector3 startPosition, Vector3 endPosition, float speed)
        {
            transform.position = Vector3.Lerp(startPosition, endPosition, speed * Time.deltaTime);
        }
        #region Gets & Sets
        /// <summary>
        /// Set the puzzle number
        /// </summary>
        /// <param name="puzzle"></param>
        public void SetPuzzle(int puzzle)
        {
            _puzzleNumber = puzzle;
        }

        /// <summary>
        /// Return the puzzle number the box is on
        /// </summary>
        /// <returns></returns>
        public int ReturnPuzzle()
        {
            return _puzzleNumber;
        }
        #endregion
    }
}
