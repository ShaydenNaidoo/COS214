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
    return new Boatman(*this);
}


void Boatman::engage(){
    prepare();
    execute();
}
void Boatman::disengage(){
    retreat();
    rest();
}
void Boatman::execute(){
    switch (getUnitName()){
        case "Cannonmen":
            cout << "Executing attack: fires cannonball at the enemy O=***\n ";
            break;
        case "Musketeers":
            cout << "Perparing attack: fires musket at the enemy\n ";
            break;
        case "bukaniers":
            cout << "Executing attack: slashes enemy with Cutless\n ";
            break;
        default:
             cout<<"Perparing: sail ship toward enemy territory\n"
            break;
    }
}
void Boatman::prepare(){
    switch (getUnitName()){
        case "Cannonmen":
            cout << "Perparing attack: loads cannonball into cannon O=\n ";
            break;
        case "Musketeers":
            cout << "Perparing attack: loads musket\n ";
            break;
        case "bukaniers":
            cout << "Perparing attack: draws Cutless sword\n ";
            break;
            case "Sailor":
            cout << "Perparing: sail ship toward enemy territory\n";
            break;
        default:
            cout << "Perparing attack: charges enemy with boat paddel\n ";
            break;
    }
}
void Boatman::rest(){
    switch (getUnitName()){
        case "Cannonmen":
            cout << "Resting: rests in ship deck\n";
            break;
        case "Musketeers":
            cout << "Resting: sleeps in cabin quaters\n";
            break;
        case "bukaniers":
            cout << "Resting: drinks rum at the ship's bar\n";
            break;
        default:
            cout << "Resting: rests in crew quaters\n";
            break;
    }
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
int Boatman::getDefencePerSoldier(){
    return this->defencePerSoldier;
}
int Boatman::getHealthPerSoldier(){
    return this->healthPerSoldier;
}
int Boatman::getAmountOfSoldiersPerUnit(){
    return this->amountOfSoldiersPerUnit;
}
