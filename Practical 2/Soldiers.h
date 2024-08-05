//PRODUCT
#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
#include <string>

class Soldiers {
private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiers;
    std::string unitName;
    virtual void engage() = 0;
    virtual void disengage() = 0;
    virtual Soldiers* clonis() = 0;

private:
    virtual void prepare() = 0;
    virtual void execute() = 0;
    virtual void retreat() =0;
    virtual void rest() = 0;

};


#endif //COS214_SOLDIERS_H
