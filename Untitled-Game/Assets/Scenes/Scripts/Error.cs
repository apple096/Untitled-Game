using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public enum ErrorCode {
    NotEnoughInventorySpaces,
    NotEnoughGP
}
public class Error {
    public static string throwErrorMessage(ErrorCode ecode) {
        switch(ecode) {
            case ErrorCode.NotEnoughInventorySpaces:
                return "You don't have enough inventory spaces to add this item";
            case ErrorCode.NotEnoughGP:
                return "You don't have enough GP to purchase this item";
            default:
                return "Undefined error";
        }
    }
}