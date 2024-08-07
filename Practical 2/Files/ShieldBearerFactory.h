//CONCRETE_CREATOR
#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include <iostream>

#include "SoldierFactory.h"
#include "ShieldBearer.h"

class ShieldBearerFactory: public SoldierFactory{
    public:
        ShieldBearerFactory(int amountOfSoldiersPerUnit);
        Soldiers* createUnit(int health, int damage, int defence, std::string name);
 

};

#endif