/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/

using System;
using UnityEngine;

namespace Assets.Scripts.Tiles
{
    /// <summary>
    /// This controls the conveyor belt aspect of a tile. Each such tile comes with a copy of this script
    /// </summary>
    public class ConveyorBelt : MonoBehaviour
    {
        //Conveyor Belts direction (Note - this is the direction they will send the player to not the direction of their sprite)
        private enum Direction
        {
            North,
            South,
            East,
            West
        }

        [SerializeField]
        private Direction _direction;
        [SerializeField]
        private TileType _tileType;
        [SerializeField]
        private int _speed, _originalDirection;
        [SerializeField]
        private int _puzzleNumber;
        private Tile _tile;
        private SpriteRenderer _sprite;

        /// <summary>
        /// Get references to componments and its parent tile
        /// </summary>
        private void Start()
        {
            _sprite = GetComponent<SpriteRenderer>();
            _tile = GetComponentInParent<Tile>();
            _tileType = _tile.ReturnType();
            _puzzleNumber = _tile.ReturnPuzzleNumber();
            DetermineDirection();
        }

        /// <summary>
        /// Determine starting direction by using the parent tiles direction
        /// </summary>
        private void DetermineDirection()
        {

            switch (_tile.ReturnDirection())
            {
                case 0:
                    _direction = Direction.North;
                    break;
                case 1:
                    _direction = Direction.South;
                    break;
                case 2:
                    _direction = Direction.East;
                    break;
                case 3:
                    _direction = Direction.West;
                    break;
            }
            //Update the sprite
            GenerateVisuals();
        }

        /// <summary>
        /// Depending on the direction rotate the sprite accordingly
        /// </summary>
        public void GenerateVisuals()
        {
            if (_sprite == null) return;
            switch (_direction)
            {
                case Direction.North:
                    transform.localRotation = Quaternion.Euler(90, 0, 0);
                    _sprite.flipY = true;
                    break;
                case Direction.South:
                    transform.localRotation = Quaternion.Euler(90, 0, 0);
                    _sprite.flipY = false;
                    break;
                case Direction.East:
                    transform.localRotation = Quaternion.Euler(90, 90, 0);
                    _sprite.flipY = false;
                    break;
                case Direction.West:
                    transform.localRotation = Quaternion.Euler(90, 90, 0);
                    _sprite.flipY = true;
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        /// <summary>
        /// Set a new direction
        /// </summary>
        /// <param name="newDirection"></param>
        public void SetDirecton(int newDirection)
        {
            _originalDirection = newDirection;
            switch (newDirection)
            {
                case 0:
                    _direction = Direction.North;
                    break;
                case 1:
                    _direction = Direction.South;
                    break;
                case 2:
                    _direction = Direction.East;
                    break;
                case 3:
                    _direction = Direction.West;
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
            //Update sprite
            GenerateVisuals();
        }

        /// <summary>
        /// Swaps direction to opposite - horizontal or vertical - this is used by switches
        /// </summary>
        public void SwapDirection()
        {
            switch (_direction)
            {
                case Direction.North:
                    _direction = Direction.South;
                    break;
                case Direction.South:
                    _direction = Direction.North;
                    break;
                case Direction.East:
                    _direction = Direction.West;
                    break;

                case Direction.West:
                    _direction = Direction.East;
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
            //Update sprite
            GenerateVisuals();
        }

        /// <summary>
        /// Reset the conveyor to it's starting direction
        /// </summary>
        public void ResetObject()
        {
            switch (_originalDirection)
            {
                case 0:
                    _direction = Direction.North;
                    break;
                case 1:
                    _direction = Direction.South;
                    break;
                case 2:
                    _direction = Direction.East;
                    break;
                case 3:
                    _direction = Direction.West;
                    break;
            }
            //Update sprites
            GenerateVisuals();
        }
        #region Gets & Sets


        /// <summary>
        /// Return the current speed the belts operate with
        /// </summary>
        /// <returns></returns>
        public int ReturnSpeed()
        {
            return _speed;
        }

        /// <summary>
        /// Return what type its parent tile is
        /// </summary>
        /// <returns></returns>
        public TileType ReturnType()
        {
            return _tileType;
        }

        /// <summary>
        /// Set this tiles puzzle number
        /// </summary>
        /// <param name="puzzle"></param>
        public void SetPuzzle(int puzzle)
        {
            _puzzleNumber = puzzle;
        }

        /// <summary>
        /// Return this tiles puzzle number
        /// </summary>
        public int ReturnPuzzle()
        {
            return _puzzleNumber;
        }

        /// <summary>
        /// Return the tile in the direction this conveyor belt is facing - this is used to know which tile the object or player should move
        /// </summary>
        /// <returns></returns>
        public int ReturnDirection()
        {
            switch (_direction)
            {
                case Direction.North:
                    return 0;
                case Direction.South:
                    return 1;
                case Direction.East:
                    return 2;
                case Direction.West:
                    return 3;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }
        #endregion

    }
}
