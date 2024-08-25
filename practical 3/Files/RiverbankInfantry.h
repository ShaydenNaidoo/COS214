//CONCRETE_PRODUCT
#ifndef RIVERBANKINFANTRY_H
#define RIVERBANKINFANTRY_H

#include "Infantry.h"

class RiverbankInfantry: public Infantry {
    private:
        double rbBonus;
    
    public:
        RiverbankInfantry(int health, int defence, int damage, std::string name);
        void move();
        void attack();
        void printDetails();
        void printUnitDetails();

};

#endif