using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Objects;
using Assets.Scripts.Tiles;
using UnityEngine;

public class PuzzleManager : MonoBehaviour {

    [SerializeField]private ConveyorBelt[] _conveyorBelts;
    [SerializeField] private List<ConveyorBelt> _redConveyorBelts, _greenConveyorBelts, _blueConveyorBelts;

    [SerializeField]private List<Tile> puzzles;

    [SerializeField]
    private Box[]Boxes;

    [SerializeField]
    private SlidingBox[] SlidingBoxes;

    [SerializeField]
    private Switch[] Switches;

    [SerializeField]
    private ConveyorBelt[] Belts;


    // Use this for initialization
    void Start ()
    {
    }

    public void RestartLevel()
    {
        Boxes = FindObjectsOfType<Box>();
        SlidingBoxes = FindObjectsOfType<SlidingBox>();
        Switches = FindObjectsOfType<Switch>();
        Belts = FindObjectsOfType<ConveyorBelt>();
        foreach (var box in Boxes)
        {
            box.ResetObject();
        }

        foreach (var slidingBox in SlidingBoxes)
        {
            slidingBox.ResetObject();
        }
        foreach (var stc in Switches)
        {
            stc.ResetObject();
        }

        foreach (var belt in Belts)
        {
            belt.ResetObject();
        }
    }


    private void CreatePuzzles(Tile tile)
    {
        while (true)
        {
            if (tile != null && tile.ReturnType() != TileType.Wall)
            {
                puzzles.Add(tile);
                tile = tile.North;
               
                continue;
            }

            break;
        }
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
