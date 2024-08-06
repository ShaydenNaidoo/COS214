//CONCRETE_PRODUCT
#ifndef BOATMAN_H
#define BOATMAN_H

#include <iostream>
#include "Soldiers.h"

class Boatman: protected Soldiers{
public:
Boatman();
Boatman( Boatman* boatMan);// added copy constructor -Shayden for Clone method
Boatman(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName);
Soldiers* clonis();
Boatman();
~Boatman();

protected:
void engage();
void disengage();
void prepare();
void execute();
void retreat();
void rest();
};

#endif