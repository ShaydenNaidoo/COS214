#include "UnlockAllDoors.h"
#include <algorithm>
#include <iostream>

// Constructor
UnlockAllDoors::UnlockAllDoors() {
    // Empty constructor as doorUnlockCommands will be managed dynamically
}

// Add unlock door command
void UnlockAllDoors::addProcedure(Command* command) {
    doorUnlockCommands.push_back(command);
}

// Remove unlock door command
void UnlockAllDoors::removeProcedure(Command* command) {
    auto it = std::find(doorUnlockCommands.begin(), doorUnlockCommands.end(), command);
    if (it != doorUnlockCommands.end()) {
        doorUnlockCommands.erase(it);
    } else {
        std::cerr << "Error: Command not found, cannot remove." << std::endl;
    }
}

// Execute unlock door commands
void UnlockAllDoors::performAction() {
    std::cout << "Executing unlock all doors procedure..." << std::endl;
    for (auto command : doorUnlockCommands) {
        command->performAction();
    }
}
