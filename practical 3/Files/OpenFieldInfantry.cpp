#include "OpenFieldInfantry.h"
#
#include <iostream>
#include <string>

OpenFieldInfantry::OpenFieldInfantry(int health, int damage, int defence, std::string name, char terrain, int currSold, int hTHCombatBonus, int armorBonus, double ofBonus): Infantry(health, damage, defence, name, terrain, currSold,hTHCombatBonus,armorBonus) {
    this->ofBonus = ofBonus;
}

void OpenFieldInfantry::move() {
    std::cout << "OpenFieldInfantry: is moving" << std::endl;
}

void OpenFieldInfantry::attack() {
    std::cout << "OpenFieldInfantry: is attacking" << std::endl;
}