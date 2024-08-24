#ifndef RIVERBANKINFANTRY_H
#define RIVERBANKINFANTRY_H
#include "Infantry.h"
class RiverbankInfantry: public Infantry {
public:
RiverbankInfantry(int health, int damage, int defence, std::string name, char terrain, int currSold, int hTHCombatBonus, int armorBonus);
virtual ~RiverbankInfantry();
private:
double rbBonus;
};

#endif // RIVERBANKINFANTRY_H