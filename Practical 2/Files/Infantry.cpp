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
        if(unitName == 'Archers'){
        cout << "Disengaging: lowers bow\n";
    }
    else if(unitName =='Spearmen'){
        cout << "Disengaging: lowers spear\n";
    }
    else if(unitName =='Swordsmen'){
        cout << "Disengaging: lowers sword\n";
    }
    else{
        cout << "Disengaging: lowers fists\n";
    }
    retreat();
    rest();
}
void Infantry::prepare(){
        if(unitName == 'Archers'){
        cout << "Preparing: gets onto highground\n";
    }
    else{
           cout << "Preparing: forms attacking formation around enemy\n";
    }
 
void Infantry::execute(){

    if(unitName == 'Archers'){
        cout << "Execute: shoots enemy with a bow\n";
    }
    else if(unitName =='Spearmen'){
        cout << "Execute: charges enemy with a spear\n";
    }
    else if(unitName =='Swordsmen'){
        cout << "Execute: charges enemy with a sword\n";
    }
    else{
        cout << "Execute: charges enemy with fists\n";
    }
}

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
