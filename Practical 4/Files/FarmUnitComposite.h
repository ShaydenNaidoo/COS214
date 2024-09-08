#ifndef FARMUNITCOMPOSITE_H
#define FARMUNITCOMPOSITE_H

#include <vector>
#include "FarmUnit.h"

class FarmUnitComposite : public FarmUnit {
public:
    FarmUnitComposite(string farmName) : farmName(farmName) {};
    ~FarmUnitComposite();

    void add(FarmUnit* unit);
    void remove(FarmUnit* unit);
    int getTotalCapacity();
    string getCropType();
    string getSoilStateName();
    void printUnitDetails();
private:
    std::vector<FarmUnit*> farmUnits;
    string farmName;
};

#endif // FARMUNITCOMPOSITE_H