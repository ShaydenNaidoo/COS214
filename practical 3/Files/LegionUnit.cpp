#include "Legion.h"
#include "LegionUnit.h"

#include <iostream>
#include <string>

LegionUnit::LegionUnit(int health, int damage, int defence, std::string name, char terrain, int currSold) {
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->name = name;
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

void LegionUnit::incrementDamage(int damage) {
    damagePerSoldier += damage;
}

LegionUnit::~LegionUnit() {
    std::cout << "LegionUnit destructor called" << std::endl;
}
