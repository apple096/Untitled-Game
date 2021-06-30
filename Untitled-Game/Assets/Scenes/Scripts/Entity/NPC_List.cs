using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class NPC_List
{
    public NPC_List() {
        addNPCs();
    }
    public List<NPC> npcs;

    public void addNPCs() {
        DialogueTree AppleDialogue = new DialogueTree(Nodes: new DialogueNode[1]{
            new DialogueNode(NodeChildren: new DialogueNode[0], "Hello, player. I'm Apple")
        });
        npcs.Add(new NPC("Apple", "apple", AppleDialogue));
    }
}