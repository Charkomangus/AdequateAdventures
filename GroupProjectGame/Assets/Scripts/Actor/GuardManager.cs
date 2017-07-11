using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using UnityEngine;

namespace Assets.Scripts.Managers
{
    public class GuardManager : MonoBehaviour
    {

        [SerializeField]private Guard _guardPrefab;
        [SerializeField]private List<Guard> _guards;
        [SerializeField]private List<Guard> _guardPositions;

     
        
        public void SpawnGuards()
        {
            var newGuard = Instantiate(_guardPrefab, transform.position, Quaternion.Euler(new Vector3(90, 0, 0)));
            newGuard.InitializeGuard();
            _guards.Add(newGuard);
        }

        public void ResetGuards()
        {
            foreach (var guard in _guards)
            {
                guard.ResetGuard();
            }
        }
    }
}
