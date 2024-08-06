//PRODUCT
#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
#include <string>

class Soldiers { 
    protected:
     int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;
    public:
        Soldiers(int amountOfSoldiersPerUnit){this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;}
        virtual int getHealthPerSoldier() = 0;
        virtual int getDamagePerSoldier() = 0;
        virtual int getDefencePerSoldier() = 0;
        virtual int getAmountOfSoldiersPerUnit() = 0;
        virtual std::string getUnitName() = 0;
        // virtual void engage() = 0;
        // virtual void disengage() = 0;
        // virtual Soldiers* clonis() = 0;m
        // virtual void prepare() = 0;
        // virtual void execute() = 0;
        // virtual void retreat() =0;
        // virtual void rest() = 0;

};


#endif //COS214_SOLDIERS_H
