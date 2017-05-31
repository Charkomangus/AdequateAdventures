using System.Collections.Generic;
using Assets.Scripts.MapCreator;
using Assets.Scripts.Tiles;
using Assets.Scripts.Player;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Assets.Scripts.MainManagers
{
    public class GameManager : MonoBehaviour {

        //Creating an Instance so scripts can access it's variables.
        public static GameManager Instance;

        public UiManager uiManager;
        public AudioManager audioManager;
        private StateManager _stateManager;
        public Transform MapTransform;
        private int mapSize;
        private List<List<Tile>> _map;
        private int _level;
        public Tile _levelEntry, _levelExit;
        public int CurrentLevel = 1;
        public Texture2D cursor;
        public Player.Player player;
        public int Ending;
        public Material brokenDoor;


        public GameObject[] Props;
        [SerializeField] private GameObject _crate;

        // Use this for initialization
        private void Awake()
        {
            Application.targetFrameRate = 30;
            Cursor.SetCursor(cursor, Vector2.zero, CursorMode.Auto);
            GameObject.DontDestroyOnLoad(this);
            player = GameObject.FindObjectOfType<Player.Player>();
             Instance = this;
            _stateManager = StateManager.Instance;
            _stateManager.OnStateChange += HandleOnStateChange;
            audioManager = GetComponent<AudioManager>();


        }

        // Use this for initialization
        void Start ()
        {
          SceneManager.LoadScene("Menu");
        }

        void OnLevelWasLoaded()
        {
           
            Debug.Log(SceneManager.GetActiveScene().name);
            switch (SceneManager.GetActiveScene().name)
            {
                    
                case "Level1":
                    uiManager = GameObject.FindGameObjectWithTag("UiManager").GetComponent<UiManager>();
                    MapTransform = GameObject.FindGameObjectWithTag("Map").transform;
                  Cursor.visible = CurrentLevel == 10;
                    
                    for (int i = 0; i < Props.Length; i++)
                    {
                        if(i == CurrentLevel - 1)
                            Props[i].SetActive(true);
                        else
                            Props[i].SetActive(false);
                    }
                    StartLevel();


                    break;
                case "Transistion":
                    MapTransform = null;
                    Cursor.visible = true;
                    break;
                case "Intro":
                    MapTransform = null;
                    Cursor.visible = false;
                    break;
                case "Menu":
                    Cursor.visible = true;
                    break;
                case "Outro":
                    Cursor.visible = false;

                    break;
            }
            
        }

        public void StartLevel()
        {
            Instance.GetComponent<MapGenerator>().LoadMapFromXml("Level" + CurrentLevel);
            _map = Instance.GetComponent<MapGenerator>().ReturnMap();
            mapSize = Instance.GetComponent<MapGenerator>().ReturnMapSize();
            FindLevelEntry();
            SpawnBoxes();
            uiManager.TriggerFade();
            
        }
    

        void SpawnBoxes()
        {
            var boxes = new List<Tile>();
            boxes = GetComponent<MapGenerator>().ReturnBoxTiles();
            Debug.Log(boxes.Count);
            for (int i = 0; i < boxes.Count; i++)
            {
                Crate crate = Instantiate(_crate, new Vector3(boxes[i].transform.position.x, 1, boxes[i].transform.position.z), Quaternion.Euler(new Vector3())).GetComponent<Crate>();
                crate.transform.SetParent(boxes[i].transform);
                boxes[i].SetItem(crate.gameObject);

            }
        }

        // Update is called once per frame
        void Update () {
            switch (SceneManager.GetActiveScene().name)
            {
                case "Game":
                    break;
                case "Menu":
                    audioManager.PlayAudio(audioManager.CRATE_PUSH, false );
                    break;
                case "MapCreatorScene":
                    break;
            }

            if (Input.GetKeyDown(KeyCode.Y))
            {
               SceneManager.LoadScene("Transistion");
             
            }
        }

        void FindLevelEntry()
        {
            for (var i = 0; i < mapSize; i++)
            {
              
                for (var j = 0; j < mapSize; j++)
                {
                    if (_map[i][j].Entry)
                        _levelEntry = _map[i][j];
                }
            }
        }

        private void OnLevelWasLoaded(int level)
        {
            Debug.Log("Level " + level +" was loaded.");
            _level = level;
            switch (level)
            {
                case 1:

                    break;
                case 2:
                    break;
            }
        }

        

        //Starts the game with no other consideration of bools and things
        public void SimpleStartLevel()
        {
            //Start game scene
            _stateManager.SetGameState(GameState.Game);
            Debug.Log(_stateManager.GameState);

        }

        /// <summary>
        /// Change the Game State to the Game Scene
        /// </summary>
        public void RestartLevel()
        {
            //Start game scene
            _stateManager.SetGameState(GameState.Game);
            Debug.Log(_stateManager.GameState);
        }

        public void HandleOnStateChange()
        {
            Invoke("ChangeScene", 0f);
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
            return mapSize;
        }

        /// <summary>
        /// Return the currently generated Maps size
        /// </summary>
        /// <returns></returns>
        public Tile ReturnLevelEntry()
        {
            return _levelEntry;
        }


       
        #endregion

    }
}
