using UnityEngine;

namespace Assets.Scripts.Objects
{
    public class Sign : MonoBehaviour
    {

      
        [SerializeField] private string _signText;

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
