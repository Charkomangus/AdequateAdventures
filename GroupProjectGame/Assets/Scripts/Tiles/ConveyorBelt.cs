using System;
using Assets.Scripts.MapCreator;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.Tiles
{
   
    public class ConveyorBelt : MonoBehaviour
    {
        private enum Direction
        {
            North,
            South,
            East,
            West
        }

        [SerializeField]private Direction _direction;
        [SerializeField]private TileType _tileType;
        [SerializeField]private int _speed, _originalDirection;

        [SerializeField]private int _puzzleNumber;
        private Tile _tile;
        private SpriteRenderer _sprite;
   
        // Use this for initialization
        void Awake()
        {
           
            _sprite = GetComponent<SpriteRenderer>();
          
        }

     

        void Start()
        {
            _tile = GetComponentInParent<Tile>();
            _tileType = _tile.ReturnType();
            _puzzleNumber = _tile.ReturnPuzzleNumber();
           DetermineDirection();
        }
     

        //Determine starting direction by looking at what the tile has to say
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
         
         GenerateVisuals();
        }

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

      //  Return the tile in the direction this conveyor belt is facing
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

        //Set the belts direction
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
            GenerateVisuals();
        }

        //Swaps direction to opposite - horizontal or vertical
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
            GenerateVisuals();
        }

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
            GenerateVisuals();
        }


        public int ReturnSpeed()
        {
            return _speed;
        }

        public TileType ReturnType()
        {
            return _tileType;
        }

        public void SetPuzzle(int puzzle)
        {
            _puzzleNumber = puzzle;
        }

        public int ReturnPuzzle()
        {
            return _puzzleNumber;
        }


    }
}
