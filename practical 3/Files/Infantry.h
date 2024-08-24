#ifndef INFANTRY_H
#define INFANTRY_H

// Include any necessary headers here
#include "LegionUnit.h"
#include <string>
#include <iostream>
class Infantry: public LegionUnit {
public:
Infantry(int health, int damage, int defence, std::string name, char terrain, int currSold, int hTHCombatBonus, int armorBonus);

virtual ~Infantry();
virtual void move();
virtual void attack();

private:
  std::string unitName;
		char terrain;
        int hTHCombatBonus;
        int armorBonus;

};

#endif // INFANTRY_H