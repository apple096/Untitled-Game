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
        DialogueTree GuideDialogue = new DialogueTree(Nodes: new DialogueNode[1]{
            new DialogueNode(NodeChildren: new DialogueNode[0], "Hello, player.")
        });
        npcs.Add(new NPC("Guide", "guide", GuideDialogue));
    }
}