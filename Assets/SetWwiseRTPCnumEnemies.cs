using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetWwiseRTPCnumEnemies : MonoBehaviour
{
    [SerializeField]
    private AK.Wwise.RTPC _numEnemies = null;
    public int _numberOfEnemies;

    public void FixedUpdate()
    {
        _numEnemies.SetGlobalValue(_numberOfEnemies);
    }
}
