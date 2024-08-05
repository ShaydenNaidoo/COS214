//CONCRETE_PRODUCT
#ifndef BOATMAN_H
#define BOATMAN_H

#include <iostream>
#include "Soldiers.h"

class Boatman: public Soldiers{
    private:
        int healthPerSoldier;
        int dammagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;

};

#endif