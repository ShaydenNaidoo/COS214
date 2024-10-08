#include "LockDoor.h"
#include <iostream>

LockDoor::LockDoor(DoorLock *doorLock) {
    this->doorLock = doorLock;
}

void LockDoor::performAction() {
    doorLock->Lock();
    std::cout << "Door is now " << doorLock->getStatus() << std::endl;
}

void LockDoor::addProcedure(Command *command) {
}

void LockDoor::removeProcedure(Command *command) {
}

