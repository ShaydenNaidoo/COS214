//
// Created by shnai on 2024/10/05.
//

#include "DoorLock.h"

DoorLock::DoorLock() {
    isLocked = true;
    status = "Locked";
}

std::string DoorLock::getStatus() {
    return status;
}

void DoorLock::performAction() {
    if (isLocked) {
        Unlock();
    } else {
        Lock();
    }
}

void DoorLock::Lock() {
    isLocked = true;
    status = "Locked";
}

void DoorLock::Unlock() {
    isLocked = false;
    status = "Unlocked";
}
