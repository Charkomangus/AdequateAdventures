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
        private AsyncOperation _async; // When assigned, loading will start
        private Image _sillouate;
        private float _sillouateValue;

        /// <summary>
        /// Find the UI elements and begin the Load
        /// </summary>
        private void Start()
        {
            _sillouate = GameObject.FindGameObjectWithTag("Sillouate").GetComponent<Image>();
            StartCoroutine(SyncLoadLevel());

        }


        /// <summary>
        /// Showcase a fake loading bar then actually load the game
        /// </summary>
        /// <returns></returns>
        public IEnumerator SyncLoadLevel()
        {
            while (_sillouateValue < 1)
            {
                _sillouateValue += Random.Range(0.05f, 0.1f);
                _sillouate.transform.localScale = new Vector3(1, _sillouateValue, 1);
                yield return new WaitForSecondsRealtime(Random.Range(0.1f, 0.5f));
            }




            //Display 100%
            _sillouate.transform.localScale = new Vector3(1, 1, 1);

            yield return new WaitForSecondsRealtime(Random.Range(1, 2));
            //Actually load the level
            _async = SceneManager.LoadSceneAsync("Level1");

        }

    

    }
}
