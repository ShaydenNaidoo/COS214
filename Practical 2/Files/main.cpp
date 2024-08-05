#include <iostream>

#include "InfantryFactory.h"

using namespace std;


int main(){
    InfantryFactory x;
    x.createUnit(10,20,30,40,"Test Unit");
    

    return 0;
}