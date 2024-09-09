#ifndef BARN_H
#define BARN_H
#include <string>
#include <iostream>
#include"FarmUnit.h"
#include "FarmUnitComposite.h"
#include "FarmTraversal.h"
#include <stack>
#include <queue>
class Barn: public FarmUnit {
public:
    // Constructor
    Barn();
    // Destructor
    ~Barn();
    // Methods
    void add(FarmUnit* farmUnit);
    void remove(FarmUnit* farmUnit);
    void printUnitDetails();
    void printFarmDetails();
    int getTotalCapacity();
    std::string getCropType();
private:
int currstorage;

};

#endif // BARN_H