#include "Memento.h"

Memento::Memento(int health, int damage, int defence, char type, std::string name, int num, int total){
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->type = type;
    this->unitName = name;
    this->currSold = num;
    this->totalDamageTaken = total;

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

int Memento::getcurrSold(){
    return this->currSold;

}

int Memento::getDamageTaken(){
    return this->totalDamageTaken;
}

bool Memento::operator==(Memento * mem){
    if((mem->getUnitName() == this->unitName) &&
    (mem->getDamagePerSoldier() == this->damagePerSoldier) &&
    (mem->getDefencePerSoldier() == this->defencePerSoldier) &&
    (mem->getHealthPerSoldier() == this->healthPerSoldier) &&
    (mem->getType() == this->type)) return true;
    else return false;
    
}
