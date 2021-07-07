using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CombatTriangle {
    float[,] Triangle = new float[3,3]{{1,1,1},{1,1,1},{1,1,1}};
    public float calculateBonus(Constants.CombatType attacking, Constants.CombatType defending) {
        return Triangle[(int)attacking, (int)defending];
    }
}