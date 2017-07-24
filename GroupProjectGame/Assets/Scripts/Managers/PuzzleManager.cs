using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Objects;
using Assets.Scripts.Tiles;
using UnityEngine;

namespace Assets.Scripts.Managers
{
    public class PuzzleManager : MonoBehaviour {

        private ConveyorBelt[] _conveyorBelts;
        [SerializeField]
        private List<ConveyorBelt> _redConveyorBelts = new List<ConveyorBelt>();
        [SerializeField]
        private List<ConveyorBelt> _greenConveyorBelts = new List<ConveyorBelt>();
        [SerializeField]
        private List<ConveyorBelt> _blueConveyorBelts = new List<ConveyorBelt>();

        [SerializeField]
        private Box[]_boxes;

        [SerializeField]
        private SlidingBox[] _slidingBoxes;

        [SerializeField]
        private Switch[] _switches;

        [SerializeField]
        private ConveyorBelt[] _belts;

     
        public void Initialize()
        {
            //Fill in the lists of objects again as they might have changed (boxes destroyed, etc)
            _boxes = FindObjectsOfType<Box>();
            _slidingBoxes = FindObjectsOfType<SlidingBox>();
            _switches = FindObjectsOfType<Switch>();
            _belts = FindObjectsOfType<ConveyorBelt>();
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

        //Reset objects in the current puzzle
        public void ResetPuzzle(int puzzle)
        {
           
            foreach (var box in _boxes)
            {
                if (box.ReturnPuzzle() == puzzle)
                    box.ResetObject();
            }

            foreach (var slidingBox in _slidingBoxes)
            {
                if (slidingBox.ReturnPuzzle() == puzzle)
                    slidingBox.ResetObject();
            }
            foreach (var Switch in _switches)
            {
                if (Switch.ReturnPuzzle() == puzzle)
                    Switch.ResetObject();
            }

            foreach (var belt in _belts)
            {
                if (belt.ReturnPuzzle() == puzzle)
                    belt.ResetObject();
            }
        }
        //Reset objects in the current puzzle
        public void ResetPuzzle()
        {
            var puzzle = GameManager.Instance.Player.ReturnCurrentPuzzle();

            foreach (var box in _boxes)
            {
                if(box.ReturnPuzzle() == puzzle)
                    box.ResetObject();
            }

            foreach (var slidingBox in _slidingBoxes)
            {
                if (slidingBox.ReturnPuzzle() == puzzle)
                    slidingBox.ResetObject();
            }
            foreach (var Switch in _switches)
            {
                if (Switch.ReturnPuzzle() == puzzle)
                    Switch.ResetObject();
            }

            foreach (var belt in _belts)
            {
                if (belt.ReturnPuzzle() == puzzle)
                    belt.ResetObject();
            }
        }


        //Reset everything in the level
        public void RestartLevel()
        {
            _boxes = FindObjectsOfType<Box>();
            _slidingBoxes = FindObjectsOfType<SlidingBox>();
            _switches = FindObjectsOfType<Switch>();
            _belts = FindObjectsOfType<ConveyorBelt>();

            foreach (var box in _boxes)
            {
                box.ResetObject();
            }

            foreach (var slidingBox in _slidingBoxes)
            {
                slidingBox.ResetObject();
            }
            foreach (var Switch in _switches)
            {
                Switch.ResetObject();
            }

            foreach (var belt in _belts)
            {
                belt.ResetObject();
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
