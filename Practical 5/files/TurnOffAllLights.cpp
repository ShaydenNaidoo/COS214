#include "TurnOffAllLights.h"
#include <algorithm>
#include <iostream>

// Constructor
TurnOffAllLights::TurnOffAllLights() {
    // Empty constructor as lightOffCommands will be managed dynamically
    
}
// Add a turn off light command
void TurnOffAllLights::addProcedure(Command* command) {
    lightOffCommands.push_back(command);
}

// Remove a turn off light command
void TurnOffAllLights::removeProcedure(Command* command) {
    auto it = std::find(lightOffCommands.begin(), lightOffCommands.end(), command);
    if (it != lightOffCommands.end()) {
        lightOffCommands.erase(it);
    } else {
        std::cerr << "Error: Command not found, cannot remove." << std::endl;
    }
}

// Execute turn off light commands
void TurnOffAllLights::performAction() {
    std::cout << "Executing turn off all lights procedure..." << std::endl;
    for (auto command : lightOffCommands) {
        command->performAction();
    }
}

