using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ItemDatabase
{
    public List<Item> db = new List<Item>(new Item[] {
        new Item("Null", "null item", "null", 0),
        new Food("Cater Pie", "Baked from the tears of MrPitt", "caterPie", 100, 200),
        new Food("Apple Sauce", "Sauce", "appleSauce", 2000, 9001),
        new Item("Iron Ore", "Iron Ore", "ironOre", 10)
    });
}
