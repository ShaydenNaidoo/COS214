#include "RiverbankArtillery.h"
#
#include <iostream>
#include <string>

RiverbankArtillery::RiverbankArtillery(int health, int damage, int defence, std::string name, char terrain, int currSold, int range, int accuracy, double rbBonus): Artillery(health, damage, defence, name, terrain, currSold, range, accuracy) {
    this->rbBonus = rbBonus;
}
void RiverbankArtillery::move() {
    std::cout << "RiverbankArtillery: is moving" << std::endl;
}

void RiverbankArtillery::attack() {
    std::cout << "RiverbankArtillery: is attacking" << std::endl;
}
