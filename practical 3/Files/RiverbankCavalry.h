//CONCRETE_PRODUCT
#ifndef RIVERBANKCAVALRY_H
#define RIVERBANKCAVALRY_H

#include "Cavalry.h"

class RiverbankCavalry: public Cavalry {
    private:
        double rbBonus;

    public:
        RiverbankCavalry(int health, int defence, int damage, std::string name, int speed);
        void move();
        void attack();
        void printDetails();
        void printUnitDetails();
        void add(UnitComponent* component);
        void remove(UnitComponent* component);
};

#endif