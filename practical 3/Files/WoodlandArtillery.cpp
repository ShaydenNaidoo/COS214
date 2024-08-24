#include "WoodlandArtillery.h"
#include <iostream>
#include <string>

WoodlandArtillery::WoodlandArtillery(int health, int damage, int defence, std::string name, char terrain, int currSold, int range, int accuracy, double rbBonus): Artillery(health, damage, defence, name, terrain, currSold, range, accuracy) {
    this->wBonus = wBonus;
}
void WoodlandArtillery::move() {
    std::cout << "WoodlandArtillery: is moving" << std::endl;
}

void WoodlandArtillery::attack() {
    std::cout << "WoodlandArtillery: is attacking" << std::endl;
}