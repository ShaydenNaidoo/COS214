#include "TurnOffAllLights.h"
#include <algorithm>
#include <iostream>


TurnOffAllLights::TurnOffAllLights() {

    
}

void TurnOffAllLights::addProcedure(Command* command) {
    lightOffCommands.push_back(command);
}


void TurnOffAllLights::removeProcedure(Command* command) {
    auto it = std::find(lightOffCommands.begin(), lightOffCommands.end(), command);
    if (it != lightOffCommands.end()) {
        lightOffCommands.erase(it);
    } else {
        std::cerr << "Error: Command not found, cannot remove." << std::endl;
    }
}

void TurnOffAllLights::performAction() {
    std::cout << "Executing turn off all lights procedure..." << std::endl;
    for (auto command : lightOffCommands) {
        command->performAction();
    }
}

