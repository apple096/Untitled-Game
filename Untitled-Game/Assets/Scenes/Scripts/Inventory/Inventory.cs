using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    public List<InventorySlot> InventoryItems = new List<InventorySlot>(new InventorySlot[] {
        new InventorySlot(),
        new InventorySlot(),
        new InventorySlot(),
        new InventorySlot(),
        new InventorySlot(),
        new InventorySlot(),
        new InventorySlot(),
        new InventorySlot(),
        new InventorySlot(),
        new InventorySlot(),
        new InventorySlot(),
        new InventorySlot()
    });
    public int startingSlotCount = 12;
    public void gainItem(Item item, int count = 1) {
        bool success = false;
        for (int i = 0; i<InventoryItems.Count; i++) {
            if (InventoryItems[i].itemId == "null") {
                InventoryItems[i] = new InventorySlot(count, item.id);
                success = true;
                break;
            }
        }
        if (!success) {
            Error.throwErrorMessage(ErrorCode.NotEnoughInventorySpaces);
        }
    } 
    void Start()
    {
        
    }
    void Update()
    {
        
    }
}
