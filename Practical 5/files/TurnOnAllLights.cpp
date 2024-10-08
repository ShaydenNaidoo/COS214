#include "TurnOnAllLights.h"
#include <algorithm>
#include <iostream>


TurnOnAllLights::TurnOnAllLights() {

}


void TurnOnAllLights::addProcedure(Command* command) {
    lightOnCommands.push_back(command);
}


void TurnOnAllLights::removeProcedure(Command* command) {
    auto it = std::find(lightOnCommands.begin(), lightOnCommands.end(), command);
    if (it != lightOnCommands.end()) {
        lightOnCommands.erase(it);
    } else {
        std::cerr << "Error: Command not found, cannot remove." << std::endl;
    }
}

void TurnOnAllLights::performAction() {
    std::cout << "Executing turn on all lights procedure..." << std::endl;
    for (auto command : lightOnCommands) {
        command->performAction();
    }
}
