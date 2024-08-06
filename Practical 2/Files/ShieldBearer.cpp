#include "ShieldBearer.h"
#include <iostream>
#include <string>
using namespace std;
ShieldBearer::ShieldBearer():Soldiers(){ //default constructor just in case -- can be removed
    this->healthPerSoldier = 0;
    this->damagePerSoldier = 0;
    this->defencePerSoldier = 0;
    this->unitName = "";
    this->amountOfSoldiersPerUnit = 0;
}
ShieldBearer::ShieldBearer(const ShieldBearer &shieldBearer){
    this->healthPerSoldier = infantry.healthPerSoldier;
    this->damagePerSoldier = infantry.damagePerSoldier;
    this->defencePerSoldier = infantry.defencePerSoldier;
    this->unitName = infantry.unitName;
    this->amountOfSoldiersPerUnit = infantry.amountOfSoldiersPerUnit;
}
ShieldBearer::ShieldBearer(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName):Soldiers(amountOfSoldiersPerUnit){
    this->healthPerSoldier = healthPerSoldier;
    this->damagePerSoldier = damagePerSoldier;
    this->defencePerSoldier = defencePerSoldier;
    this->unitName = unitName;
}
Soldiers* ShieldBearer::clonis(){
    return new ShieldBearer(*this);
}



void ShieldBearer::disengage(){
    cout << "Disengaging: lowers shield\n";
}
void ShieldBearer::execute(){
    if(unitName == "defensiveBearers")
        cout << "Executing: blocks enemy attacks \n";
    else if (unitName == "offensiveBearers")
        cout << "Executing: knocks enemy with shield\n";
    else if (unitName == "aggressiveBearers")
        cout << "Executing: uses shield to push enemy back\n";
    else{
        cout << "Executing: uses body to block enemy\n";
    }
}
void ShieldBearer::prepare(){
  cout<<"Perparing: form \n";
}

ShieldBearer::~ShieldBearer(){
   
}
std::string ShieldBearer::getUnitName(){
    return this->unitName;
}
int ShieldBearer::getDamagePerSoldier(){
    return this->damagePerSoldier;
}
int ShieldBearer::getDefencePerSoldier(){
    return this->defencePerSoldier;
}
int ShieldBearer::getHealthPerSoldier(){
    return this->healthPerSoldier;
}
int ShieldBearer::getAmountOfSoldiersPerUnit(){
    return this->amountOfSoldiersPerUnit;
}
