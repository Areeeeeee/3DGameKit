using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayWwiseEventOnCollision : MonoBehaviour
{
    public AK.Wwise.Event _event;
    public GameObject _ellen;

    public void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == _ellen)
        {
            _event.Post(this.gameObject);
            Debug.Log("wwise collision");
        }

        _event.Post(this.gameObject);
    }
}
