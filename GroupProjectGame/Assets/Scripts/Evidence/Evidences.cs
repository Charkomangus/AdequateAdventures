/*********************************************************************************
 * Copyright (C) Charalampos Koundourakis (Adequate Adventures) - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Created by Charalampos Koundourakis <1603155@abertay.ac.uk> 
*********************************************************************************/
using Assets.Scripts.MainManagers;
using Assets.Scripts.Tiles;
using UnityEngine;

namespace Assets.Scripts.Evidence
{
    /// <summary>
    /// This class controls the pickable evidence items
    /// </summary>
    public class Evidences : MonoBehaviour
    {
        //Externally set variable - this is done via prefabs of the same item
        [SerializeField]private int _evidenceNumber;

        /// <summary>
        /// Dissapear this item, both visually and from its parents tile memory. Unlock the relevant journal entry and showcase it to the player - If no relevant journal entry just skip
        /// </summary>
        public void EvidencePickedUp()
        {
            if (_evidenceNumber != -1)
            {
              
                GameManager.Instance.EvidenceFound++;
                GameManager.Instance.TriggerDialogue();
                GameManager.Instance.JournalManager.EvidenceFound(_evidenceNumber, true);
                GameManager.Instance.DialogueManager._evidenceNumber = _evidenceNumber;
                GameManager.Instance.DialogueManager._EvidencePicked = true;

            }
            GetComponent<SpriteRenderer>().sprite = null;
            GetComponentInParent<Tile>().SetObject(TileObject.Empty);

        }

    }
}
