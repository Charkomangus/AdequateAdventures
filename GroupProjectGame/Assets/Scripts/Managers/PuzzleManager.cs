using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Tiles;
using UnityEngine;

public class PuzzleManager : MonoBehaviour {

    [SerializeField]private ConveyorBelt[] _conveyorBelts;
    [SerializeField] private List<ConveyorBelt> _redConveyorBelts, _greenConveyorBelts, _blueConveyorBelts;

    // Use this for initialization
    void Start () {
       
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void Initialize()
    {
        _conveyorBelts = FindObjectsOfType<ConveyorBelt>();

        foreach (var belt in _conveyorBelts)
        {
            switch (belt.ReturnType())
            {
                case TileType.RedConveyorBelt:
                    _redConveyorBelts.Add(belt);
                    break;
                case TileType.GreenConveyorBelt:
                    _greenConveyorBelts.Add(belt);
                    break;
                case TileType.BlueConveyorBelt:
                    _blueConveyorBelts.Add(belt);
                    break;
            }
        }
    }

    public List<ConveyorBelt> ReturnRedConveyorBelts()
    {
        return _redConveyorBelts;
    }

    public List<ConveyorBelt> ReturnGreenConveyorBelts()
    {
        return _greenConveyorBelts;
    }

    public List<ConveyorBelt> ReturnBlueConveyorBelts()
    {
        return _blueConveyorBelts;
    }
}
