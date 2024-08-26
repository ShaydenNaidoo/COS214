//CONCRETE_PRODUCT
#ifndef WOODLAND_CAVALRY_H
#define WOODLAND_CAVALRY_H

#include "Cavalry.h"

class WoodlandCavalry: public Cavalry {
    private:
        double wBonus;
    
    public:
        WoodlandCavalry(int health, int damage, int defence, std::string name, int speed);
        void move();
        void attack();
        void printDetails();
        void printUnitDetails();
        void add(UnitComponent* component);
        void remove(UnitComponent* component);
};

#endif