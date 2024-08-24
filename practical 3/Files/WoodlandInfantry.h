#ifndef WOODLANDINFANTRY_H
#define WOODLANDINFANTRY_H

// Include any necessary headers here
#include "Infantry.h"
class WoodlandInfantry: public Infantry {
public:
    WoodlandInfantry();
    WoodlandInfantry(int health, int damage, int defence, std::string name, char terrain, int currSold, int hTHCombatBonus, int armorBonus, double wBonus);
    virtual ~WoodlandInfantry();
    void move();
    void attack();

private:
double wBonus;  

};

#endif // WOODLANDINFANTRY_H