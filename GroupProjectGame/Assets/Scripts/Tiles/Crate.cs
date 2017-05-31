using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Tiles;
using UnityEngine;

public class Crate : MonoBehaviour
{


    public Tile _originalCrate, _currentCrate;
	// Use this for initialization
	void Start ()
	{
	    _originalCrate = GetComponentInParent<Tile>();

	}
	
	// Update is called once per frame
	void Update () {

		_currentCrate = GetComponentInParent<Tile>();
	    float moveTime = 0.0f;
	    moveTime += Time.deltaTime * 59;
	    transform.position = Vector3.Lerp(transform.position, new Vector3(_currentCrate.transform.position.x, 0.5f, _currentCrate.transform.position.z), 0.1f);
	    GetComponent<MeshRenderer>().sortingOrder = Mathf.RoundToInt(transform.position.z * 100f) * -1;
    }

    public void ReturnToOriginalPosition()
    {
        transform.SetParent(_originalCrate.transform);
        transform.localPosition = Vector3.zero;
        _originalCrate.SetType(TileType.Box);
        _originalCrate.Blocked = true;
        _originalCrate.SetMaterial(PrefabHolder.Instance.TileBoxMaterial);
        _originalCrate.name = "Box Tile";

    }

    void OnCollisionEnter()
    {

    }
}
