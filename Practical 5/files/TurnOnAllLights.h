#ifndef TURNONALLLIGHTS_H
#define TURNONALLLIGHTS_H

#include <vector>
#include "Command.h"
#include "Light.h"
#include "MacroRoutine.h"

class TurnOnAllLights : public MacroRoutine {
private:
    std::vector<Command*> lightOnCommands;

public:
    // Constructor
    TurnOnAllLights();

    // Add a turn on light command
    void addProcedure(Command* command) override;

    // Remove a turn on light command
    void removeProcedure(Command* command) override;

    // Execute all turn on light commands
    void performAction() override;
};

#endif // TURNONALLLIGHTS_H
