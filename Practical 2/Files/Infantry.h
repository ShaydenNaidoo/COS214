//CONCRETE_PRODUCT
#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
#include "Soldiers.h"

class Infantry: public Soldiers{
    public:
        
        Infantry(int health, int damage, int defence, std::string name);  
        Infantry(const Infantry &i); // added copy constructor -Shayden for Clone method
        Soldiers* clonis();
    private:
        void prepare();
        void execute();
        void retreat();
        void rest();

};

#endif