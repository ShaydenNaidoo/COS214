#ifndef ARTILLERY_H
#define ARTILLERY_H
#include "LegionUnit.h"
#include <string>
#include <iostream>
class Artillery: public LegionUnit {
public:
    // Constructor
    Artillery(int health, int damage, int defence, std::string name, char terrain, int currSold, double range, double accuracy): LegionUnit(health, damage, defence, name, terrain, currSold) {
        this->range = range;
        this->accuracy = accuracy;
    }
    virtual ~Artillery() ;
    virtual void move();
    virtual void attack();
    private:
        double range;
        double accuracy;
};

#endif // ARTILLERY_H