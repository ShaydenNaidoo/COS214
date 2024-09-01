//ABSTRACT_PRODUCT
#include "Cavalry.h"

Cavalry::Cavalry(int health, int damage, int defence, std::string name, char type, char terrain, int currSold, int speed, double flankingBonus)
: LegionUnit(health, damage, defence, name, type,  terrain, currSold) {
    this->speed = speed;
    this->flankingBonus = flankingBonus;
}

int Cavalry::getSpeed(){
    return this->speed;
}
