/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using UnityEngine;
namespace Assets.Scripts.Utility
{
    /// <summary>
    /// Setting up all control input for easier use - this is mostly used by the map creator manager camera
    /// </summary>
    internal static class ControlInput
    {
        private const string ZoomingAxis = "Mouse ScrollWheel";
        private const string HorizontalAxis = "Horizontal";
        private const string VerticalAxis = "Vertical";

        /// <summary>
        /// Setting up all keyboard input
        /// </summary>
        public static Vector2 KeyboardInput
        {
            get { return new Vector2(Input.GetAxis(HorizontalAxis), Input.GetAxis(VerticalAxis)); }
        }
        /// <summary>
        /// Setting up all mouse input
        /// </summary>
        public static Vector2 MouseInput
        {
            get { return Input.mousePosition; }
        }

        /// <summary>
        /// Setting up the scrollwheel
        /// </summary>
        public static float ScrollWheel
        {
            get { return Input.GetAxis(ZoomingAxis); }
        }
        /// <summary>
        /// Setting up all mouse axis input
        /// </summary>
        public static Vector2 MouseAxis
        {
            get { return new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y")); }
        }

        


    }
}
