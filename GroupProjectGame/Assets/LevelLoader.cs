using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Assets
{
    /// <summary>
    /// This scene will show a loading scene while the next level loads in the background
    /// </summary>
    public class LevelLoader : MonoBehaviour
    {
        private Slider _loadSlider;
        private Text _loadSliderText;
        private AsyncOperation _async; // When assigned, loading will start

        /// <summary>
        /// Find the UI elements and begin the Load
        /// </summary>
        private void Start()
        {
            _loadSlider = FindObjectOfType<Slider>();
            _loadSliderText = GetComponentInChildren<Text>();
            StartCoroutine(SyncLoadLevel());
  
        }


        /// <summary>
        /// Showcase a fake loading bar then actually load the game
        /// </summary>
        /// <returns></returns>
        public IEnumerator SyncLoadLevel()
        {
            //Fake loadinbg bar - takes between 5/10 seconds
            for (int i = 0; i < 100; i+=20)
            {
                _loadSlider.value = Random.Range(i+5, i+15);
                _loadSliderText.text = _loadSlider.value + "%";
                yield return new WaitForSecondsRealtime(Random.Range(1,2));
            }

            //Display 100%
            _loadSlider.value = 100;
            _loadSliderText.text = _loadSlider.value + "%";
            //Actually load the level
            _async = SceneManager.LoadSceneAsync("Level1");
      
        }

    

    }
}
