#include <iostream>
#include <string>
#include <stack>
#include "FarmUnit.h"
#include "FarmUnitComposite.h"
#include "dfTravel.h"

using namespace std;

dfTravel::dfTravel(FarmUnitComposite* root) {
    farmUnits.push(root);
    current = root;
}

dfTravel::~dfTravel() {
    while (!farmUnits.empty()) {
        farmUnits.pop();
    }
}

void dfTravel::findFarm(std::string farmName) {
    while (!farmUnits.empty()) {
        FarmUnitComposite* farm = farmUnits.top();
        farmUnits.pop();
        
        // Check if the current farm matches the name
        if (farm->getFarmName() == farmName) {
            current = farm;
            return;
        } else {
            // Push all the child units of the current farm into the stack
            for (int i = 0; i < farm->getFarmSize(); i++) {
                farmUnits.push(dynamic_cast<FarmUnitComposite*>(farm->getFarmUnit(i)));
            }
        }
    }
}

FarmUnitComposite* dfTravel::firstFarm() {
    return current;
}

FarmUnitComposite* dfTravel::nextFarm() {
    if (farmUnits.empty()) {
        return nullptr;
    } else {
        current = farmUnits.top();
        farmUnits.pop();
        return current;
    }
}

bool dfTravel::isDone(){
    return farmUnits.empty();
}

// Optional currentFarm() function
// FarmUnitComposite* dfTravel::currentFarm() {
//     return current;
// }