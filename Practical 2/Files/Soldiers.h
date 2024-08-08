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
        Soldiers();
        Soldiers(int health, int damage, int defence, std::string name, char type);        
        int getHealthPerSoldier() const;
        int getDamagePerSoldier() const;
        int getDefencePerSoldier()const;
        std::string getUnitName() const;
        char getType() const;
        void engage();
        void disengage();
        virtual Soldiers* clonis() = 0;
        virtual void prepare() = 0;
        virtual void execute() = 0;
        virtual void retreat() =0;
        virtual void rest() = 0;
        virtual ~Soldiers(){}
};


#endif
