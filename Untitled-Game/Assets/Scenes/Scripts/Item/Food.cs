using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Food : Item
{
    public int healValue;
    public Food(string Name, string Description, string Id, int SellPrice, int HealValue) : base(Name, Description, Id, SellPrice) {
        healValue = HealValue;
    }
}