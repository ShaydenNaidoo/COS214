//CONCRETE_CREATOR
#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include <iostream>

#include "SoldierFactory.h"
#include "Infantry.h"

class InfantryFactory: public SoldierFactory {
    public:
        InfantryFactory(int amountOfSoldiersPerUnit);
        Soldiers* createUnit(int health, int damage, int defence, std::string name);
    


    
};

#endif