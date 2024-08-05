//CONCRETE_CREATOR
#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include <iostream>
#include "SoldierFactory.h"
#include "Infantry.h"

class InfantryFactory: protected SoldierFactory {
    public:
        Soldiers* createUnit(int healthPerSoldier, int dammagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName);
        int calculateTotalHealthPerUnit();
        int calculateTotalDammagePerUnit();
        int calculateTotalDefencePerUnit();

    
};

#endif