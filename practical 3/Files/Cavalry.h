//ABSTRACT_PRODUCT
#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"

class Cavalry: public LegionUnit {
    private:
        double flankingBonus;
        int speed;

    public:
        Cavalry(int health, int defence, int damage, std::string name, char type, char terrain, int currSold, int speed, double flankingBonus);
        int getSpeed();
        virtual void move() = 0;
        virtual void attack() = 0;
        virtual void printUnitDetails() = 0;
		virtual void printDetails() = 0;
        

};

















#endif