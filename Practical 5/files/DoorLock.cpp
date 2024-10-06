//
// Created by shnai on 2024/10/05.
//

#include "DoorLock.h"

DoorLock::DoorLock() {
    isLocked = true;
}

std::string DoorLock::getStatus() {
    return isLocked ? "Locked" : "Unlocked";
}


void DoorLock::Lock() {
    isLocked = true;

}

void DoorLock::Unlock() {
    isLocked = false;
}
