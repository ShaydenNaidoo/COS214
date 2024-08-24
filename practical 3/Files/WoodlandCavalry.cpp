#include "WoodlandCavalry.h"
#include <iostream>
#include <string>

WoodlandCavalry::WoodlandCavalry(int health, int damage, int defence, std::string name, char terrain, int currSold, int speed, double flankingBonus, double wBonus): Cavalry(health, damage, defence, name, terrain, currSold, speed, flankingBonus) {
    this->wBonus = wBonus;
}

void WoodlandCavalry::move() {
    std::cout << "WoodlandCavalry: is moving" << std::endl;
}

void WoodlandCavalry::attack() {
    std::cout << "WoodlandCavalry: is attacking" << std::endl;
}
