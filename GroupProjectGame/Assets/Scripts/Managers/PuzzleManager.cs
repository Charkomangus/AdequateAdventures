/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Objects;
using Assets.Scripts.Tiles;
using UnityEngine;

namespace Assets.Scripts.Managers
{
    /// <summary>
    /// This class is reponsible for all the puzzle objects. These can be boxes, conveyor belts, switches, etc.
    /// </summary>
    public class PuzzleManager : MonoBehaviour {

        private ConveyorBelt[] _conveyorBelts;
        private readonly List<ConveyorBelt> _redConveyorBelts = new List<ConveyorBelt>();
        private readonly List<ConveyorBelt> _greenConveyorBelts = new List<ConveyorBelt>();
        private readonly List<ConveyorBelt> _blueConveyorBelts = new List<ConveyorBelt>();

       
        private Box[]_boxes;
        private SlidingBox[] _slidingBoxes;
        private Switch[] _switches;
        private ConveyorBelt[] _belts;


        /// <summary>
        /// Fill in the lists of objects again as they might have changed (boxes destroyed, etc)
        /// </summary>
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


        /// <summary>
        /// Reset objects in the current puzzle
        /// </summary>
        /// <param name="puzzle"></param>
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

        /// <summary>
        /// Reset objects in the current puzzle
        /// </summary>
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

        /// <summary>
        /// Reset everything in the level
        /// </summary>
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

        /// <summary>
        /// Return convyeor belts that are red
        /// </summary>
        /// <returns></returns>
        public List<ConveyorBelt> ReturnRedConveyorBelts()
        {
            return _redConveyorBelts;
        }
        /// <summary>
        /// Return convyeor belts that are Green
        /// </summary>
        /// <returns></returns>
        public List<ConveyorBelt> ReturnGreenConveyorBelts()
        {
            return _greenConveyorBelts;
        }
        /// <summary>
        /// Return convyeor belts that are blue
        /// </summary>
        /// <returns></returns>
        public List<ConveyorBelt> ReturnBlueConveyorBelts()
        {
            return _blueConveyorBelts;
        }
    }
}
