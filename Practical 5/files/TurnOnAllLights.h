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
    TurnOnAllLights();
    void addProcedure(Command* command) override;
    void removeProcedure(Command* command) override;
    void performAction() override;
};

#endif // TURNONALLLIGHTS_H
