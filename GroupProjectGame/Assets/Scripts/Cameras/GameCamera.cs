using Assets.Scripts.MainManagers;
using UnityEngine;

namespace Assets.Scripts.Cameras
{
    public class GameCamera : MonoBehaviour
    {
        private Transform _player;

        private Vector3 _position, _originalPosition;
        // Use this for initialization
        void Start()
        {
            _player = GameManager.Instance.Player.transform;
            _originalPosition = transform.position;
            _position = _originalPosition;
            
        }

        // Update is called once per frame
        void Update ()
        {	   
            transform.position = Vector3.Lerp(new Vector3(_player.position.x, transform.position.y, _player.position.z), _position,0.5f*Time.deltaTime);

        }

        //Set the preffered height of the camera
        public void SetCameraHeight(float height)
        {
          _position = new Vector3(transform.position.x, height, transform.position.z);
        }
    }
}
