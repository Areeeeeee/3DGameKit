using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayWwiseEventOnStart : MonoBehaviour
{

    public AK.Wwise.Event _event;

    void Awake()
    {
        _event.Post(this.gameObject);
    }

}
