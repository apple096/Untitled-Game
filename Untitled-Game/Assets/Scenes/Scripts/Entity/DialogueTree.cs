using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class DialogueTree
{
    public DialogueNode[] nodes;
    public DialogueTree(DialogueNode[] Nodes) {
        nodes = Nodes;
    }
}

public class DialogueNode {
    public string nodeContent;
    public DialogueNode[] nodeChildren;
    public DialogueNode(DialogueNode[] NodeChildren, string NodeContent) {
        nodeChildren = NodeChildren;
        nodeContent = NodeContent;
    }
}