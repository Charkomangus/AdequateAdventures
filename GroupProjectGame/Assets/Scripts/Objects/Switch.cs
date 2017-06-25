using System;
using Assets.Scripts.MainManagers;
using Assets.Scripts.MapCreator;
using Assets.Scripts.Tiles;
using Boo.Lang;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.Objects
{
    public class Switch : MonoBehaviour
    {
        private string _currentScene;

        private enum Type
        {
            Red,
            Green,
            Blue
        }


        [SerializeField] private Type _switchType;

        [SerializeField] private ConveyorBelt[] belts;

        // Use this for initialization
        void Start()
        {
            _currentScene = SceneManager.GetActiveScene().name;
            switch (_currentScene)
            {
                case "Level1":
                {
                    switch (_switchType)
                    {
                        case Type.Red:
                            belts = GameManager.Instance.PuzzleManager.ReturnRedConveyorBelts().ToArray();
                            break;
                        case Type.Green:
                            belts = GameManager.Instance.PuzzleManager.ReturnGreenConveyorBelts().ToArray();
                            break;
                        case Type.Blue:
                            belts = GameManager.Instance.PuzzleManager.ReturnBlueConveyorBelts().ToArray();
                            break;
                        default:
                            throw new ArgumentOutOfRangeException();
                    }
                }
                    break;
                //Level creator
                case "MapCreatorScene":
                {
                    PuzzleManager puzzleManager = GetComponentInParent<PuzzleManager>();
                        switch (_switchType)
                    {
                        case Type.Red:
                            belts = puzzleManager.ReturnRedConveyorBelts().ToArray();
                            break;
                        case Type.Green:
                            belts = puzzleManager.ReturnGreenConveyorBelts().ToArray();
                            break;
                        case Type.Blue:
                            belts = puzzleManager.ReturnBlueConveyorBelts().ToArray();
                            break;
                        default:
                            throw new ArgumentOutOfRangeException();
                    }
                    break;
                }
            }
        }


        // Update is called once per frame
        void Update()
        {

        }

        public void FlipSwitch()
        {
            foreach (var belt in belts)
            {
                belt.SwapDirection();
            }
        }
    }
}
