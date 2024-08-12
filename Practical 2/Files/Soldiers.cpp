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
    if(this->currSold <= 0) return;
    this->totalDamageTaken += damage;

    int x = this->totalDamageTaken/this->currSold;

    this->setCurrNumSoldiers(this->currSold - x);  

    x = x*this->healthPerSoldier;

    this->totalDamageTaken -= x;

    if(this->totalDamageTaken <= 0) this->totalDamageTaken = 0;
    if(this->currSold <= 0) {
        this->currSold = 0;

    }

}

void Soldiers::heal(){
    this->totalDamageTaken -= this->healthPerSoldier;
    this->setCurrNumSoldiers(this->currSold + 1);

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

Memento* Soldiers::militusMemento(){
    return new Memento(this->healthPerSoldier, this->damagePerSoldier, this->defencePerSoldier, this->type, this->unitName, this->currSold, this->totalDamageTaken);

}

void Soldiers::vivificaMemento(Memento* mem){
    this->healthPerSoldier = mem->getHealthPerSoldier();
    this->damagePerSoldier = mem->getDamagePerSoldier();
    this->defencePerSoldier = mem->getDefencePerSoldier();
    this->type = mem->getType();
    this->unitName = mem->getUnitName();
    this->currSold = mem->getCurrNumSoldiers();
    this->totalDamageTaken = mem->getDamageTaken();
    
}

void Soldiers::printUnit(){
    std::cout << "Unit Name: " << this->unitName << std::endl;
    std::cout << "Type: " << this->type << std::endl;
    std::cout << "Current Number of Soldiers: " << this->currSold << std::endl;
    std::cout << "Health per Soldier: " << this->healthPerSoldier << std::endl;
    std::cout << "Damage per Soldier: " << this->damagePerSoldier << std::endl;
    std::cout << "Defence per Soldier: " << this->defencePerSoldier << std::endl;
    std::cout << "Total Damage Taken: " << this->totalDamageTaken << std::endl;
}