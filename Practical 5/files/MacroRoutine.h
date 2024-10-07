#ifndef MACROROUTINE_H
#define MACROROUTINE_H

#include <vector>
#include "Command.h"
#include <algorithm>  
#include <vector>
#include "Command.h"
#include <iostream>

#include <vector>
#include <algorithm>  // For std::find
#include "Command.h"

class MacroRoutine : public Command {
private:
    std::vector<Command*> procedures;

public:
    virtual void addProcedure(Command* command);
    virtual void removeProcedure(Command* command);
    virtual void performAction() override;
};


#endif // MACROROUTINE_H