using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using UnityEngine;

public class GameCamera : MonoBehaviour
{
    private Transform player;
	// Use this for initialization
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").transform;

    }

    // Update is called once per frame
	void Update ()
	{
	    if (GameManager.Instance.CurrentLevel == 10)
            transform.position = Vector3.Slerp(new Vector3(player.position.x, 10, player.position.z + 3), transform.position,
	       Time.deltaTime);
        else
	        transform.position = Vector3.Slerp(new Vector3(player.position.x, 10, player.position.z), transform.position,
	            Time.deltaTime);

    }
}
