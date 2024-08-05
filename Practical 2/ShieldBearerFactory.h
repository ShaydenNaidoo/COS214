//CONCRETE_CREATOR
#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include <iostream>
#include "SoldierFactory.h"

class ShieldBearer: protected SoldierFactory{
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDammagePerUnit();
        int calculateTotalDefencePerUnit();

};

#endif