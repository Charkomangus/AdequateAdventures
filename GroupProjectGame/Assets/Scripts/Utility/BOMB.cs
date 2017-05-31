using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class BOMB : MonoBehaviour
{


    public string level;
	// Use this for initialization
	void Start () {
	    SceneManager.LoadScene(level);
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
