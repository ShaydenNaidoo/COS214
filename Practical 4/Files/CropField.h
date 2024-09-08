#ifndef CROPFIELD_H
#define CROPFIELD_H
#include <string>
#include <iostream>
#include"FarmUnit.h"
#include "SoilState.h"
class CropField: public FarmUnit {
public:
    // Constructor
    CropField();

    // Destructor
    ~CropField();

    // Methods
    void plantCrop(const std::string& cropType, int totalCapacity,std::string soilStateName);
    void harvestCrop();

private:
    // Member variables
    std::string cropType;
    int totalCapacity;
    SoilState soilState;
};

#endif // CROPFIELD_H