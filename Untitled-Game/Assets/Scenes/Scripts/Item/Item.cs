using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Item
{
    public string name;
    public string id;
    public string description;
    public int sellPrice;
    public Item(string Name, string Description, string Id, int SellPrice) {
        id = Id;
        name = Name;
        description = Description;
        sellPrice = SellPrice;
    }
}
