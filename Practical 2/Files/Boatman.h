//CONCRETE_PRODUCT
#ifndef BOATMAN_H
#define BOATMAN_H

#include <iostream>
#include "Soldiers.h"

class Boatman: public Soldiers{
    public:
        Boatman(int health, int damage, int defence, std::string name);  
        Boatman(const Boatman& other);
        Soldiers* clonis();

    private:
        void prepare() override;
        void execute() override;
        void retreat() override;
        void rest() override;
};

#endif