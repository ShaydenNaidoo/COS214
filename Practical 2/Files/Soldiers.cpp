//PRODUCT
#include "Soldiers.h"
Soldiers::Soldiers(){
    this->healthPerSoldier = 0;
    this->damagePerSoldier = 0;
    this->defencePerSoldier = 0;
    this->unitName = "";
    this->type = '#';
}

Soldiers::Soldiers(int health, int damage, int defence, std::string name, char type){
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->unitName = name;
    this->type = type;

}

int Soldiers::getHealthPerSoldier() const{
    return this->healthPerSoldier;

}

int Soldiers::getDamagePerSoldier() const{
    return this->damagePerSoldier;

}

int Soldiers::getDefencePerSoldier() const{
    return this->defencePerSoldier;

}

std::string Soldiers::getUnitName() const{
    return this->unitName;

}

char Soldiers::getType() const{
    return this->type;

}
//TEMPLATE METHODS
void Soldiers::engage(){
    prepare();
    execute();
}
void Soldiers::disengage(){
    retreat();
    rest();
}

