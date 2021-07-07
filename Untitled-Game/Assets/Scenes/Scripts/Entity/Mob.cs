using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Mob: Entity
{
    public int health;
    public int damage;
    public Mob(string Name, string Id, int Health, int Damage): base(Name, Id) {
        health = Health;
        damage = Damage;
    }
}