using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ItemDatabase
{

    public ItemDatabase() {
        addItems();
    }
    public List<Item> db;
    public void addItems() {
        db.Add(new Item("Null", "null item", "null", 0));
        db.Add(new Food("Cater Pie", "Pitt", "caterPie", 100, 200));
    }
}
