/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using UnityEngine;

namespace Assets.Scripts.Objects
{
    /// <summary>
    /// Sign class just holds the text of every sign. Glorified struct really.
    /// </summary>
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
