//CONCRETE_PRODUCT
#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
#include "Soldiers.h"

class Infantry: public Soldiers{
    public:
        Infantry(int health, int damage, int defence, std::string name);  
       

};

#endif