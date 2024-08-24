#include "WoodlandInfantry.h"
#include <iostream>
#include <string>

WoodlandInfantry::WoodlandInfantry(int health, int damage, int defence, std::string name, char terrain, int currSold,int hTHCombatBonus, int armorBonus, double wBonus): Infantry(health, damage, defence, name, terrain, currSold, hTHCombatBonus,armorBonus) {
    this->wBonus = wBonus;
}

void WoodlandInfantry::move() {
    std::cout << "WoodlandInfantry: is moving" << std::endl;
}

void WoodlandInfantry::attack() {
    std::cout << "WoodlandInfantry: is attacking" << std::endl;
}
