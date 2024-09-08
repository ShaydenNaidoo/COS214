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
    void printFarmDetails();
    void printFarmName();
    string getFarmName();
    void setFarmName(string farmName);
    int getFarmSize();
    FarmUnit* getFarmUnit(int index);
    void setFarmUnit(int index, FarmUnit* farmUnit);
    void setFarmUnits(std::vector<FarmUnit*> farmUnits);
    std::vector<FarmUnit*> getFarmUnits();


private:
    std::vector<FarmUnit*> farmUnits;
    string farmName;
};

#endif // FARMUNITCOMPOSITE_H