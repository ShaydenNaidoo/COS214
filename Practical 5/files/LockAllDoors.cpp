#include "LockAllDoors.h"
#include <algorithm>
#include <iostream>

// Constructor
LockAllDoors::LockAllDoors() {
    // Empty constructor as doorLockCommands will be managed through add/remove
}

// Add a lock door command
void LockAllDoors::addProcedure(Command* command) {
    doorLockCommands.push_back(command);  
}

// Remove a lock door command
void LockAllDoors::removeProcedure(Command* command) {
    auto it = std::find(doorLockCommands.begin(), doorLockCommands.end(), command);
    if (it != doorLockCommands.end()) {
        doorLockCommands.erase(it); 
    } else {
        std::cerr << "Error: Command not found, cannot remove." << std::endl;
    }
}

// Execute all lock door commands
void LockAllDoors::performAction() {
    std::cout << "Executing lock all doors procedure..." << std::endl;
    for (auto command : doorLockCommands) {
        command->performAction();  // Execute each lock command
    }
}
