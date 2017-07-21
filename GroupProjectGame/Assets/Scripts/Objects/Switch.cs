using System;
using Assets.Scripts.MainManagers;
using Assets.Scripts.Managers;
using Assets.Scripts.Tiles;
using Boo.Lang;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.Objects
{
    public class Switch : MonoBehaviour
    {
        private string _currentScene;
        private SpriteRenderer _spriteRenderer;
        [SerializeField]private Sprite[] _sprites;
        private enum Type
        {
            Red,
            Green,
            Blue
        }
        [SerializeField]private Type _switchType;
        [SerializeField]private int _puzzleNumber;
        [SerializeField] private readonly List<ConveyorBelt> _belts = new List<ConveyorBelt>();

        private PuzzleManager _puzzlemanager;
        // Use this for initialization
        void Start()
        {
            _currentScene = SceneManager.GetActiveScene().name;
            switch (_currentScene)
            {
                case "Level1":
                {
                    _puzzlemanager = GameManager.Instance.PuzzleManager;
                        switch (_switchType)
                    {
                        case Type.Red:
                            Debug.Log("Loaded Red");
                                _sprites = Resources.LoadAll<Sprite>("Switch/Red/");
                            foreach (var belt in _puzzlemanager.ReturnRedConveyorBelts())
                                {
                                    if (belt.ReturnPuzzle() == _puzzleNumber)
                                        _belts.Add(belt);
                                }
                                break;
                        case Type.Green:
                            Debug.Log("Loaded Green");
                                _sprites = Resources.LoadAll<Sprite>("Switch/Green/");
                                foreach (var belt in _puzzlemanager.ReturnGreenConveyorBelts())
                            {
                                if (belt.ReturnPuzzle() == _puzzleNumber)
                                    _belts.Add(belt);
                            }
                                break;
                        case Type.Blue:
                                Debug.Log("Loaded blue");
                            _sprites = Resources.LoadAll<Sprite>("Switch/Blue/");
                                foreach (var belt in _puzzlemanager.ReturnBlueConveyorBelts())
                            {
                                if (belt.ReturnPuzzle() == _puzzleNumber)
                                    _belts.Add(belt);
                            }
                            break;
                        default:
                            throw new ArgumentOutOfRangeException();
                    }
                }
                    _puzzleNumber = GetComponentInParent<Tile>().ReturnPuzzleNumber();
                  
                    _spriteRenderer = GetComponent<SpriteRenderer>();

                    _spriteRenderer.sprite = _sprites[0];
                    break;
                //Level creator
                case "MapCreatorScene":
                {
                    _puzzlemanager = GetComponentInParent<PuzzleManager>();
                        switch (_switchType)
                    {
                        case Type.Red:
                            foreach (var belt in _puzzlemanager.ReturnRedConveyorBelts())
                                if (belt.ReturnPuzzle() == _puzzleNumber)
                                    _belts.Add(belt);
                                break;
                        case Type.Green:
                            foreach (var belt in _puzzlemanager.ReturnGreenConveyorBelts())
                                if (belt.ReturnPuzzle() == _puzzleNumber)
                                    _belts.Add(belt);
                                break;
                        case Type.Blue:
                            foreach (var belt in _puzzlemanager.ReturnBlueConveyorBelts())
                                if (belt.ReturnPuzzle() == _puzzleNumber)
                                    _belts.Add(belt);
                                break;
                        default:
                            throw new ArgumentOutOfRangeException();
                    }
                    break;
                }
            }
        }


      
        public void FlipSwitch()
        {
            _spriteRenderer.sprite = _spriteRenderer.sprite == _sprites[0] ? _sprites[1] : _sprites[0];
            foreach (var belt in _belts)
                {
                    belt.SwapDirection();
                }
        }

        //Reset switch to it's original position
        public void ResetObject()
        {
            _spriteRenderer.sprite = _sprites[0];
        }


        public void SetPuzzle(int puzzle)
        {
            _puzzleNumber = puzzle;
        }

        public int ReturnPuzzle()
        {
            return _puzzleNumber;
        }
    }
}
