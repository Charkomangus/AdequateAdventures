using Assets.Scripts.MainManagers;
using UnityEngine;

namespace Assets.Scripts.Managers
{
    public class HintManager : MonoBehaviour
    {


        private TextAsset _hint;
        public TextAsset[] hints;
        private GameManager _gameManager;
        // Use this for initialization
        void Start ()
        {

            _gameManager = GameManager.Instance;
            
        }
	
        // Update is called once per frame
        void Update ()
        {
            if (Input.GetKeyDown(KeyCode.H))
                if (!GameManager.Instance.JournalManager.IsOpen() && !GameManager.Instance.DialogueManager.IsOpen())
                    OpenHint();
        }


        public void OpenHint()
        {
            string filename = "Hints/Act" + _gameManager.CurrentAct + "/Level" + _gameManager.CurrentLevel + "/Puzzle" + _gameManager.Player.ReturnCurrentPuzzle();
            hints = Resources.LoadAll<TextAsset>("Dialogue/" + filename);

            if (hints.Length > 0)
            {
                _gameManager.DialogueManager.OpenDialogue(filename);
            }
            else
            {
                _gameManager.DialogueManager.OpenDialogue("Hints/Default");
            }
        }
    }
}
