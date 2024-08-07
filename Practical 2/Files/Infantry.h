//CONCRETE_PRODUCT
#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
#include "Soldiers.h"

class Infantry: public Soldiers{
    public:
        Infantry( Infantry* infantry);// added copy constructor -Shayden for Clone method
        Infantry(int health, int damage, int defence, std::string name);  
        Soldiers* clonis();
    private:
        void prepare();
        void execute();
        void retreat();
        void rest();

};

#endif