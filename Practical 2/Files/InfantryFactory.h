//CONCRETE_CREATOR
#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include <iostream>
#include "SoldierFactory.h"
#include "Infantry.h"

class InfantryFactory: protected SoldierFactory {
    public:
        Soldiers* createUnit();
        Soldiers* getIndex(std::size_t x);
        int calculateTotalHealthPerUnit(Soldiers *soldier);
        int calculateTotalDamagePerUnit(Soldiers *soldier);
        int calculateTotalDefencePerUnit(Soldiers *soldier);


    
};

#endif