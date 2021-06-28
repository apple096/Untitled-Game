using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    public float movespeed = 5f;
    public Rigidbody2D playerRb;

    Vector2 movement;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        movement.x = Input.GetAxisRaw("Horizontal");
        movement.y = Input.GetAxisRaw("Vertical");
    }

    void FixedUpdate() {
        playerRb.MovePosition(playerRb.position + movement * movespeed * Time.fixedDeltaTime);
    }
}
