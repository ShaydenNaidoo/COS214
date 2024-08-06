//CONCRETE_PRODUCT
#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
#include "Soldiers.h"

class Infantry: public Soldiers{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;

    public:
        Infantry(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName){
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

        int getHealthPerSoldier(){return healthPerSoldier;}
        int getDamagePerSoldier(){return damagePerSoldier;}
        int getDefencePerSoldier(){return defencePerSoldier;}
        int getAmountOfSoldiersPerUnit(){return amountOfSoldiersPerUnit;}
        std::string getUnitName(){return unitName;}


};

#endif