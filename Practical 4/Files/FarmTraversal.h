#ifndef FARMTRAVERSAL_H
#define FARMTRAVERSAL_H
#include <string>
#include <iostream>
#include"FarmUnitComposite.h"
#include "SoilState.h"
class FarmTraversal{
public:
virtual ~FarmTraversal() {};
virtual void findFarm(std::string farmName);
FarmUnitComposite* firstFarm();
FarmUnitComposite* nextFarm();
bool const isDone();
//FarmUnitComposite* currentFarm();
private:
    // Member variables
    FarmUnitComposite* currentFarm();
};

#endif // FARMTRAVERSAL_H