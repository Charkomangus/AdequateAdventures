using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using UnityEngine;

public class GameCamera : MonoBehaviour
{
    private Transform _player;
	// Use this for initialization
    void Start()
    {
        _player = GameObject.FindGameObjectWithTag("Player").transform;

    }

    // Update is called once per frame
	void Update ()
	{	   
	        transform.position = Vector3.Slerp(new Vector3(_player.position.x, 10, _player.position.z), transform.position,
	            Time.deltaTime);

    }
}
