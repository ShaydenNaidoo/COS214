//PRODUCT
#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>

class Soldiers { 
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        char type;
        std::string unitName;

    public:
        Soldiers(int health, int damage, int defence, std::string name, char type);        
        int getHealthPerSoldier();
        int getDamagePerSoldier();
        int getDefencePerSoldier();
        std::string getUnitName();
        char getType();



        // virtual void engage() = 0;
        // virtual void disengage() = 0;
        // virtual Soldiers* clonis() = 0;
        // virtual void prepare() = 0;
        // virtual void execute() = 0;
        // virtual void retreat() =0;
        // virtual void rest() = 0;

};


#endif
