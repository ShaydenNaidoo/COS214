//CONCRETE_PRODUCT
#ifndef OPENFIELDINFANTRY_H
#define OPENFIELDINFANTRY_H

#include "Infantry.h"

class OpenFieldInfantry: public Infantry {
	private:
		double ofBonus;

	public:
		OpenFieldInfantry( int health, int damage, int defence, std::string name);
		void move() override;
		void attack() override;
		void printDetails() override;
		void printUnitDetails() override;
		void add(UnitComponent* component) override;
		void remove(UnitComponent* component) override;
};

#endif