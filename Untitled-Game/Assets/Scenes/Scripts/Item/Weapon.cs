using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Weapon : Item
{
    public int damage;
    public int strength;
    public int critChance;
    public int critDamage;
    public Weapon(string Name, string Description, string Id, int SellPrice, int Damage, int Strength, int CritChance, int CritDamage) : base(Name, Description, Id, SellPrice) {
        damage = Damage;
        strength = Strength;
        critChance = CritDamage;
        critDamage = CritChance;
    }
}