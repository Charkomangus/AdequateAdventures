/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using Assets.Scripts.MainManagers;
using UnityEngine;

namespace Assets.Scripts.Managers
{
    /// <summary>
    /// This class triggers the hints per puzzle
    /// </summary>
    public class HintManager : MonoBehaviour
    {
        public TextAsset[] hints;
        private GameManager _gameManager;

        /// <summary>
        /// Use this for initialization
        /// </summary>
        void Start ()
        {
            _gameManager = GameManager.Instance;
        }

        /// <summary>
        /// Update is called once per frame
        /// </summary>
        void Update ()
        {
            if (Input.GetKeyDown(KeyCode.H))
                if (!GameManager.Instance.JournalManager.IsOpen() && !GameManager.Instance.DialogueManager.IsOpen())
                    OpenHint();
        }

        /// <summary>
        /// Loads apropriate hint depending on level and current puzzle
        /// </summary>
        public void OpenHint()
        {
            string filename = "Hints/Act" + _gameManager.CurrentAct + "/Level" + _gameManager.CurrentLevel + "/Puzzle" + _gameManager.Player.ReturnCurrentPuzzle();
            hints = Resources.LoadAll<TextAsset>("Dialogue/" + filename);
            _gameManager.DialogueManager.OpenDialogue(hints.Length > 0 ? filename : "Hints/Default");
        }
    }
}
