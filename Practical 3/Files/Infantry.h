//ABSTRACT_PRODUCT
#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"

class Infantry: public LegionUnit {
	private:
		int hTHCombatBonus;
		int armorBonus;
	
	
	public:
		Infantry(int health, int damage, int defence, std::string name, char type, char terrain, int currSold, int hTHCombatBonus, int armorBonus);
		virtual void move() = 0;
		virtual void attack() = 0;
		virtual void printUnitDetails() = 0;
		virtual void printDetails() = 0;

};

#endif