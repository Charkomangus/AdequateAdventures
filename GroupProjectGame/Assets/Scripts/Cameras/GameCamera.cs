using Assets.Scripts.MainManagers;
using UnityEngine;

namespace Assets.Scripts.Cameras
{
    public class GameCamera : MonoBehaviour
    {
        private Transform _player;
        // Use this for initialization
        void Start()
        {
            _player = GameManager.Instance.Player.transform;

        }

        // Update is called once per frame
        void Update ()
        {	   
            transform.position = Vector3.Slerp(new Vector3(_player.position.x, 7.3f, _player.position.z), transform.position,
                Time.deltaTime);

        }
    }
}
