using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventorySlot: MonoBehaviour {
    public string itemId;
    public int amount;
    public InventorySlot(int Amount = 0, string ItemId = "null") {
        itemId = ItemId;
        amount = Amount;
    }
}