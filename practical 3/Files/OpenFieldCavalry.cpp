#include "OpenFieldCavalry.h"
#
#include <iostream>
#include <string>

OpenFieldCavalry::OpenFieldCavalry(int health, int damage, int defence, std::string name, char terrain, int currSold,  int speed, double flankingBonus, double ofBonus): Cavalry(health, damage, defence, name, terrain, currSold,speed, flankingBonus) {
    this->ofBonus = ofBonus;
}

void OpenFieldCavalry::move() {
    std::cout << "OpenFieldCavalry: is moving" << std::endl;
}

void OpenFieldCavalry::attack() {
    std::cout << "OpenFieldCavalry: is attacking" << std::endl;
}
