using UnityEngine;

namespace Assets.Scripts.Utility
{
    /// <summary>
    /// Setting up all control input
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
      
        public static Vector2 MouseInput
        {
            get { return Input.mousePosition; }
        }

        public static float ScrollWheel
        {
            get { return Input.GetAxis(ZoomingAxis); }
        }

        public static Vector2 MouseAxis
        {
            get { return new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y")); }
        }

        


    }
}
