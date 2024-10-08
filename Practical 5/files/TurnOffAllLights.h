#ifndef TURNOFFALLLIGHTS_H
#define TURNOFFALLLIGHTS_H

#include <vector>
#include "Command.h"
#include "Light.h"
#include "MacroRoutine.h"

class TurnOffAllLights : public MacroRoutine {
private:
    std::vector<Command*> lightOffCommands;

public:
    // Constructor
    TurnOffAllLights(); 
    // Add a turn off light command
    void addProcedure(Command* command) override;

    // Remove a turn off light command
    void removeProcedure(Command* command) override;

    // Execute all turn off light commands
    void performAction() override;
};

#endif // TURNOFFALLLIGHTS_H
