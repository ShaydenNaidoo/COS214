//CONCRETE_PRODUCT
#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
#include "Soldiers.h"

class Infantry: public Soldiers{
    private:
        int healthPerSoldier;
        int dammagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;

    public:
        Infantry(int healthPerSoldier, int dammagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName){
            this->healthPerSoldier = healthPerSoldier;
            this->dammagePerSoldier = dammagePerSoldier;
            this->defencePerSoldier = defencePerSoldier;
            this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;
            this->unitName = unitName;

            std::cout << "Health: " << this->healthPerSoldier << "\n"
            << "Dammage: " << this->dammagePerSoldier << "\n"
            << "Defence: " << this->defencePerSoldier << "\n"
            << "Amount: " << this->amountOfSoldiersPerUnit << "\n"
            << "Unit Name: " << this->unitName << "\n";
        }


};

#endif