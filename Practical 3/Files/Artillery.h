//ABSTRACT_PRODUCT
#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "LegionUnit.h"

class Artillery: public LegionUnit {
    private:
        double range;
        double accuracy;

    public:
        Artillery(int health, int damage, int defence, std::string name, char type, char terrain, int currSold, double range, double accuracy);
        double getRange();
        double getAccuracy();
        virtual void move() = 0;
        virtual void attack() = 0;
        virtual void printUnitDetails() = 0;
		virtual void printDetails() = 0;

};

#endif