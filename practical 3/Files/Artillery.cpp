//ABSTRACT_PRODUCT
#include "Artillery.h"

Artillery::Artillery(int health, int damage, int defence, std::string name, char type, char terrain, int currSold, double range, double accuracy)
: LegionUnit(health, defence, damage, name, type, terrain, currSold) {
    this->range = range;
    this->accuracy = accuracy;
}

double Artillery::getRange(){
    return this->range;
}

double Artillery::getAccuracy(){
    return this->accuracy;
}
