//CONCRETE_PRODUCT
#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include <iostream>
#include "Soldiers.h"

class ShieldBearer: protected Soldiers{
      public:
ShieldBearer();
ShieldBearer( ShieldBearer* ShieldBearer);// added copy constructor -Shayden for Clone method
ShieldBearer(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName);
Soldiers* clonis();
ShieldBearer();
~ShieldBearer();
    protected:
void engage();
void disengage();
void prepare();
void execute();
void retreat();
void rest();
};

#endif