using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameState {
    public State gameState = State.Overworld;
    public void changeState(State input) {
        gameState = input;
    }
}