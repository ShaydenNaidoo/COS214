//PRODUCT
#include "Soldiers.h"

Soldiers::Soldiers(int health, int damage, int defence, std::string name, char type){
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->unitName = name;
    this->type = type;

}

int Soldiers::getHealthPerSoldier(){
    return this->healthPerSoldier;

}

int Soldiers::getDamagePerSoldier(){
    return this->damagePerSoldier;

}

int Soldiers::getDefencePerSoldier(){
    return this->defencePerSoldier;

}

std::string Soldiers::getUnitName(){
    return this->unitName;

}

char Soldiers::getType(){
    return this->type;

}