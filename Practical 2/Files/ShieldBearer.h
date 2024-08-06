//CONCRETE_PRODUCT
#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include <iostream>
#include "Soldiers.h"

class ShieldBearer: public Soldiers{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldiersPerUnit;
        int amountOfSoldiersPerUnit;
        std::string unitName;

};

#endif