#include "Infantry.h"
#include <iostream>
#include <string>
using namespace std;
Infantry::Infantry(){ //default constructor just in case -- can be removed
    this->healthPerSoldier = 0;
    this->damagePerSoldier = 0;
    this->defencePerSoldier = 0;
    this->unitName = "";
    this->amountOfSoldiersPerUnit = 0;
}
Infantry::Infantry(const Infantry &infantry){
    this->healthPerSoldier = infantry.healthPerSoldier;
    this->damagePerSoldier = infantry.damagePerSoldier;
    this->defencePerSoldier = infantry.defencePerSoldier;
    this->unitName = infantry.unitName;
    this->amountOfSoldiersPerUnit = infantry.amountOfSoldiersPerUnit;
}
Infantry::Infantry(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName):Soldiers(amountOfSoldiersPerUnit){
    this->healthPerSoldier = healthPerSoldier;
    this->damagePerSoldier = damagePerSoldier;
    this->defencePerSoldier = defencePerSoldier;
    this->unitName = unitName;

}
Soldiers* Infantry::clonis(){
    return new Infantry(*this);
}

void Infantry::engage(){
    cout << "Engaging\n";
}

void Infantry::disengage(){
    cout << "Disengaging\n";
}

void Infantry::prepare(){
  cout<<"Perparing\n";
}

Infantry::~Infantry(){
   
}
std::string Infantry::getUnitName(){
    return this->unitName;
}
int Infantry::getDamagePerSoldier(){
    return this->damagePerSoldier;
}
int Infantry::getDefencePerSoldier(){
    return this->defencePerSoldier;
}
int Infantry::getHealthPerSoldier(){
    return this->healthPerSoldier;
}
int Infantry::getAmountOfSoldiersPerUnit(){
    return this->amountOfSoldiersPerUnit;
}
