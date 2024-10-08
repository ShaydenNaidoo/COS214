#include "UnlockAllDoors.h"
#include <algorithm>
#include <iostream>
UnlockAllDoors::UnlockAllDoors() {

}

void UnlockAllDoors::addProcedure(Command* command) {
    doorUnlockCommands.push_back(command);
}
void UnlockAllDoors::removeProcedure(Command* command) {
    auto it = std::find(doorUnlockCommands.begin(), doorUnlockCommands.end(), command);
    if (it != doorUnlockCommands.end()) {
        doorUnlockCommands.erase(it);
    } else {
        std::cerr << "Error: Command not found, cannot remove." << std::endl;
    }
}
void UnlockAllDoors::performAction() {
    std::cout << "Executing unlock all doors procedure..." << std::endl;
    for (auto command : doorUnlockCommands) {
        command->performAction();
    }
}
