#ifndef UNLOCKDOOR_H
#define UNLOCKDOOR_H

#include "Command.h"
#include "DoorLock.h"
class UnlockDoor : public Command {
    private:
    DoorLock *doorLock;
    
public:
    UnlockDoor(DoorLock *doorLock);
    virtual ~UnlockDoor();
    void performAction() override;
};

#endif // UNLOCKDOOR_H