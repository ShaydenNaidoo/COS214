//PRODUCT
#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
#include "Memento.h"

class Soldiers { 
  private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        char type;
        int currSold;
        std::string unitName;
        int totalDamageTaken = 0;

    public:
        Soldiers();
        Soldiers(int health, int damage, int defence, std::string name, char type,int currSold);        
        int getHealthPerSoldier() const;
        int getDamagePerSoldier() const;
        int getDefencePerSoldier()const;
        std::string getUnitName() const;
        char getType() const;
        void setCurrNumSoldiers(int num);
        int getCurrNumSoldiers() const;
        void incrementDamage(int damage);
        void heal();
        int getDamageTaken();
        void engage();
        void disengage();
        Memento* militusMemento();
        void vivificaMemento(Memento* mem);
        virtual Soldiers* clonis() = 0;
        virtual void prepare() = 0;
        virtual void execute() = 0;
        virtual void retreat() =0;
        virtual void rest() = 0;

        virtual ~Soldiers(){}
};


#endif
