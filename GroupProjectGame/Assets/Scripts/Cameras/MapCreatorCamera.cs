/*******************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*******************************************************/
using System;
using Assets.Scripts.MapCreator;
using Assets.Scripts.Utility;
using UnityEngine;

namespace Assets.Scripts.Cameras
{
    /// <summary>
    /// Camera class intended for the map creator. Due to the function of the map creeator this camera can operate in a multilude of different ways and can be easily controlled via input
    /// </summary>
    public class MapCreatorCamera : MonoBehaviour
    {
        //Topdown is 90 degress, Angled is 45
        private enum CameraState
        {
            Topdown,
            Angled
        }

        //The camera starts enabled
        public bool Enabled = true;

        private MapCreatorManager _mapCreatorManager;
        private Transform _transform;
        //Set to the opposite you want to start with
        private CameraState _cameraState = CameraState.Angled;
        //value in range (0, 1) used as t in Matf.Lerp
        private float _zoomPos; 



        //Control Variables
        private const float KeyboardMoveSpeed = 7f;
        private const float RotationSpeed = 50f;
        private const float PanningSpeed = 5f;
        private const float MouseRotationSpeed = 50f;
        private float _maxHeight = 3;
        private float _minHeight = 55;
        private const float HeightDampening = 5f;
        private const float KeyboardZoomingSensitivity = 3f;
        private const float ScrollWheelZoomingSensitivity = 60f;
        private int _limitX = 30; //x limit of map - these will change depending on the map size
        private int _limitY = 30; //z limit of map - these will change depending on the map size
       
        //Assigned default controls
        private const KeyCode ZoomInKey = KeyCode.Minus;
        private const KeyCode ZoomOutKey = KeyCode.Equals;
        private const KeyCode PanningKey = KeyCode.Mouse2;
        private const KeyCode RotateRightKey = KeyCode.O;
        private const KeyCode RotateLeftKey = KeyCode.P;
        private const KeyCode MouseRotationKey = KeyCode.Mouse1;
        private const KeyCode ChangeCameraKey = KeyCode.Space;

        /// <summary>
        ///Handle zooming direction depending on button pressed   
        /// </summary>
        private static int ZoomDirection
        {
            get
            {
                var zoomIn = Input.GetKey(ZoomInKey);
                var zoomOut = Input.GetKey(ZoomOutKey);
                if (zoomIn && zoomOut)
                    return 0;
                if (!zoomIn && zoomOut)
                    return 1;
                if (zoomIn)
                    return -1;
                return 0;
            }
        }

        /// <summary>
        /// Determine rotation direction depending on button pressed
        /// </summary>
        private static int RotationDirection
        {
            get
            {
                var rotateRight = Input.GetKey(RotateRightKey);
                var rotateLeft = Input.GetKey(RotateLeftKey);
                if (rotateLeft && rotateRight)
                    return 0;
                if (rotateLeft)
                    return -1;
                if (rotateRight)
                    return 1;
                return 0;
            }
        }

        /// <summary>
        /// Initialising
        /// </summary>
        private void Start()
        {
            _mapCreatorManager = FindObjectOfType<MapCreatorManager>();
            _transform = transform;
            _cameraState = CameraState.Angled;
            ChangeCameraMode();
        }

        /// <summary>
        /// Update camera movement and rotation 
        /// </summary>
        private void Update()
        {
            if(!Enabled) return;

            //Otherwise Move
            Move();

            //Change camera mode
            if (Input.GetKeyDown(ChangeCameraKey))
                ChangeCameraMode();

            //Ensure that the camera limits corrwspond to the current map size
            _limitX = _mapCreatorManager.ReturnMapSize()/2;
            _limitY = _mapCreatorManager.ReturnMapSize()/2; 

            //Limit position so user doesnt accicdentally get lost
            LimitPosition();
            //Calculate Height
            HeightCalculation();
            //Calculate Rotation
            Rotation();
        }

        #region CAMERA MODE

        /// <summary>
        /// Determines the current Camera Mode (90 & 45 angle) and changes it to the other
        /// </summary>
        private void ChangeCameraMode()
        {
            switch (_cameraState)
            {
                case CameraState.Topdown:
                    {
                        _cameraState = CameraState.Angled;
                        SetXRotation(45);
                        break;
                    }
                case CameraState.Angled:
                    {
                        _cameraState = CameraState.Topdown;
                        SetXRotation(90f);
                        break;
                    }
                default:
                    throw new ArgumentOutOfRangeException();
            }
           
        }


