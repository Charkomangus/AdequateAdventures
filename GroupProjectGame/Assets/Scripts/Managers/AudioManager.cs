using Assets.Scripts.MainManagers;
using Assets.Scripts.Tiles;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Assets
{
    public class AudioManager : MonoBehaviour
    {
        //The main audio source
        public AudioSource MusicAudioSource;

        public AudioSource SoundAudioSource;


        //Music
        public AudioClip ConfrontationAudioClip;

        public AudioClip LevelOneClip;
        public AudioClip LevelTwoClip;
        public AudioClip LevelThreeClip;
        public AudioClip OpeningMenuClip;

        //Sound effects
        public AudioClip UiClick;

        public AudioClip Switch;
        public AudioClip CratePush;
        public AudioClip CrateObstacleCollision;
        public AudioClip AmbientMachinery;
        public AudioClip AmbientFire;
        public Button[] AllButtons;

        // Use this for initialization
        private void Start()
        {
            if (SceneManager.GetActiveScene().name == "menu")
            {
                PlayMusic(OpeningMenuClip);
            }
            PlayMusic(LevelTwoClip);

        }

        // Update is called once per frame
        private void Update()
        {
            
        }


        void OnLevelWasLoaded()
        {

            AllButtons = GameObject.FindObjectsOfType<Button>();
            foreach (var button in AllButtons)
            {
                button.onClick.AddListener(delegate { PlayAudio(UiClick, false); });
            }
            switch (SceneManager.GetActiveScene().name)
            {
                case "Level1":
                    switch (GameManager.Instance.CurrentLevel)
                    {
                        case 1:
                            PlayMusic(LevelOneClip);
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            PlayMusic(LevelTwoClip);
                            break;
                        case 5:
                            break;
                        case 6:
                            break;
                        case 7:
                            PlayMusic(LevelThreeClip);
                            break;
                        case 8:
                            break;
                        case 9:
                            break;
                        case 10:
                            PlayMusic(ConfrontationAudioClip);
                            break;
                    }
                    break;
                case "menu":
                    PlayMusic(OpeningMenuClip);

                    break;
                case "Transistion":
                    break;

                case "Outro":
                    Cursor.visible = false;
                    PlayMusic(OpeningMenuClip);
                    break;
                case "MapCreatorScene":
                    break;
                case "Intro":
                    PlayMusic(OpeningMenuClip);
                    break;
            }
        }

        /// <summary>
        /// Determine which music track to play
        /// </summary>
        public void PlayMusic(AudioClip audioClip)
        {
            if (MusicAudioSource.isPlaying)
            {
                MusicAudioSource.Stop();

            }
            MusicAudioSource.loop = true;
            MusicAudioSource.clip = audioClip;
            MusicAudioSource.Play();
        }

        /// <summary>
        /// Determine which music track to play
        /// </summary>
        public void PlayAudio(AudioClip audioClip, bool loop)
        {
            if (SoundAudioSource.isPlaying)
            {
              return;

            }
            SoundAudioSource.loop = loop;
            SoundAudioSource.clip = audioClip;
            SoundAudioSource.Play();
        }
    }
}
