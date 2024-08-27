//CONCRETE_PRODUCT
#ifndef WOODLAND_ARTILLERY_H
#define WOODLAND_ARTILLERY_H

#include "Artillery.h"

class WoodlandArtillery: public Artillery {
    private:
        double wBonus;
    
    public:
        WoodlandArtillery(int health, int damage, int defence, std::string name, int range, int accuracy);
        void move();
        void attack();
        void printDetails();
        void printUnitDetails();
        
        void add(UnitComponent* component);
        void remove(UnitComponent* component);
};

#endif