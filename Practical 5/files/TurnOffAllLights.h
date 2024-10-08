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
    TurnOffAllLights(); 
    void addProcedure(Command* command) override;
    void removeProcedure(Command* command) override;
    void performAction() override;
};

#endif // TURNOFFALLLIGHTS_H
