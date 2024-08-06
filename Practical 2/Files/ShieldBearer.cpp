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
      bRetreat = false; //default value
}
ShieldBearer::ShieldBearer(const ShieldBearer &shieldBearer){
    this->healthPerSoldier = infantry.healthPerSoldier;
    this->damagePerSoldier = infantry.damagePerSoldier;
    this->defencePerSoldier = infantry.defencePerSoldier;
    this->unitName = infantry.unitName;
    this->amountOfSoldiersPerUnit = infantry.amountOfSoldiersPerUnit;
    this->bRetreat = infantry.bRetreat;
}
ShieldBearer::ShieldBearer(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName):Soldiers(amountOfSoldiersPerUnit){
    this->healthPerSoldier = healthPerSoldier;
    this->damagePerSoldier = damagePerSoldier;
    this->defencePerSoldier = defencePerSoldier;
    this->unitName = unitName;
    this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;
    this->bRetreat = false; //default value
}
Soldiers* ShieldBearer::clonis(){
    return new ShieldBearer(*this);
}


void ShieldBearer::engage(){
prepare();
execute();
}

void ShieldBearer::disengage(){
    retreat();
    rest();
    }
}
void ShieldBearer::execute(){
    if(retreat == true){
      cout<<"cannot execute while retreating\n";
        return;
    }
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
      if(unitName == "defensiveBearers")
        cout << "Preparing: moves into blocking and defensive formation to protect other troop members from archers or other enemy attacks\n";
    else if (unitName == "offensiveBearers")
        cout << "Preparing: moves into blocking and attack formation in front of infantry troops to prepare to charge the enemy head-on\n";
    else if (unitName == "aggressiveBearers")
        cout << "Preparing: pushes to the frontline for full on press at the enemy\n";
    else{
        cout << "Preparing: stands at the frontlines as a human shield\n";
    }
}
void ShieldBearer::defend(){
    if(unitName == "defensiveBearers")
        cout << "Defending: moves back in formation to protect other troop members from archers or other enemy attacks\n";
    else if (unitName == "offensiveBearers")
        cout << "Defending: moves back in formation to protect infantry troops\n";
    else if (unitName == "aggressiveBearers")
        cout << "Defending: moves back in formation to protect other troop members from archers or other enemy attacks\n";
    else{
        cout << "Defending: moves back in formation to protect other troop members from archers or other enemy attacks\n";
    }
}
void ShieldBearer::retreat(){
    retreat = true;
    cout << "Retreating: secures exit path and waits for other troop members to retreat before retreating back to base\n";
}
void ShieldBearer::rest(){
    cout << "Resting: takes a break and waits for orders\n";
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
