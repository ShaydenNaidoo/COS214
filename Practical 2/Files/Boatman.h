//CONCRETE_PRODUCT
#ifndef BOATMAN_H
#define BOATMAN_H

#include <iostream>
#include "Soldiers.h"

class Boatman: public Soldiers{
    public:
        Boatman(int health, int damage, int defence, std::string name);
  
  
  
    // protected:
    //     void engage();
    //     void disengage();
    //     void prepare();
    //     void execute();
    //     void retreat();
    //     void rest();
};

#endif