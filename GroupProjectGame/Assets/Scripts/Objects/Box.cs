/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using System;
using System.Collections;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Tiles;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Assets.Scripts.Objects
{
    /// <summary>
    /// Box that can be pushed by the player
    /// </summary>
    public class Box : MonoBehaviour
    {
        [Header("Tiles")]
        [SerializeField]private Tile _parentTile, _originalTile;
        [SerializeField]
        private int _moveSpeed;       
        private bool _scheduleToDie, _conveyed;
        [SerializeField]
        private int _puzzleNumber;
        [SerializeField]private Sprite[] images;

        /// <summary>
        ///  Use this for initialization
        /// </summary>
        private void Start ()
        {
            _moveSpeed = 2;
            _parentTile = GetComponentInParent<Tile>();
            _originalTile = _parentTile;
            _puzzleNumber = _parentTile.ReturnPuzzleNumber();
            images = Resources.LoadAll<Sprite>("LevelMapArt/Level" + GameManager.Instance.CurrentAct+"_"+GameManager.Instance.CurrentLevel+"/");

            if(images.Length > 0)
                GetComponent<SpriteRenderer>().sprite = images[Random.Range(0, images.Length)];
            var temp = Random.Range(0.75f, 1);
            transform.localScale = new Vector3(temp, temp, temp);
        }

        /// <summary>
        /// Update is called once per frame
        /// </summary>
        private void Update ()
        {
            //Only perform this if the object is in the target tile
            if (HasReachedTile())
            {
                //Move towards the tile slowly
                SmoothMove(transform.position, _parentTile.transform.position,   _moveSpeed);

                //If its on a conveyor belt change its direction
                if (_conveyed)
                {
                    _moveSpeed = _parentTile.GetComponentInChildren<ConveyorBelt>().ReturnSpeed();
                    int direction = _parentTile.GetComponentInChildren<ConveyorBelt>().ReturnDirection();
                    switch (direction)
                    {
                        case 0:
                            StartCoroutine(SetParentTile(_parentTile.North, direction));
                            break;
                        case 1:
                            StartCoroutine(SetParentTile(_parentTile.South, direction));
                            break;
                        case 2:
                            StartCoroutine(SetParentTile(_parentTile.West, direction));
                            break;
                        case 3:
                            StartCoroutine(SetParentTile(_parentTile.East, direction));
                            break;
                        default:
                            StartCoroutine(SetParentTile(_parentTile.East, direction));
                            break;
                    }
                }
                //Free the current parent tile and kill the object
                else if (_scheduleToDie)
                {
                    _scheduleToDie = false;
                    _parentTile.SetBlocked(false);
                    _parentTile.SetObject(TileObject.Empty);
                    GetComponent<SpriteRenderer>().enabled = false;
                    if (_parentTile.ReturnType() == TileType.IceCracks)
                    {
                        _parentTile.GetComponentInChildren<ParticleSystem>().Play();
                        var temp = _parentTile.GetComponentInChildren<SpriteRenderer>();
                        temp.sprite = Resources.Load<Sprite>("LevelMapArt/icecrackbroken");

                        temp.transform.localScale = new Vector3(Random.Range(0.6f, 0.9f), Random.Range(0.6f, 0.9f), Random.Range(0.6f, 0.9f));
                        temp.transform.Rotate(new Vector3(0, 0, Random.Range(0, 180)));
                    }
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

        /// <summary>
        /// Return the box back to it's original position
        /// </summary>
        public void ResetObject()
        {

            if (_originalTile == GameManager.Instance.Player.ReturnParentTile())
            {
                foreach (var neighbor in _originalTile.ReturnNeighbors())
                {
                    if (neighbor.IsBlocked() || neighbor.ReturnType() == TileType.IceCracks ||neighbor.ReturnType() == TileType.Fire) continue;
                    StartCoroutine(SetParentTile(neighbor, -1));
                    transform.position = neighbor.transform.position;
                    break;
                }
            }
            else
            {
                StartCoroutine(SetParentTile(_originalTile, -1));
                transform.position = _originalTile.transform.position;
            }
          
            GetComponent<SpriteRenderer>().enabled = true;
        }

        /// <summary>
        /// Set parent tile. Depending on the tile type different behaviours will emerge.
        /// </summary>
        /// <param name="tile"></param>
        /// <param name="direction"></param>
        /// <returns></returns>
        public IEnumerator SetParentTile(Tile tile, int direction)
        {
            if (tile == null) yield break;
            if (tile.IsBlocked()) yield break;
            
            //Free the current parent tile
            _parentTile.SetBlocked(false);
            _parentTile.SetObject(TileObject.Empty);

         
            //Set new tile as parent tile
            _parentTile = tile;
           _parentTile.SetObject(TileObject.Box);
            _parentTile.GenerateObject(gameObject);

            TileType type = tile.ReturnType();
            if (direction == -1) yield break;
            
            switch (type)
            {
                //If the box encounters Ice cracks or fire kill it when it reaches the tile
                case TileType.IceCracks:
                case TileType.Fire:
                    _scheduleToDie = true;
                    yield break;
                //If the box encounters a conveyor belt follow it's direction

                case TileType.RedConveyorBelt:
                case TileType.GreenConveyorBelt:
                case TileType.BlueConveyorBelt:
                    direction = _parentTile.GetComponentInChildren<ConveyorBelt>().ReturnDirection();
                    _conveyed = true;
                    break;
                default:
                    _conveyed = false;

                    break;
            }

            //If the box is on a conveyor update its direction and set it to be conveyed


            //If the box encounters ice or oil it should continue to call this function until that is no longer the case.
            if (_parentTile.ReturnType() == TileType.Ice || _parentTile.ReturnType() == TileType.Oil)
            {
                yield return new WaitForSeconds(0.12f);
                switch (direction)
                {
                    case 0:
                        StartCoroutine(SetParentTile(_parentTile.North, 0));
                        break;
                    case 1:
                        StartCoroutine(SetParentTile(_parentTile.South, 1));
                        break;
                    case 2:
                        StartCoroutine(SetParentTile(_parentTile.East, 2));
                        break;
                    case 3:
                        StartCoroutine(SetParentTile(_parentTile.West, 3));
                        break;
                }
            }
            else
            {
                //Play audio pushing effect
                GameManager.Instance.AudioManager.PlayAudio(GameManager.Instance.AudioManager.CratePush, false);
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
