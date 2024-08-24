#include "OpenFieldArtillery.h"
#
#include <iostream>
#include <string>

OpenFieldArtillery::OpenFieldArtillery(int health, int damage, int defence, std::string name, char terrain, int currSold, int range, int accuracy, double ofBonus): Artillery(health, damage, defence, name, terrain, currSold, range, accuracy) {
    this->ofBonus = ofBonus;
}
void OpenFieldArtillery::move() {
    std::cout << "OpenFieldArtillery: is moving" << std::endl;
}

void OpenFieldArtillery::attack() {
    std::cout << "OpenFieldArtillery: is attacking" << std::endl;
}