        /// <summary>
        /// Changes the camera's rotation to a particular angle
        /// </summary>
        /// <param name="angle"></param>Required Angle for camera to change into
        private void SetXRotation(float angle)
        {
            _transform.localEulerAngles = new Vector3(angle, _transform.localEulerAngles.y, _transform.localEulerAngles.z);
        }

     
        //Set the max and min height of the camera
        private void SetHeight(int max, int min)
        {
            _maxHeight = max;
            _minHeight = min;
        }

        #endregion

        #region ROTATION

        /// <summary>
        /// Rotate camera
        /// </summary>
        private void Rotation()
        {
            switch (_cameraState)
            {
                case CameraState.Topdown:
                    {
                        transform.Rotate(Vector3.up, RotationDirection * Time.deltaTime * RotationSpeed, Space.World);
                        break;
                    }
                case CameraState.Angled:
                    transform.Rotate(Vector3.up, RotationDirection * Time.deltaTime * RotationSpeed, Space.World);
                    if (Input.GetKey(MouseRotationKey))
                        _transform.Rotate(Vector3.up, -ControlInput.MouseAxis.x * Time.deltaTime * MouseRotationSpeed, Space.World);
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }


        #endregion

        #region MOVEMENT

        // Rotation we should blend towards.
        private Quaternion _targetRotation = Quaternion.identity;
        // Call this when you want to turn the object smoothly.
        public void SetBlendedEulerAngles(Vector3 angles)
        {
            _targetRotation = Quaternion.Euler(angles);
        }


        /// <summary>
        /// Move camera with keyboard or with screen edge
        /// </summary>
        private void Move()
        {

            if (_cameraState == CameraState.Angled)
            {
                SetBlendedEulerAngles(new Vector3(45, transform.localEulerAngles.y, 0));
                // Turn towards our target rotation.
                transform.rotation = Quaternion.RotateTowards(transform.rotation, _targetRotation, 50 * Time.deltaTime);
            }

            //Movement with keys
            var desiredMove = new Vector3(ControlInput.KeyboardInput.x, 0, ControlInput.KeyboardInput.y);
            desiredMove *= KeyboardMoveSpeed;
            desiredMove *= Time.deltaTime;
            desiredMove = Quaternion.Euler(new Vector3(0f, transform.eulerAngles.y, 0f)) * desiredMove;
           desiredMove = _transform.InverseTransformDirection(desiredMove);
            _transform.Translate(desiredMove, Space.Self);





            if (!Input.GetKey(PanningKey) || ControlInput.MouseAxis == Vector2.zero) return;
            desiredMove = new Vector3(-ControlInput.MouseAxis.x, 0, -ControlInput.MouseAxis.y);

            desiredMove *= PanningSpeed;
            desiredMove *= Time.deltaTime;
            desiredMove = Quaternion.Euler(new Vector3(0f, transform.eulerAngles.y, 0f)) * desiredMove;
            desiredMove = _transform.InverseTransformDirection(desiredMove);

            _transform.Translate(desiredMove, Space.Self);
        }

        #endregion

        #region CAMERALIMITS

        /// <summary>
        /// Limit camera movement to the limits
        /// </summary>
        private void LimitPosition()
        {            
            _transform.position = new Vector3(Mathf.Clamp(_transform.position.x, -_limitX, _limitX), _transform.position.y, Mathf.Clamp(_transform.position.z, -_limitY, _limitY));
        }

        /// <summary>
        /// Calculate what height the camera should be
        /// </summary>
        private void HeightCalculation()
        {
            //Using the scroll wheel determine what the zoom position is
            _zoomPos += ControlInput.ScrollWheel * Time.deltaTime * ScrollWheelZoomingSensitivity;
            //Using the keyboard determine what the zoom position is
            _zoomPos += ZoomDirection * Time.deltaTime * KeyboardZoomingSensitivity;

            //Clamp it between 0 and 1
            _zoomPos = Mathf.Clamp01(_zoomPos);

            //Constrain it between the min and max height
            var targetHeight = Mathf.LerpUnclamped(_minHeight, _maxHeight, _zoomPos);
          



            _transform.position = Vector3.Lerp(_transform.position,new Vector3(_transform.position.x, targetHeight, _transform.position.z),
                Time.deltaTime * HeightDampening);
        }



        #endregion

    }
}