#include "Infantry.h"
#include <iostream>
#include <string>
using namespace std;
Infantry::Infantry(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName){
     this->healthPerSoldier = healthPerSoldier;
            this->damagePerSoldier = damagePerSoldier;
            this->defencePerSoldier = defencePerSoldier;
            this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;
            this->unitName = unitName;
            

            std::cout << "Health: " << this->healthPerSoldier << "\n"
            << "Dammage: " << this->damagePerSoldier << "\n"
            << "Defence: " << this->defencePerSoldier << "\n"
            << "Amount: " << this->amountOfSoldiersPerUnit << "\n"
            << "Unit Name: " << this->unitName << "\n";
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
    cout << "Preparing\n";
}
