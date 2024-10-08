#include "MacroRoutine.h"
#include <algorithm>

// Constructor
MacroRoutine::MacroRoutine() {}


// Execute all commands in the macro
void MacroRoutine::performAction() {
    for (auto& command : procedures) {
        command->performAction();
    }
}

// Add a command to the macro
void MacroRoutine::addProcedure(Command* command) {
    procedures.push_back(command);
}

// Remove a command from the macro
void MacroRoutine::removeProcedure(Command* command) {
    procedures.erase(std::remove(procedures.begin(), procedures.end(), command), procedures.end());
}


