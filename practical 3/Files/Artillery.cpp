#include "Artillery.h"
#include "LegionUnit.h"

#include <iostream>
#include <string>

Artillery::Artillery(int health, int damage, int defence, std::string name, char terrain, int currSold, double range, double accuracy): LegionUnit(health, damage, defence, name, terrain, currSold) {
    this->range = range;
    this->accuracy = accuracy;
}

void Artillery::move() {
    std::cout << "Artillery unit is moving" << std::endl;
}

void Artillery::attack() {
    std::cout << "Artillery unit is attacking" << std::endl;
}

