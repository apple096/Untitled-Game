using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCollider : MonoBehaviour
{
    void Start(){}

    void Update(){}

    public GameObject target;

    Vector3 doorEnter = new Vector3((float)-0.636, (float)-1.7, 0);
    Vector3 doorExit = new Vector3((float)10.24, (float)0.55, 0);

    void OnTriggerEnter2D(Collider2D collision) {
        switch(collision.gameObject.transform.tag) {
            case "doorEnter":
                target.transform.position = doorExit;
                float timerE = 0;
                timerE = timerE + Time.deltaTime;
                if (timerE > 0)
                {
                    transform.position = target.transform.position;
                }
                // transform.position = target.transform.position;
                break;
            case "doorExit":
                target.transform.position = doorEnter;
                float timer = 0;
                timer = timer + Time.deltaTime;
                if (timer > 0)
                {
                    transform.position = target.transform.position;
                }
                break;
            case "npc":
                break;
        }
    }
}
