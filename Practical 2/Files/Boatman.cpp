#include "Boatman.h"
#include <iostream>
#include <string>
using namespace std;
Boatman::Boatman():Soldiers(){ //default constructor just in case -- can be removed
    this->healthPerSoldier = 0;
    this->damagePerSoldier = 0;
    this->defencePerSoldier = 0;
    this->unitName = "";
    this->amountOfSoldiersPerUnit = 0;
}
Boatman::Boatman(const ShieldBearer &shieldBearer){
    this->healthPerSoldier = infantry.healthPerSoldier;
    this->damagePerSoldier = infantry.damagePerSoldier;
    this->defencePerSoldier = infantry.defencePerSoldier;
    this->unitName = infantry.unitName;
    this->amountOfSoldiersPerUnit = infantry.amountOfSoldiersPerUnit;
}
Boatman::Boatman(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName):Soldiers(amountOfSoldiersPerUnit){
    this->healthPerSoldier = healthPerSoldier;
    this->damagePerSoldier = damagePerSoldier;
    this->defencePerSoldier = defencePerSoldier;
    this->unitName = unitName;

}
Soldiers* Boatman::clonis(){
    return new Infantry(*this);
}

void Boatman::engage(){
    cout << "Engaging: fires cannonball O=***\n ";
}

void Boatman::disengage(){
    cout << "Disengaging: Disengages from the cannon\n";
}

void Boatman::prepare(){
  cout<<"Perparing: mops the poopdeck\n";
}
void Boatman::rest(){
    cout << "Resting: camps in ship quarters\n";
}
void Boatman::retreat(){
    cout << "Reatreating: helps the crew return the ship to shore \n";
}
Boatman::~Boatman(){
   
}
std::string Boatman::getUnitName(){
    return this->unitName;
}
int Boatman::getDamagePerSoldier(){
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
