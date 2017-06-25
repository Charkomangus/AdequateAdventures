using System;
using Assets.Scripts.Tiles;
using Boo.Lang;
using UnityEngine;

namespace Assets.Scripts.Objects
{
    public class SlidingBox : MonoBehaviour
    {


        [Header("Tiles")]
        [SerializeField]
        private Tile _parentTile;
        private float _moveSpeed;
        private List<Tile> newTiles;
        private bool scheduleToDie, _conveyed;


        // Use this for initialization
        void Start()
        {
            _moveSpeed = 2;
            _parentTile = GetComponentInParent<Tile>();
        }

        // Update is called once per frame
        void Update()
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
                else if (scheduleToDie)
                {

                    _parentTile.SetBlocked(false);
                    _parentTile.SetObject(TileObject.Empty);
                    Destroy(gameObject);
                }
            }
            else
            {
                _moveSpeed = 2;
                //Move towards the tile quickly
                SmoothMove(transform.position, _parentTile.transform.position, 2 * _moveSpeed);
            }
        }

        //Set parent tile. Depending on the tile type different behaviours will emerge.
        public void SetParentTile(Tile tile, int direction)
        {
            if (tile == null) return;
            if (tile.IsBlocked()) return;

            //Free the current parent tile
            _parentTile.SetBlocked(false);
            _parentTile.SetObject(TileObject.Empty);

          
            //Set new tile as parent tile
            _parentTile = tile;
            _parentTile.SetObject(TileObject.SlidingBox);
            _parentTile.GenerateObject(gameObject);

            TileType type = tile.ReturnType();

            //If the box encounters Ice cracks or fire kill it when it reaches the tile
            if (type == TileType.IceCracks || type == TileType.Fire)
            {
                scheduleToDie = true;
                return;
            }

            //If the box is on a conveyor update its direction and set it to be conveyed
            if (type == TileType.RedConveyorBelt || type == TileType.GreenConveyorBelt || type == TileType.BlueConveyorBelt)
            {
                direction = _parentTile.GetComponentInChildren<ConveyorBelt>().ReturnDirection();
                _conveyed = true;

            }
            else
            {
                _conveyed = false;

                switch (direction)
                {
                    case 0:
                        SetParentTile(_parentTile.North, direction);
                        break;
                    case 1:
                        SetParentTile(_parentTile.South, direction);
                        break;
                    case 2:
                        SetParentTile(_parentTile.East, direction);
                        break;
                    case 3:
                        SetParentTile(_parentTile.West, direction);
                        break;
                }
            }
        }
        //Check if player has reached parent tile
        private bool HasReachedTile()
        {
            if (_conveyed)
                return Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.6f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.6f;
            return Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.3f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.3f;
        }


        public void SmoothMove(Vector3 startPosition, Vector3 endPosition, float speed)
        {
            transform.position = Vector3.Lerp(startPosition, endPosition, speed * Time.deltaTime);
        }
    }
}
