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
    public class GameCamera : MonoBehaviour
    {
        private Transform _player;

        private Vector3 _position, _originalPosition;

        private float _normalHeight;
        private float _puzzleHeight;
        private float _hugePuzzleHeight;
        // Use this for initialization
        private void Start()
        {
            _player = GameManager.Instance.Player.transform;
            _originalPosition = transform.position;
            _position = _originalPosition;
            _normalHeight = 7.5f;
            _puzzleHeight = 9;
            _hugePuzzleHeight = 12f;
        }

        // Update is called once per frame
        private void Update()
        {
            transform.position = Vector3.Lerp(new Vector3(_player.position.x, transform.position.y, _player.position.z),_position, Time.deltaTime);
            DetermineHeight();
        }

        //Check what puzzle the player is in and zoom out accordingly
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



        //Set the preffered height of the camera
        public void SetCameraHeight(float height)
        {
          _position = new Vector3(transform.position.x, height, transform.position.z);
        }
    }
}
