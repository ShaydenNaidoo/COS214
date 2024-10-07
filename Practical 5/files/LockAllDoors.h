#ifndef LOCKALLDOORS_H
#define LOCKALLDOORS_H

#include <vector>
#include "Command.h"
#include "DoorLock.h"
#include "MacroRoutine.h"

class LockAllDoors : public MacroRoutine {
private:
    std::vector<Command*> doorLockCommands; // Store lock door commands

public:
    LockAllDoors();
    void addProcedure(Command* command) override;
    void removeProcedure(Command* command) override;
    void performAction() override;
};

#endif // LOCKALLDOORS_H
