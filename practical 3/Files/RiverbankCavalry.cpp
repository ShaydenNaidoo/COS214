#include "RiverbankCavalry.h"
#include <iostream>
#include <string>

RiverbankCavalry::RiverbankCavalry(int health, int damage, int defence, std::string name, char terrain, int currSold, int speed, double flankingBonus, double rbBonus): Cavalry(health, damage, defence, name, terrain, currSold, speed, flankingBonus) {
    this->rbBonus = rbBonus;
}

RiverbankCavalry::~RiverbankCavalry() {
    std::cout << "RiverbankCavalry destructor called" << std::endl;
}

void RiverbankCavalry::move() {
    std::cout << "RiverbankCavalry: is moving" << std::endl;
}

void RiverbankCavalry::attack() {
    std::cout << "RiverbankCavalry: is attacking" << std::endl;
}
