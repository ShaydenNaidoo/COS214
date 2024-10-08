#ifndef UNLOCKALLDOORS_H
#define UNLOCKALLDOORS_H

#include <vector>
#include "Command.h"
#include "DoorLock.h"
#include "MacroRoutine.h"

class UnlockAllDoors : public MacroRoutine {
private:
    std::vector<Command*> doorUnlockCommands;

public:
    // Constructor
    UnlockAllDoors();
    ~UnlockAllDoors();
    // Add an unlock door command
    void addProcedure(Command* command) override;

    // Remove an unlock door command
    void removeProcedure(Command* command) override;

    // Execute all unlocking commands
    void performAction() override;
};

#endif // UNLOCKALLDOORS_H
