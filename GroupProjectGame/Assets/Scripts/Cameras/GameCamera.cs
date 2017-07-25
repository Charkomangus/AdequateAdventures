/*******************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*******************************************************/
using Assets.Scripts.MainManagers;
using UnityEngine;

namespace Assets.Scripts.Cameras
{
    /// <summary>
    /// This class controls the main gameplay camera - it follows the player and its height can be set to a new value
    /// </summary>
    public class GameCamera : MonoBehaviour
    {
        private Player.Player _player;
        private Vector3 _originalPosition;
        private float newHeight;
        private float _normalHeight;
        private float _puzzleHeight;
        private float _hugePuzzleHeight;
        private int _oldPuzzleNumber;
       
        /// <summary>
        /// Set default camera heights
        /// </summary>
        private void Start()
        {
            _player = GameManager.Instance.Player;
            _originalPosition = transform.position;
            //Set camera heights
            newHeight = 7.5f;
            _normalHeight = 7.5f;
            _puzzleHeight = 9;
            _hugePuzzleHeight = 12f;
        }
       
        /// <summary>
        /// Update is called once per frame
        /// </summary>
        private void LateUpdate()
        {
            if (_player == null)
            {
                _player = GameManager.Instance.Player; return;
            }
           
            transform.position = new Vector3(_player.transform.position.x, transform.position.y, _player.transform.position.z);
            transform.position = Vector3.Lerp(transform.position, new Vector3(_player.transform.position.x, newHeight, _player.transform.position.z ), Time.deltaTime);

            //Only update the height if the player has exited or entered a new puzzle
            if (_player.ReturnCurrentPuzzle() != _oldPuzzleNumber)
                DetermineHeight();

            _oldPuzzleNumber = _player.ReturnCurrentPuzzle();
        }

        /// <summary>
        /// Check what puzzle the player is in and zoom out accordingly
        /// </summary>
        private void DetermineHeight()
        {
            //Get some informationg from the game manager
            var player = GameManager.Instance.Player;
            var puzzle = player.ReturnCurrentPuzzle();
            var currentAct = GameManager.Instance.CurrentAct;
            var currentLevel = GameManager.Instance.CurrentLevel;

            //If the player is not functional do not proceed - this is to allow death and starting animations to work
            if (player.IsInitialized() == false) return;

            //If the player is not in a puzzle normal Height will be used. Otherwise puzzle height will be used. For a few eexcpetions hugepuzzle height will be used.
            switch (currentAct)
            {
                case 1:
                    switch (currentLevel)
                    {
                        case 1:
                            //Huge Puzzles
                            if (puzzle == 4)
                                SetCameraHeight(_hugePuzzleHeight);
                            //Normal Puzzles
                            else if (puzzle != -1)
                                SetCameraHeight(_puzzleHeight);
                            //No Puzzles
                            else
                                SetCameraHeight(_normalHeight);
                            break;
                        case 2:
                            //Huge Puzzles
                            if (puzzle == 2 || puzzle == 3)
                                SetCameraHeight(_hugePuzzleHeight);
                            //Normal Puzzles
                            else if (puzzle != -1)
                                SetCameraHeight(_puzzleHeight);
                            //No Puzzles
                            else
                                SetCameraHeight(_normalHeight);
                            break;
                        case 3:
                            //Huge Puzzles
                            if (puzzle == 1 || puzzle == 2)
                                SetCameraHeight(_hugePuzzleHeight);
                            //Normal Puzzles
                            else if (puzzle != -1)
                                SetCameraHeight(_puzzleHeight);
                            else
                                //No Puzzles
                                SetCameraHeight(_normalHeight);
                            break;
                    }
                    break;
                case 2:
                    //ACT NOT YET IN PLACE
                    break;
                case 3:
                    //ACT NOT YET IN PLACE
                    break;
            }

        }

        /// <summary>
        /// Set the preffered height of the camera
        /// </summary>
        /// <param name="height"></param>
        public void SetCameraHeight(float height)
        {
            newHeight = height;
        }
    }
}
