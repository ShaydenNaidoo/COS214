//CONCRETE_PRODUCT
#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include <iostream>
#include "Soldiers.h"

class ShieldBearer: public Soldiers{
    public:
        ShieldBearer(int health, int damage, int defence, std::string name,int currSold);
        ShieldBearer(const ShieldBearer& s);
        Soldiers* clonis();
    
    private:
        void prepare() override;
        void execute() override;
        void retreat() override;
        void rest() override;
};

#endif