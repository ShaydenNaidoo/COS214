#include "LockAllDoors.h"
#include <algorithm>
#include <iostream>

// Constructor
LockAllDoors::LockAllDoors() {
    // Empty constructor as lockCommands will be managed dynamically
}
// Add a lock door command
void LockAllDoors::addProcedure(Command* command) {
    lockCommands.push_back(command);
}

// Remove a lock door command
void LockAllDoors::removeProcedure(Command* command) {
    auto it = std::find(lockCommands.begin(), lockCommands.end(), command);
    if (it != lockCommands.end()) {
        lockCommands.erase(it);
    } else {
        std::cerr << "Error: Command not found, cannot remove." << std::endl;
    }
}

// Execute lock door commands
void LockAllDoors::performAction() {
    std::cout << "Executing lock all doors procedure..." << std::endl;
    for (auto command : lockCommands) {
        command->performAction();
    }
}


