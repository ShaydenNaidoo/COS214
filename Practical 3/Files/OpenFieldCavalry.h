//CONCRETE_PRODUCT
#ifndef OPENFIELDCAVALRY_H
#define OPENFIELDCAVALRY_H

#include "Cavalry.h"

class OpenFieldCavalry: public Cavalry {
    private:
        double ofBonus;
    
    public:
        OpenFieldCavalry(int health, int damage, int defence, std::string name, int speed);
        void move() override;
        void attack() override;
        void printDetails() override;
        void printUnitDetails() override;
        void add(UnitComponent* component) override;
        void remove(UnitComponent* component) override;
        

};

#endif