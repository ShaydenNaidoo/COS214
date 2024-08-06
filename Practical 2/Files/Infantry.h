//CONCRETE_PRODUCT
#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
#include "Soldiers.h"

class Infantry: protected Soldiers{

    public:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
        Infantry();
        Infantry( Infantry* infantry);// added copy constructor -Shayden for Clone method
        Infantry(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName);
        ~Infantry();
        Soldiers* clonis();
        void engage();
        void disengage();
        void prepare();
        void execute();
        void retreat();
        void rest();
   
       

};

#endif