//MEMENTO
#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>

class Memento{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int currSold;
        char type;
        std::string unitName;
        int currSold;
        int totalDamageTaken = 0;


    public:
        Memento(int health, int damage, int defence, char type, std::string name, int num, int total);   
        int getHealthPerSoldier();
        int getDamagePerSoldier();
        int getDefencePerSoldier();
        int getCurrNumSoldiers();
        char getType();
        std::string getUnitName();
        int getcurrSold();
        int getDamageTaken();
        bool operator==(Memento* mem);

};


#endif //COS214_MEMENTO_H
