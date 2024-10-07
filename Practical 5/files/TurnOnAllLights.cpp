#include "TurnOnAllLights.h"
#include <algorithm>
#include <iostream>

// Constructor
TurnOnAllLights::TurnOnAllLights() {
    // Empty constructor as lightOnCommands will be managed dynamically
}

// Add a turn on light command
void TurnOnAllLights::addProcedure(Command* command) {
    lightOnCommands.push_back(command);
}

// Remove a turn on light command
void TurnOnAllLights::removeProcedure(Command* command) {
    auto it = std::find(lightOnCommands.begin(), lightOnCommands.end(), command);
    if (it != lightOnCommands.end()) {
        lightOnCommands.erase(it);
    } else {
        std::cerr << "Error: Command not found, cannot remove." << std::endl;
    }
}

// Execute turn on light commands
void TurnOnAllLights::performAction() {
    std::cout << "Executing turn on all lights procedure..." << std::endl;
    for (auto command : lightOnCommands) {
        command->performAction();
    }
}
