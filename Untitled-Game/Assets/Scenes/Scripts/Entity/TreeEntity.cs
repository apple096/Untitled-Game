using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class TreeEntity : Destructable
{
    public TreeEntity(string Name, string Id, int Health, float RespawnTime): base(Name, Id, Health, RespawnTime) {
    }
}