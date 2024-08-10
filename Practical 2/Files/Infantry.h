//CONCRETE_PRODUCT
#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
#include "Soldiers.h"

class Infantry: public Soldiers{
    public:
        Infantry(int health, int damage, int defence, std::string name,int currNumSoldiers);  
        Infantry(const Infantry& other);
        Soldiers* clonis() override;

    private:
        void prepare() override;
        void execute() override;
        void retreat() override;
        void rest() override;

};

#endif
