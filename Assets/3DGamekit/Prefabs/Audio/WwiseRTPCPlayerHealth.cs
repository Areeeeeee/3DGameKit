using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WwiseRTPCPlayerHealth : MonoBehaviour
{
    [SerializeField]
    private AK.Wwise.RTPC _playerHealth = null;
    public int _health;

    public void FixedUpdate()
    {
        _playerHealth.SetGlobalValue(_health);
    }
}
