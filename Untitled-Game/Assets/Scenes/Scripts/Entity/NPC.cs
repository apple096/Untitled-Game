using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class NPC: Entity
{
    DialogueTree dialogueTree;
    public NPC(string Name, string Id, DialogueTree DialogueTree): base(Name, Id) {
        dialogueTree = DialogueTree;
    }
}