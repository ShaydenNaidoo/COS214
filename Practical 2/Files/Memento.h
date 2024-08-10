//MEMENTO
#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>

class Memento{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        char type;
        std::string unitName;

    public:
        Memento(int health, int damage, int defence, char type, std::string name);   
        int getHealthPerSoldier();
        int getDamagePerSoldier();
        int getDefencePerSoldier();
        char getType();
        std::string getUnitName();
        bool operator==(Memento* mem);

};


#endif //COS214_MEMENTO_H
