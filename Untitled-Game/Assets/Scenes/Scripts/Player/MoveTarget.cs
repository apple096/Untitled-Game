using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveTarget : MonoBehaviour
{
    void Update()
    {
        if (Input.GetMouseButtonDown(1)) {
            transform.position = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        }
    }
}
