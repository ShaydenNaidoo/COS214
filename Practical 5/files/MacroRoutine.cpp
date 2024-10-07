#include "MacroRoutine.h"

void MacroRoutine::addProcedure(Command* command) {
    procedures.push_back(command);
}


void MacroRoutine::removeProcedure(Command* command) {
    procedures.erase(std::remove(procedures.begin(), procedures.end(), command), procedures.end());
}

void MacroRoutine::performAction() {
    for (Command* command : procedures) {
        command->performAction();
    }
}


