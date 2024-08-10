//PRODUCT
#include "Soldiers.h"
Soldiers::Soldiers(){
    this->healthPerSoldier = 0;
    this->damagePerSoldier = 0;
    this->defencePerSoldier = 0;
    this->unitName = "";
    this->type = '#';
}

Soldiers::Soldiers(int health, int damage, int defence, std::string name, char type, int currSold){
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->unitName = name;
    this->type = type;
    this->currSold = currSold;

}

int Soldiers::getHealthPerSoldier() const{
    return this->healthPerSoldier;

}

int Soldiers::getCurrNumSoldiers() const{
    return this->currSold;
}

void Soldiers::incrementDamage(int damage){
    this->totalDamageTaken += damage;

}

void Soldiers::heal(){
    this->totalDamageTaken -= 0.5 * this->totalDamageTaken;

}

int Soldiers::getDamageTaken(){
    return this->totalDamageTaken;
    
}

int Soldiers::getDamagePerSoldier() const{
    return this->damagePerSoldier;

}
void Soldiers::setCurrNumSoldiers(int num){
    this->currSold = num;
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

Memento* Soldiers::militusMemento(){
    return new Memento(this->healthPerSoldier, this->damagePerSoldier, this->defencePerSoldier, this->type, this->unitName);

}

void Soldiers::vivificaMemento(Memento* mem){
    this->healthPerSoldier = mem->getHealthPerSoldier();
    this->damagePerSoldier = mem->getDamagePerSoldier();
    this->defencePerSoldier = mem->getDefencePerSoldier();
    this->type = mem->getType();
    this->unitName = mem->getUnitName();
    
}

