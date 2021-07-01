using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Destructable: Entity
{
    public int health;
    public float respawnTime;
    public Destructable(string Name, string Id, int Health, float RespawnTime): base(Name, Id) {
        health = Health;
        respawnTime = RespawnTime;
    }
}