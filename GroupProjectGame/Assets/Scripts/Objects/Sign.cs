using UnityEngine;

namespace Assets.Scripts.Objects
{
    public class Sign : MonoBehaviour
    {

      
        [SerializeField] private string _signText;
        [SerializeField]private int _puzzleNumber;
        // Use this for initialization
        private void Start()
        {

        }

        // Update is called once per frame
        private void Update()
        {

        }


        public string ReturnSignText()
        {
            return _signText;
        }
    
        public void SetSignText(string text)
        {
            _signText = text;
        }
       
    }
}
