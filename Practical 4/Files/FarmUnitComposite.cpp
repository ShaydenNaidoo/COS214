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



