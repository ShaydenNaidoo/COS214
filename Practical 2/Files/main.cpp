#include <iostream>

#include "InfantryFactory.h"
#include "Soldiers.h"

using namespace std;


int main(){
    InfantryFactory x;
    Soldiers *unit;
    unit = x.createUnit(10,20,30,40,"Test Unit");

    delete unit;
    unit = nullptr;

    

    return 0;
}