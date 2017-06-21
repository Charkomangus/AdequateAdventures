using System;
using Assets.Scripts.Tiles;
using Boo.Lang;
using UnityEngine;

namespace Assets.Scripts.Objects
{
    public class Box : MonoBehaviour {


        [Header("Tiles")]
        [SerializeField]private Tile _parentTile;
        private int _moveSpeed;
        private List<Tile> newTiles;
        private bool scheduleToDie;


        // Use this for initialization
        void Start ()
        {
            _moveSpeed = 2;
            _parentTile = GetComponentInParent<Tile>();
        }
	
        // Update is called once per frame
        void Update ()
        {
            if (HasReachedTile())
            {
                SmoothMove(transform.position, _parentTile.transform.position,   _moveSpeed);
                if (!scheduleToDie) return;
                //Free the current parent tile
                _parentTile.SetBlocked(false);
                _parentTile.SetObject(TileObject.Empty);
                Destroy(gameObject);
            }
            else
            {
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
           _parentTile.SetObject(TileObject.Box);
            _parentTile.GenerateObject(gameObject);

            //If the box encounters Ice cracks or fire kill it when it reaches the tile
            if (tile.ReturnType() == TileType.IceCracks || tile.ReturnType() == TileType.Fire)
            {
                scheduleToDie = true;
            }

            //If the box encounters ice or oil it should continue to call this function until that is no longer the case.
            if (_parentTile.ReturnType() != TileType.Ice && _parentTile.ReturnType() != TileType.Oil) return;

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
        //Check if player has reached parent tile
        private bool HasReachedTile()
        {
            return Math.Abs(transform.position.x - _parentTile.transform.position.x) < 0.3f && Math.Abs(transform.position.z - _parentTile.transform.position.z) < 0.3f;
        }


        public void SmoothMove(Vector3 startPosition, Vector3 endPosition, float speed)
        {
            transform.position = Vector3.Lerp(startPosition, endPosition, speed * Time.deltaTime);
        }
    }
}
