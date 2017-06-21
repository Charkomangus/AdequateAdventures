using Assets.Scripts.Objects;
using UnityEngine;

namespace Assets.Scripts.Ui
{
    public class UiManager : MonoBehaviour
    {


        public SignBox signBox;
        public Sign[] signs;
        public string[] SignTexts;
        // Use this for initialization
        void Start()
        {
            signBox = FindObjectOfType<SignBox>();
            signs = FindObjectsOfType<Sign>();


     
            for (int i = 0; i < signs.Length; i++)
            {
                signs[i].SetSignText(SignTexts[i]);
            }
        
        

     
        }

        // Update is called once per frame
        void Update()
        {
        }

        public void Open(string text)
        {
            signBox.SetTextBoxText(text);
            signBox.Open(true);
        }



    
    }
}
    
