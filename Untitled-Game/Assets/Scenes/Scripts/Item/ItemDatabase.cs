using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ItemDatabase
{

    public ItemDatabase() {
        AddItems();
    }
    public List<Item> db;
    public void AddItems() {
        db.Add(new Item("Null", "null item", "null", 0));
    }
}
