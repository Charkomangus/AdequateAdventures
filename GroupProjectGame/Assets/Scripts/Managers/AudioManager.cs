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
        public AudioClip UI_CLICK;

        public AudioClip SWITCH;
        public AudioClip CRATE_PUSH;
        public AudioClip CRATE_OBSTACLE_COLLISION;
        public AudioClip AMBIENT_MACHINERY;
        public AudioClip AMBIENT_FIRE;
        public Button[] allButtons;

        // Use this for initialization
        private void Start()
        {
            MusicAudioSource = GetComponent<AudioSource>();

            if (SceneManager.GetActiveScene().name == "menu")
            {
                PlayMusic(OpeningMenuClip);
            }
       
        }

        // Update is called once per frame
        private void Update()
        {
            allButtons = GameObject.FindObjectsOfType<Button>();
            foreach (var button in allButtons)
            {
                button.onClick.AddListener(delegate { PlayAudio(UI_CLICK, false); });
            }
        }


        void OnLevelWasLoaded()
        {


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
            Debug.Log("Playing " + audioClip.name);
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
            Debug.Log("Playing " + audioClip.name);
            SoundAudioSource.Play();
        }
    }
}
