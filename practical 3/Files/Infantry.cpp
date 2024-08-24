#include "Infantry.h"

Infantry::Infantry(int health, int damage, int defence, std::string name, char terrain, int currSold, int hTHCombatBonus, int armorBonus): LegionUnit(health, damage, defence, name, terrain, currSold) {
    this->hTHCombatBonus = hTHCombatBonus;
    this->armorBonus = armorBonus;
}

void Infantry::move() {
    std::cout << "Infantry unit is moving" << std::endl;
}

void Infantry::attack() {
    std::cout << "Infantry unit is attacking" << std::endl;
}

Infantry::~Infantry() {
    std::cout << "Infantry destructor called" << std::endl;
}
