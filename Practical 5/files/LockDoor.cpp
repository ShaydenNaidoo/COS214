#include "LockDoor.h"
#include <iostream>

LockDoor::LockDoor(DoorLock *doorLock) {
    this->doorLock = doorLock;
}

LockDoor::~LockDoor() {
}

void LockDoor::performAction() {
    doorLock->Lock();
    std::cout << "Door is now " << doorLock->getStatus() << std::endl;
}
