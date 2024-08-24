#include "RiverbankInfantry.h"
#include <iostream>
#include <string>

RiverbankInfantry::RiverbankInfantry(int health, int damage, int defence, std::string name, char terrain, int currSold,int hTHCombatBonus, int armorBonus, double rbBonus): Infantry(health, damage, defence, name, terrain, currSold, hTHCombatBonus,armorBonus) {
    this->rbBonus = rbBonus;
}

void RiverbankInfantry::move() {
    std::cout << "WoodlandInfantry: is moving" << std::endl;
}

void RiverbankInfantry::attack() {
    std::cout << "WoodlandInfantry: is attacking" << std::endl;
}

