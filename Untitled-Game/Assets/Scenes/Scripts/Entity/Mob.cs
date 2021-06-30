using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Mob: Entity
{
    public int health;
    public Mob(string Name, string Id, int Health): base(Name, Id) {
        health = Health;
    }
}