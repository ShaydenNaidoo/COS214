//CONCRETE_CREATOR
#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include <iostream>
#include "SoldierFactory.h"

class BoatmanFactory: protected SoldierFactory{
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();

};

#endif