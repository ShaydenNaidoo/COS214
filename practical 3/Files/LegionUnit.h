//ABSTRACT_PRODUCT_INTERFACE
#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

#include <iostream>
#include "UnitComponent.h"
class LegionUnit:public UnitComponent {
	private:
        std::string name;
		char type;
        char terrain;
		int currSold;
		int healthPerSoldier;
		int defencePerSoldier;
        int damagePerSoldier;
		int damageTaken = 0;

	public:
		LegionUnit(int health, int defence, int damage, std::string name, char type, char terrain, int currSold);
		std::string getUnitName() const;
		char getTerrain() const;
		int getHealthPerSoldier() const;
		int getDamagePerSoldier() const;
		int getDefencePerSoldier()const;
		int getCurrNumSoldiers() const;
		int getDamageTaken() const;
		void setCurrNumSoldiers(int num);
		void incrementDamage(int damage);
		virtual void move() =0;
		virtual void attack() = 0;
		virtual void printUnitDetails() = 0;
		virtual void printDetails() = 0;
	
};

#endif