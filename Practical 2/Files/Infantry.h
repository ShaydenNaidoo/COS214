//CONCRETE_PRODUCT
#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
#include "Soldiers.h"

class Infantry: public Soldiers{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        std::string unitName;

    public:
        Infantry();
        Infantry(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName);
        ~Infantry();
        Soldiers* clonis();
        void engage();
        void disengage();
        void prepare();
        void execute();
        void retreat();
        void rest();
        int getHealthPerSoldier();
        int getDamagePerSoldier();
        int getDefencePerSoldier();
        int getAmountOfSoldiersPerUnit();
        std::string getUnitName();
       

};

#endif