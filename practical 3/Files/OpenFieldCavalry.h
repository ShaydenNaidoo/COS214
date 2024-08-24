#ifndef OPENFIELDCAVALRY_H
#define OPENFIELDCAVALRY_H

#include "Cavalry.h"
class OpenFieldCavalry: public Cavalry {
public:
OpenFieldCavalry(int health, int damage, int defence, std::string name, char terrain, int currSold, int speed, double flankingBonus, double ofBonus);

~OpenFieldCavalry();
private:
double ofBonus;
};

#endif // OPENFIELDCAVALRY_H