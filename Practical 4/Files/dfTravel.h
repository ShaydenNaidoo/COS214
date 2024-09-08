#ifndef DFTRAVEL_H
#define DFTRAVEL_H
#include <string>
#include <iostream>
#include"FarmUnit.h"
#include "FarmTraversal.h"
#include <stack>
class dfTravel: public FarmTraversal {
public:
dfTravel(FarmUnitComposite* root);
    ~dfTravel();
    void findFarm(std::string farmName);
    FarmUnitComposite* firstFarm();
    FarmUnitComposite* nextFarm();
    bool isDone();
    FarmUnitComposite* currentFarm();
private:
    // Member variables
    std::stack<FarmUnitComposite*> farmUnits;
    FarmUnitComposite* current;

};

#endif // DFTRAVEL_H