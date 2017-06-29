using System;
using Assets.Scripts.Utility;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.Cameras
{
    public class MapCreatorCamera : MonoBehaviour
    {
        private enum CameraState
        {
            Topdown,
            Angled
        }

        public bool Enabled = true;


        private Transform _transform; //camera tranform
        private CameraState _cameraState = CameraState.Angled;
        private float _zoomPos; //value in range (0, 1) used as t in Matf.Lerp



        //Control Variables
        private const float KeyboardMoveSpeed = 5f;
        private const float RotationSpeed = 50f;
        private const float PanningSpeed = 5f;
        private const float MouseRotationSpeed = 50f;
        private float _maxHeight = 5;
        private float _minHeight = 100;
        private const float HeightDampening = 5f;
        private const float KeyboardZoomingSensitivity = 3f;
        private const float ScrollWheelZoomingSensitivity = 60f;
        private float _limitX = 20; //x limit of map
        private float _limitY = 20; //z limit of map

    

        /// <summary>
        /// Assigned default controls
        /// </summary>
        private const KeyCode ZoomInKey = KeyCode.Minus;
        private const KeyCode ZoomOutKey = KeyCode.Equals;
        private const KeyCode PanningKey = KeyCode.Mouse2;
        private const KeyCode RotateRightKey = KeyCode.O;
        private const KeyCode RotateLeftKey = KeyCode.P;
        private const KeyCode MouseRotationKey = KeyCode.Mouse1;
        private const KeyCode ChangeCameraKey = KeyCode.Space;


        /// <summary>
        /// Handle zooming direction depending on button pressed
        /// </summary>
        private int ZoomDirection
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
            _transform = transform;
            switch (SceneManager.GetActiveScene().name)
            {
                case "Level1":
                    _cameraState = CameraState.Angled;
                    ChangeCameraMode();
                    break;
                case "MapCreatorScene":

                    _cameraState = CameraState.Angled;
                    ChangeCameraMode();
                    break;
            }
        }

        /// <summary>
        /// Update camera movement and rotation 
        /// </summary>
        private void Update()
        {
            if(!Enabled) return;
            Move();


            //Other Various Input
            //if (Input.anyKeyDown && BattleManager.Instance.ReturnCurrentPlayer().IsUser())
            //    ResetTarget();
            if (Input.GetKeyDown(ChangeCameraKey))
                ChangeCameraMode();



            _limitX = 30f;
            _limitY = 30f;
            LimitPosition();


            HeightCalculation();
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
            SetCameraSettings();
        }


        /// <summary>
        /// Changes the camera's rotation to a particular angle
        /// </summary>
        /// <param name="angle"></param>Required Angle for camera to change into
        private void SetXRotation(float angle)
        {
            _transform.localEulerAngles = new Vector3(angle, _transform.localEulerAngles.y, _transform.localEulerAngles.z);
        }

        /// <summary>
        /// Change default camera settings depending on what mode it is on
        /// </summary>
        private void SetCameraSettings()
        {
            switch (_cameraState)
            {
                case CameraState.Topdown:
                    {
                        SetHeight(2, 40);
                        break;
                    }
                case CameraState.Angled:
                    SetHeight(2, 50);
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        private void SetHeight(int max, int min)
        {
            _maxHeight = max;
            _minHeight = min;
        }

        #endregion

        #region ROTATION

        /// <summary>
        /// rotate camera
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
            desiredMove = new Vector3();




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
        /// limit camera position
        /// </summary>
        private void LimitPosition()
        {
            if (_transform.position.y < 3)
                _transform.position = new Vector3(_transform.position.x, 3, _transform.position.z);
            _transform.position = new Vector3(Mathf.Clamp(_transform.position.x, -_limitX, _limitX), Mathf.Clamp(_transform.position.y, -200, 200), Mathf.Clamp(_transform.position.z, -_limitY, _limitY));
        }

        /// <summary>
        /// calcualte height
        /// </summary>
        private void HeightCalculation()
        {

            _zoomPos += ControlInput.ScrollWheel * Time.deltaTime * ScrollWheelZoomingSensitivity;
            _zoomPos += ZoomDirection * Time.deltaTime * KeyboardZoomingSensitivity;

            _zoomPos = Mathf.Clamp01(_zoomPos);

            var targetHeight = Mathf.Lerp(_minHeight, _maxHeight, _zoomPos);
          



            _transform.position = Vector3.Lerp(_transform.position,new Vector3(_transform.position.x, targetHeight, _transform.position.z),
                Time.deltaTime * HeightDampening);
        }



        #endregion

    }
}