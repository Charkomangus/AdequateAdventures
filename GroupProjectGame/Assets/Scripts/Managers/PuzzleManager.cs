using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Objects;
using Assets.Scripts.Tiles;
using UnityEngine;

namespace Assets.Scripts.Managers
{
    public class PuzzleManager : MonoBehaviour {

        [SerializeField]private ConveyorBelt[] _conveyorBelts;
        [SerializeField] private List<ConveyorBelt> _redConveyorBelts, _greenConveyorBelts, _blueConveyorBelts;

 

        [SerializeField]
        private Box[]Boxes;

        [SerializeField]
        private SlidingBox[] SlidingBoxes;

        [SerializeField]
        private Switch[] Switches;

        [SerializeField]
        private ConveyorBelt[] Belts;


        // Use this for initialization
        private void Start ()
        {
        }

        //Reset objects in the current puzzle
        public void ResetPuzzle()
        {
            Boxes = FindObjectsOfType<Box>();
            SlidingBoxes = FindObjectsOfType<SlidingBox>();
            Switches = FindObjectsOfType<Switch>();
            Belts = FindObjectsOfType<ConveyorBelt>();
            var puzzle = GameManager.Instance.Player.ReturnCurrentPuzzle();

            foreach (var box in Boxes)
            {
                if(box.ReturnPuzzle() == puzzle)
                    box.ResetObject();
            }

            foreach (var slidingBox in SlidingBoxes)
            {
                if (slidingBox.ReturnPuzzle() == puzzle)
                    slidingBox.ResetObject();
            }
            foreach (var Switch in Switches)
            {
                if (Switch.ReturnPuzzle() == puzzle)
                    Switch.ResetObject();
            }

            foreach (var belt in Belts)
            {
                if (belt.ReturnPuzzle() == puzzle)
                    belt.ResetObject();
            }
        }


        //Reset everything in the level
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
            foreach (var Switch in Switches)
            {
                Switch.ResetObject();
            }

            foreach (var belt in Belts)
            {
                belt.ResetObject();
            }
        }


    

        // Update is called once per frame
        private void Update () {
		
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
}
