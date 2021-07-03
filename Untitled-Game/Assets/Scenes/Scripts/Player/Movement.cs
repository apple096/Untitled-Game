using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// Dead code, 0 uses
public class Movement : MonoBehaviour
{
    public float speed = 6f;
    public Rigidbody2D rbody;
    Vector2 movement;
    void Update()
    {
        movement.x = Input.GetAxisRaw("Horizontal");
        movement.y = Input.GetAxisRaw("Vertical");
    }
    void FixedUpdate() {
        rbody.MovePosition(rbody.position + movement * speed * Time.fixedDeltaTime);
    }
}
