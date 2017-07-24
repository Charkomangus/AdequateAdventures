using Assets.Scripts.MainManagers;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Assets.Scripts.Managers
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
          
            AllButtons = FindObjectsOfType<Button>();
            foreach (var button in AllButtons)
            {
                button.onClick.AddListener(delegate { PlayAudio(UiClick, false); });
            }
            PlayMusic(LevelTwoClip);

        }

        // Update is called once per frame
        private void Update()
        {
            
        }


        private void OnLevelWasLoaded()
        {
            AllButtons = FindObjectsOfType<Button>();
            foreach (var button in AllButtons)
            {
                button.onClick.AddListener(delegate { PlayAudio(UiClick, false); });
            }
            PlayMusic(LevelOneClip);
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


        /// <summary>
        /// Set the volume of the music audiosource
        /// </summary>
        /// <param name="volume"></param>
        public void SetMusicVolume(float volume)
        {
            //The input is 0 - 100. We convert it to 0 - 1
            var temp = volume / 100;
            MusicAudioSource.volume = temp;
        }

        /// <summary>
        /// Set the volume of the sound audiosource
        /// </summary>
        /// <param name="volume"></param>
        public void SetAudioVolume(float volume)
        {
            //The input is 0 - 100. We convert it to 0 - 1
            var temp = volume / 100;
            SoundAudioSource.volume = temp;
        }
    }
}
