#ifndef LOCKDOOR_H
#define LOCKDOOR_H

#include "Command.h"
#include "DoorLock.h"
class LockDoor : public Command {
    private:
    DoorLock *doorLock;
public:
    LockDoor(DoorLock *doorLock);  
    virtual ~LockDoor();
    void performAction() override;
    void addProcedure(Command* command) override;
    void removeProcedure(Command* command) override;
};

#endif // LOCKDOOR_H