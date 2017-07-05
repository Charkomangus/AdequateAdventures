using System;
using System.Collections.Generic;
using Assets.Scripts.Managers;
using Assets.Scripts.MapCreator;
using Assets.Scripts.Tiles;
using Assets.Scripts.Ui;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Assets.Scripts.MainManagers
{
    public class GameManager : MonoBehaviour {

        //Creating an Instance so scripts can access it's variables.
        public static GameManager Instance;

       //Managers
        public AudioManager AudioManager;
        public UiManager UiManager;
        public PuzzleManager PuzzleManager;
        private StateManager _stateManager;
        private MapGenerator _mapGenerator;
        private EnviromentManager _enviromentManager;
        public Transform MapTransform;
        private int _mapSize;
        private List<List<Tile>> _map;
        public Tile LevelEntry, LevelExit;
        private Vector2  _checkpoint;
        public int CurrentAct;
        public int CurrentLevel;
  
        public string CurrentScene;
        public Player.Player Player;

     

        // Use this for initialization
        private void Awake()
        {
            if(Instance != null)
                Destroy(gameObject);
            Application.targetFrameRate = 30;
            DontDestroyOnLoad(this);
            Instance = this;
            _stateManager = StateManager.Instance;
            _stateManager.OnStateChange += HandleOnStateChange;
            CurrentScene = SceneManager.GetActiveScene().name;
          AudioManager = GetComponentInChildren<AudioManager>();
            _mapGenerator = GetComponent<MapGenerator>();
            _enviromentManager = FindObjectOfType<EnviromentManager>();


        }

        // Use this for initialization
        void Start ()
        {
            if (CurrentScene == "Level1")
            {
                StartLevel();
            }
        }

     

        void OnLevelWasLoaded()
        {
            Debug.Log("Level" + CurrentAct + "_" + CurrentLevel + " was loaded.");
            CurrentScene = SceneManager.GetActiveScene().name;
            
            switch (SceneManager.GetActiveScene().name)
            {
                case "Level1":
                    StartLevel();                    
                    break;
                case "Menu":
                    UnityEngine.Cursor.visible = true;
                    break;
            }
            
        }

        public void StartLevel()
        {
            UiManager = FindObjectOfType<UiManager>();
            PuzzleManager = FindObjectOfType<PuzzleManager>();
            InitializeMap();
            PuzzleManager.Initialize();
            Player = FindObjectOfType<Player.Player>();
            Player.InitializePlayer();
            UiManager.SetFade(true);


        }

        //public Tile ReturnPlayerTile()
        //{
        //    return _mapGenerator.ReturnSpecificTile((int) _checkpoint.x, (int) _checkpoint.y);
        //}

        //Loads the corresponding map to the current act and level and initializes variables concerning it
        private void InitializeMap()
        {
            MapTransform = GameObject.FindGameObjectWithTag("Map").transform;
            _mapGenerator.LoadMapFromXml("LevelMaps/LevelMap" + CurrentAct + "_" + CurrentLevel);
            if(CurrentAct == 4)
                _mapGenerator.LoadMapFromXml("LevelMaps/test");
            else
                _enviromentManager.LoadEnviromentArt("LevelMap" + CurrentAct + "_" + CurrentLevel);
           
            _map = _mapGenerator.ReturnMap();
            _mapSize = _mapGenerator.ReturnMapSize();
            LevelEntry = _mapGenerator.ReturnEntryTile();
        }
        
       

        //Starts the game with no other consideration of bools and things
        public void SimpleStartLevel()
        {
            //Start game scene
            _stateManager.SetGameState(GameState.Game);
        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void RestartLevel()
        {
            _checkpoint = Player.DetermingStartingTile()._gridPosition;
            SimpleStartLevel();     
           
        }


        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel1(int level)
        {
            CurrentAct = 1;
            CurrentLevel = level;
            SimpleStartLevel();

        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel2(int level)
        {
            CurrentAct = 2;
            CurrentLevel = level;
            SimpleStartLevel();

        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel3(int level)
        {
            CurrentAct = 3;
            CurrentLevel = level;
            SimpleStartLevel();
        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void SetLevel0()
        {
            CurrentAct = 4;
            SimpleStartLevel();
        }
        //Go to the next level
        public void NextLevel()
        {
            if (CurrentAct == 3 && CurrentLevel == 3)
                Debug.Log("ENDGAME");
            else if (CurrentLevel == 3)
                CurrentAct++;
            else
                CurrentLevel++;
            SimpleStartLevel();
        }


        //DEBUG
        public void NextLevelDebug()
        {
            switch (CurrentLevel)
            {
                case 1:
                    CurrentLevel = 2;
                    break;
                case 2:
                    CurrentLevel = 3;
                    break;
                case 3:
                    CurrentLevel = 1;
                    CurrentAct++;
                    break;
            }
            SimpleStartLevel();
        }

        public void HandleOnStateChange()
        {
            Invoke("StartLevel", 1f);
        }


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


       
        #endregion

    }
}
