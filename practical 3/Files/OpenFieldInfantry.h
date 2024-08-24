#ifndef OPENFIELDINFANTRY_H
#define OPENFIELDINFANTRY_H
#include <string>
#include <iostream>
// Include any necessary headers here
#include "Infantry.h"

class OpenFieldInfantry: public Infantry {
public:
  OpenFieldInfantry( int health, int damage, int defence, std::string name, char terrain, int currSold, int hTHCombatBonus, int armorBonus, double ofBonus);
    ~OpenFieldInfantry();
    void move();
    void attack();
private:
double ofBonus;
};

#endif // OPENFIELDINFANTRY_H