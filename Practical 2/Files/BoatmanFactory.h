//CONCRETE_CREATOR
#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include <iostream>

#include "SoldierFactory.h"
#include "Boatman.h"

class BoatmanFactory: protected SoldierFactory{
    public:
        BoatmanFactory(int amountOfSoldiersPerUnit);
        Soldiers* createUnit(int health, int damage, int defence, std::string name);
   

};

#endif