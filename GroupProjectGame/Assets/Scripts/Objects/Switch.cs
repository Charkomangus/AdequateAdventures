/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using System;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Managers;
using Assets.Scripts.Tiles;
using Boo.Lang;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.Objects
{
    /// <summary>
    /// This class controls the switches that switch the conveyor belts direction
    /// </summary>
    public class Switch : MonoBehaviour
    {

        private enum Type
        {
            Red,
            Green,
            Blue
        }
        [SerializeField]
        private Type _switchType;
        [SerializeField]
        private int _puzzleNumber;
        private string _currentScene;
        private SpriteRenderer _spriteRenderer;
        private Sprite[] _sprites;
        //List containing the conveyor belts that this switch will affect
        private List<ConveyorBelt> _belts = new List<ConveyorBelt>();

        // Use this for initialization
        void Start()
        {
            _currentScene = SceneManager.GetActiveScene().name;
            PuzzleManager _puzzlemanager = new PuzzleManager();
            switch (_currentScene)
            {
                //Gameplay
                case "Level1":
                    _puzzlemanager = GameManager.Instance.PuzzleManager;
                    break;
                //Level creator
                case "MapCreatorScene":
                    _puzzlemanager = GetComponentInParent<PuzzleManager>();
                    break;
            }
            InitializeSwitch(_puzzlemanager);
        }

        /// <summary>
        /// Set the sprites and conveyor belts depending on the switchs colour
        /// </summary>
        /// <param name="puzzlemanager"></param>
        private void InitializeSwitch(PuzzleManager puzzlemanager)
        {
            //Check what puzzle number this tile is on
            _puzzleNumber = GetComponentInParent<Tile>().ReturnPuzzleNumber();
            switch (_switchType)
            {
                case Type.Red:
                {
                    _sprites = Resources.LoadAll<Sprite>("Switch/Red/");
                    foreach (var belt in puzzlemanager.ReturnRedConveyorBelts())
                        if (belt.ReturnPuzzle() == _puzzleNumber)
                            _belts.Add(belt);
                }
                    break;
                case Type.Green:
                {
                    _sprites = Resources.LoadAll<Sprite>("Switch/Green/");
                    foreach (var belt in puzzlemanager.ReturnGreenConveyorBelts())
                        if (belt.ReturnPuzzle() == _puzzleNumber)
                            _belts.Add(belt);
                }
                    break;
                case Type.Blue:
                {
                    _sprites = Resources.LoadAll<Sprite>("Switch/Blue/");
                    foreach (var belt in puzzlemanager.ReturnBlueConveyorBelts())
                        if (belt.ReturnPuzzle() == _puzzleNumber)
                            _belts.Add(belt);
                }
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
         
            _spriteRenderer = GetComponent<SpriteRenderer>();
            //Set it to the open position
            _spriteRenderer.sprite = _sprites[0];
        }

        /// <summary>
        /// Flip the sprite to the next one and swap direction for the conveyor belts
        /// </summary>
        public void FlipSwitch()
        {
            _spriteRenderer.sprite = _spriteRenderer.sprite == _sprites[0] ? _sprites[1] : _sprites[0];
            foreach (var belt in _belts)
            {
                belt.SwapDirection();
            }
        }

        /// <summary>
        /// Reset the switch sprite to the open position
        /// </summary>
        public void ResetObject()
        {
            _spriteRenderer.sprite = _sprites[0];
        }

        #region Gets & Sets
        /// <summary>
        /// Set this switches puzzle number
        /// </summary>
        /// <param name="puzzle"></param>
        public void SetPuzzle(int puzzle)
        {
            _puzzleNumber = puzzle;
        }

        /// <summary>
        /// Return this switches puzzle number
        /// </summary>
        /// <returns></returns>
        public int ReturnPuzzle()
        {
            return _puzzleNumber;
        }
        #endregion

    }
}
