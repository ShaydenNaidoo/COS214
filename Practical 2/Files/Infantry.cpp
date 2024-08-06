#include "Infantry.h"
#include <iostream>
#include <string>
using namespace std;
Infantry::Infantry():Soldiers(){ //default constructor just in case -- can be removed
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
    prepare();
    execute();
}
void Infantry::disengage(){
    retreat();
    rest();
}
void Infantry::prepare(){
    switch(getUnitName()){
        case 'Archers':
            cout << "Preparing: gets onto highground\n";
            cout << "Preparing: aims at enemy\n";
            break;
        case 'Spearmen':
            cout << "Preparing: aims spear at enemy\n";
            break;
        case 'Swordsmen':
            cout << "Preparing: draws sword\n";
            break;
        default:
            cout << "Preparing: takes a fighting stance\n";
            break;
    }
}
 
void Infantry::execute(){
switch(getUnitName()){
        case 'Archers':
            cout << "Execute: shoots enemy with a bow\n";
            break;
        case 'Spearmen':
            cout << "Execute: charges enemy with a spear\n";
            break;
        case 'Swordsmen':
            cout << "Execute: slashes enemy with a sword\n";
            break;
        default:
            cout << "Execute: attacks enemy with fists\n";
            break;
    }
}
void Infantry::retreat(){
    switch(getUnitName()){
        case 'Archers':
            cout << "Retreating: lowers bow\n";
            break;
        case 'Spearmen':
            cout << "Retreating: lowers spear\n";
            break;
        case 'Swordsmen':
            cout << "Retreating: lowers sword\n";
            break;
        default:
            cout << "Retreating: lowers fists\n";
            break;
    }
    cout << "Retreating: runs back to the Infantry camp\n";
}
void Infantry::rest(){
    cout << "Resting: recooparates at the Infantry camp\n";
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
