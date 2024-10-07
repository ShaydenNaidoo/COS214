#include "UnlockDoor.h"
#include <iostream>
#include "DoorLock.h"

UnlockDoor::UnlockDoor(DoorLock *doorLock) {
    this->doorLock = doorLock;
}

UnlockDoor::~UnlockDoor() {
}

void UnlockDoor::performAction() {
    doorLock->Unlock();
    std::cout << "Door is now " << doorLock->getStatus() << std::endl;
}

void UnlockDoor::addProcedure(Command* command) {
}

void UnlockDoor::removeProcedure(Command* command) {
}
