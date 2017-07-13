using System.Collections.Generic;
using Assets.Scripts.MainManagers;
using UnityEngine;

namespace Assets.Scripts.Managers
{
    public class GuardManager : MonoBehaviour
    {
        [SerializeField]private Guard[] _guards;
        
        public void SpawnGuards()
        {
            _guards = FindObjectsOfType<Guard>();
            foreach (var guard in _guards)
            {
                guard.InitializeGuard();
            }
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
