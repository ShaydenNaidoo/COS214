//
// Created by shnai on 2024/10/05.
//

#include "DoorLock.h"

DoorLock::DoorLock():SmartDevice("DoorLock") {
    isLocked = true;
}

std::string DoorLock::getStatus() {
    return isLocked ? "Locked" : "Unlocked";
}

std::string DoorLock::getDeviceType() {
    return "DoorLock";
}

void DoorLock::Lock() {
    isLocked = true;

}

void DoorLock::Unlock() {
    isLocked = false;
}

void DoorLock::update() {
    Lock();
}
