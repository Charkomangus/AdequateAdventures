using UnityEngine;

namespace Assets.Scripts.Objects
{
    public class Sign : MonoBehaviour
    {

      
        [SerializeField] private string SignText;
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
            return SignText;
        }
    
        public void SetSignText(string text)
        {
            SignText = text;
        }
       
    }
}
