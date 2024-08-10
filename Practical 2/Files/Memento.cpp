#include "Memento.h"

Memento::Memento(int health, int damage, int defence, char type, std::string name){
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->type = type;
    this->unitName = name;

}

int Memento::getHealthPerSoldier(){
    return this->healthPerSoldier;

}

int Memento::getDamagePerSoldier(){
    return this->damagePerSoldier;

}

int Memento::getDefencePerSoldier(){
    return this->defencePerSoldier;

}

char Memento::getType(){
    return this->type;
}

std::string Memento::getUnitName(){
    return this->unitName;
}

bool Memento::operator==(Memento * mem){
    if((mem->getUnitName() == this->unitName) &&
    (mem->getDamagePerSoldier() == this->damagePerSoldier) &&
    (mem->getDefencePerSoldier() == this->defencePerSoldier) &&
    (mem->getHealthPerSoldier() == this->healthPerSoldier) &&
    (mem->getType() == this->type)) return true;
    else return false;
    
}
