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

};


#endif
