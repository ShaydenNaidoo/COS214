//CONCRETE_PRODUCT
#ifndef RIVERBANKARTILLERY_H
#define RIVERBANKARTILLERY_H

#include "Artillery.h"

class RiverbankArtillery: public Artillery {
    private:
        double rbBonus;
    
    public:
        RiverbankArtillery(int health, int damage, int defence, std::string name, int range, int accuracy);
        void move();
        void attack();
        void printDetails();
        void printUnitDetails();
    
};

#endif