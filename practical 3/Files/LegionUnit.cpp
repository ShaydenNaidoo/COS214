//ABSTRACT_PRODUCT_INTERFACE
#include "LegionUnit.h"

LegionUnit::LegionUnit(int health, int defence, int damage, std::string name, char type, char terrain, int currSold) {
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->name = name;
    this->type = type;
    this->terrain = terrain;
    this->currSold = currSold;

}

int LegionUnit::getHealthPerSoldier() const {
    return healthPerSoldier;
}

int LegionUnit::getDamagePerSoldier() const {
    return damagePerSoldier;
}

int LegionUnit::getDefencePerSoldier() const {
    return defencePerSoldier;
}

std::string LegionUnit::getUnitName() const {
    return name;
}

char LegionUnit::getTerrain() const {
    return terrain;
}

void LegionUnit::setCurrNumSoldiers(int num) {
    currSold = num;
}

int LegionUnit::getCurrNumSoldiers() const {
    return currSold;
}

int LegionUnit::getDamageTaken() const {
    return this->damageTaken;

}

void LegionUnit::incrementDamage(int damage) {
    damageTaken += damage;
}

