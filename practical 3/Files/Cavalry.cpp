#include "Cavalry.h"
#include "LegionUnit.h"

#include <iostream>
#include <string>

Cavalry::Cavalry(int health, int damage, int defence, std::string name, char terrain, int currSold, int speed, double flankingBonus): LegionUnit(health, damage, defence, name, terrain, currSold) {
    this->speed = speed;
    this->flankingBonus = flankingBonus;
}
void Cavalry::move() {
    std::cout << "Cavalry unit is moving" << std::endl;
}
void Cavalry::attack() {
    std::cout << "Cavalry unit is attacking" << std::endl;
}

Cavalry::~Cavalry() {
    std::cout << "Cavalry destructor called" << std::endl;
}


