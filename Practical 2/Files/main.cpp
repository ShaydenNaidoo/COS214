#include <iostream>

#include "InfantryFactory.h"
#include "Infantry.h"
#include "ShieldBearer.h"
#include "Soldiers.h"
#include "FactoryManager.h"

using namespace std;


int main(){
    FactoryManager factory(100);

    factory.createUnit(1,25,15,50,"Hi-Shin Unit");
    factory.createUnit(0,10,25,5,"Gyoko-Hou Unit");
    factory.createUnit(0,10,25,5,"Ousen Unit");
    factory.createUnit(2,10,25,5,"Kyoukai Unit");
    factory.createUnit(1,15,2,10,"Gakou-ou Unit");
    factory.printSummary();
    factory.printUnits();


    return 0;
}