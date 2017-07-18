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
        void Awake()
        {
            _fade = GameObject.FindGameObjectWithTag("Fade").GetComponent<Animator>();
        }


        void Start()
        {
            signBox = FindObjectOfType<SignBox>();
            signs = FindObjectsOfType<Sign>();

            _fade = GameObject.FindGameObjectWithTag("Fade").GetComponent<Animator>();
            _journalManager = GetComponentInChildren<JournalManager>();

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


        public void SetFade(bool status)
        {
        
            if (_fade == null) return;
            Debug.Log("Fade is " + status);
            _fade.SetBool("Open", status);
        }

    }
}
    
