//CONCRETE_PRODUCT
#ifndef OPENFIELDCAVALRY_H
#define OPENFIELDCAVALRY_H

#include "Cavalry.h"

class OpenFieldCavalry: public Cavalry {
    private:
        double ofBonus;
    
    public:
        OpenFieldCavalry(int health, int damage, int defence, std::string name, int speed);
        void move();
        void attack();
        void printDetails();
        void printUnitDetails();

};

#endif