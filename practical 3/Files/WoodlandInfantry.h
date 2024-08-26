//CONCRETE_PRODUCT
#ifndef WOODLANDINFANTRY_H
#define WOODLANDINFANTRY_H

#include "Infantry.h"

class WoodlandInfantry: public Infantry {
    private:
        double wBonus;  
    
    public:
        WoodlandInfantry(int health, int damage, int defence, std::string name);
        void move();
        void attack();
        void printDetails();
        void printUnitDetails();
        void add(UnitComponent* component);
        void remove(UnitComponent* component);
};

#endif