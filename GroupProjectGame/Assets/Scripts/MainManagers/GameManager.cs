/*******************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*******************************************************/

using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Actors;
using Assets.Scripts.Cameras;
using Assets.Scripts.Dialogue;
using Assets.Scripts.Managers;
using Assets.Scripts.MapCreator;
using Assets.Scripts.Tiles;
using Assets.Scripts.Ui;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.MainManagers
{
    /// <summary>
    /// God class. This class will hover through all the game acting as central intelligense (starting levels, etc) 
    /// and as a reference of managers that other classes will now be able to access bia GameManager.Instance.ChosenManager. 
    /// This class uses the singleton pattern to ensure there is only one of it and it survives any scene transitions.
    /// </summary>
    public class GameManager : MonoBehaviour {

        //Creating an Instance so scripts can access it's variables.
        public static GameManager Instance;

       //Managers
        public AudioManager AudioManager;
        public UiManager UiManager;
        public PuzzleManager PuzzleManager;
        public MapGenerator MapGenerator;
        public EnviromentManager EnviromentManager;
        public GuardManager GuardManager;
        public DialogueManager DialogueManager;
        public JournalManager JournalManager;
        public CinematicsManager CinematicsManager;
        public int EvidenceFound;

        public Transform MapTransform;
        private int _mapSize;
        private List<List<Tile>> _map;
        public Tile LevelEntry, LevelExit;
       
        public int CurrentAct;
        public int CurrentLevel;
        [SerializeField]private int _dialogueNumber;
        public string CurrentScene;
        public Player.Player Player;


        public GameObject debugPanel;
   

        // Use this for initialization
        private void Awake()
        {
            if (Instance != null)
            {
               
                Destroy(gameObject);
                return;
            }             
            Instance = this;
            Application.targetFrameRate = 30;
            DontDestroyOnLoad(this);
         
            CurrentScene = SceneManager.GetActiveScene().name;
            AudioManager = GetComponentInChildren<AudioManager>();
            MapGenerator = GetComponent<MapGenerator>();
            EnviromentManager = FindObjectOfType<EnviromentManager>();
            GuardManager = FindObjectOfType<GuardManager>();
            DialogueManager = FindObjectOfType<DialogueManager>();
            JournalManager = FindObjectOfType<JournalManager>();
            CinematicsManager = FindObjectOfType<CinematicsManager>();
        }

        // Use this for initialization
        private void Start ()
        {
            OnLevelWasLoaded();
        }



        private void OnLevelWasLoaded()
        {
            if (Instance != this)return;

            CurrentScene = SceneManager.GetActiveScene().name;
            switch (CurrentScene)
            {
                case "Level1":
                    StartLevel();
                    break;
                case "LevelLoader":
                    EnviromentManager = null;
                    GuardManager = null;
                    DialogueManager = null;
                    JournalManager = null;
                    UiManager = null;
                    PuzzleManager = null;
                    Player = null;
                    LevelEntry = null;
                    UnityEngine.Cursor.visible = false;
                    break;
                case "Menu":
                    UnityEngine.Cursor.visible = true;
                    break;
            }
        }


        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.B))
            {
                debugPanel.SetActive(!debugPanel.activeSelf);

                if (!UnityEngine.Cursor.visible)
                    UnityEngine.Cursor.visible = true;
            }

        }

        //Start level
        private void StartLevel()
        {
            EnviromentManager = FindObjectOfType<EnviromentManager>();
            GuardManager = FindObjectOfType<GuardManager>();
            DialogueManager = FindObjectOfType<DialogueManager>();
            JournalManager = FindObjectOfType<JournalManager>();
            CinematicsManager = FindObjectOfType<CinematicsManager>();
            UiManager = FindObjectOfType<UiManager>();
            PuzzleManager = FindObjectOfType<PuzzleManager>();
            Player = FindObjectOfType<Player.Player>();

            StartCoroutine(LoadLevel());
            _dialogueNumber = 0;
        
            if (CurrentAct == 1)
            {
                if(CurrentLevel == 1 || CurrentLevel == 4)
                    TriggerDialogue();
            }
        }

        //Loads the corresponding map to the current act and level and initializes variables concerning it
        private void InitializeMap()
        {
           
            MapTransform = GameObject.FindGameObjectWithTag("Map").transform;

            MapGenerator = GetComponent<MapGenerator>();
            if (CurrentAct == 4)
            {
                MapGenerator.LoadMapFromXml("LevelMaps/test");
                EnviromentManager.LoadEnviromentArt("");
            }
            else
            {
                MapGenerator.LoadMapFromXml("LevelMaps/LevelMap" + CurrentAct + "_" + CurrentLevel);
                EnviromentManager.LoadEnviromentArt("LevelMap" + CurrentAct + "_" + CurrentLevel);
            }

            _map = MapGenerator.ReturnMap();
            _mapSize = MapGenerator.ReturnMapSize();           
                LevelEntry = MapGenerator.FindLevelEntry();
            
          
        }
        //Guard waits in place
        public IEnumerator LoadLevel()
        {
            yield return new WaitForSeconds(0);
            InitializeMap();
            PuzzleManager.Initialize();
            for (int i = 0; i < EvidenceFound; i++)
            {
                JournalManager.EvidenceFound(i, true);
            }
           UiManager.Initialize();
            Player.InitializePlayer();
            GuardManager.SpawnGuards();
           
        }

        //Guard waits in place
        public IEnumerator EndOfLevel()
        {
            var gameCamera = Camera.main.GetComponent<GameCamera>();
            Player.SetInitialized(false);
            gameCamera.SetCameraHeight(2);
            yield return new WaitForSeconds(1);
            UiManager.SetFade(false);
            yield return new WaitForSeconds(2);
            gameCamera.SetCameraHeight(7.5f);
            gameCamera.transform.position = new Vector3(gameCamera.transform.position.x, 7.5f, gameCamera.transform.position.z);
            NextLevel();
        }

        /// <summary>
        /// Restarts the game to start from the last puzzle encountered
        /// </summary>
        public void RestartFromCheckPoint()
        {
            //Reset the current Puzzle, leaving the others untouched
            PuzzleManager.Initialize();
            PuzzleManager.ResetPuzzle();
            //Restart the player
            Player.Restart();
            //Reset all guards
            GuardManager.ResetGuards();
            //Do the introdocturary fade in from black
            UiManager.SetFade(true);
        }

        /// <summary>
        /// Go to the next Level
        /// </summary>
        public void NextLevel()
        {
            Debug.Log(CurrentLevel);
                if (CurrentAct == 3 && CurrentLevel == 3)
                SceneManager.LoadScene("Ending");
            else if (CurrentLevel == 4)
                SceneManager.LoadScene("Ending");
                //CurrentAct++; When more acts exist this will be uncommented
            else
                CurrentLevel++;
            SceneManager.LoadScene("LevelLoader");
        }

        #region Dialogue
      
        //Open the apropriate dialogue
        public void TriggerDialogue(Tile tile)
        {
            _dialogueNumber++;
            DialogueManager.DialogueTrigger(tile, "Level" + CurrentAct + "_" + CurrentLevel +"_" + _dialogueNumber);
          
        }

        //Open the next dialogue
        public void TriggerDialogue()
        {
            _dialogueNumber++;
            DialogueManager.OpenDialogue("Level" + CurrentAct + "_" + CurrentLevel + "_" + _dialogueNumber);
           
        }

        //Open the dialogue using the filename given
        public void TriggerDialogue(string filename)
        {
            _dialogueNumber++;
            DialogueManager.OpenDialogue(filename);
        }

        #endregion

        #region Sets & Returns
        /// <summary>
        /// Return the currently generated Map
        /// </summary>
        /// <returns></returns>
        public List<List<Tile>> ReturnMap()
        {
            return _map;
        }

        /// <summary>
        /// Return the currently generated Maps size
        /// </summary>
        /// <returns></returns>
        public int ReturnMapSize()
        {
            return _mapSize;
        }

        /// <summary>
        /// Return the currently generated Maps size
        /// </summary>
        /// <returns></returns>
        public Tile ReturnLevelEntry()
        {
            return LevelEntry;
        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel1(int level)
        {
            CurrentAct = 1;
            CurrentLevel = level;
            SceneManager.LoadScene("LevelLoader");

        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel2(int level)
        {
            CurrentAct = 2;
            CurrentLevel = level;
            SceneManager.LoadScene("LevelLoader");
        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel3(int level)
        {
            CurrentAct = 3;
            CurrentLevel = level;
            SceneManager.LoadScene("LevelLoader");
        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel0()
        {
            CurrentAct = 4;
            SceneManager.LoadScene("LevelLoader");
        }



        #endregion

    }
}
