#include "FarmUnitComposite.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "FarmUnit.h"

using namespace std;

void FarmUnitComposite::add(FarmUnit* unit) {
    farmUnits.push_back(unit);
}

void FarmUnitComposite::remove(FarmUnit* unit) {
    farmUnits.erase(std::remove(farmUnits.begin(), farmUnits.end(), unit), farmUnits.end());
}

int FarmUnitComposite::getTotalCapacity() {
    int totalCapacity = 0;
    for (int i = 0; i < farmUnits.size(); i++) {
        totalCapacity += farmUnits[i]->getTotalCapacity();
    }
    return totalCapacity;
}

string FarmUnitComposite::getCropType() {
    string cropType = "";
    for (int i = 0; i < farmUnits.size(); i++) {
        cropType += farmUnits[i]->getCropType() + " ";
    }
    return cropType;
}

string FarmUnitComposite::getSoilStateName() {
    string soilStateName = "";
    for (int i = 0; i < farmUnits.size(); i++) {
        soilStateName += farmUnits[i]->getSoilStateName() + " ";
    }
    return soilStateName;
}

void FarmUnitComposite::printUnitDetails() {
    for (int i = 0; i < farmUnits.size(); i++) {
        farmUnits[i]->printUnitDetails();
    }
}

void FarmUnitComposite::printFarmDetails() {
    cout << "Farm Name: " << farmName << endl;
    cout << "Total Capacity: " << getTotalCapacity() << endl;
    cout << "Crop Type: " << getCropType() << endl;
    cout << "Soil State: " << getSoilStateName() << endl;
    cout << "Farm Size: " << farmUnits.size() << endl;
    cout << "Farm Units: " << endl;
    printUnitDetails();
}

void FarmUnitComposite::printFarmName() {
    cout << "Farm Name: " << farmName << endl;
}

string FarmUnitComposite::getFarmName() {
    return farmName;
}

void FarmUnitComposite::setFarmName(string farmName) {
    this->farmName = farmName;
}

int FarmUnitComposite::getFarmSize() {
    return farmUnits.size();
}

FarmUnit* FarmUnitComposite::getFarmUnit(int index) {
    return farmUnits[index];
}

void FarmUnitComposite::setFarmUnit(int index, FarmUnit* farmUnit) {
    farmUnits[index] = farmUnit;
}

void FarmUnitComposite::setFarmUnits(std::vector<FarmUnit*> farmUnits) {
    this->farmUnits = farmUnits;
}

std::vector<FarmUnit*> FarmUnitComposite::getFarmUnits() {
    return farmUnits;
}
