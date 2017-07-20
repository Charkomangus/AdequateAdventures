using Assets.Scripts.Objects;
using UnityEngine;

namespace Assets.Scripts.Ui
{
    public class UiManager : MonoBehaviour
    {


        public SignBox signBox;
        public Sign[] signs;
        public string[] SignTexts;
        public Animator _fade;

        public JournalManager _journalManager;
        // Use this for initialization
        private void Awake()
        {
            _fade = GameObject.FindGameObjectWithTag("Fade").GetComponent<Animator>();
        }


        private void Start()
        {
            signBox = FindObjectOfType<SignBox>();
           

            _fade = GameObject.FindGameObjectWithTag("Fade").GetComponent<Animator>();
            _journalManager = GetComponentInChildren<JournalManager>();

         
        
        

     
        }

        // Update is called once per frame
        private void Update()
        {
            signs = FindObjectsOfType<Sign>();
            for (int i = 0; i < signs.Length; i++)
            {
                signs[i].SetSignText(SignTexts[i]);
            }
        }

        public void Open(string text)
        {
            signBox.SetTextBoxText(text);
            signBox.Open();
        }


        public void SetFade(bool status)
        {
            if (_fade == null) return;
            _fade.SetBool("Open", status);
        }

    }
}
    
