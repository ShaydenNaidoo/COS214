
//made by Shayden Naidoo
//u23599236

#include <iostream>

#include "InfantryFactory.h"
#include "Infantry.h"
#include "ShieldBearer.h"
#include "Soldiers.h"
#include "MainManager.h"
#include "PrototypeRegistry.h"

using namespace std;

int main(){
    MainManager factory(100);
    factory.createUnit(1,25,15,50,"Hi-Shin Unit");
    factory.createUnit(0,10,25,5,"Gyoko-Hou Unit");
    factory.createUnit(0,10,25,5,"Ousen Unit");
    factory.createUnit(2,10,25,5,"Kyoukai Unit");
    factory.createUnit(1,15,2,10,"Gakou-ou Unit");
    factory.printSummary();
    factory.printUnits();
    // factory.createUnit(0,55,35,10,"Dai Rei-butai Unit");
    // factory.createUnit(1,45,25,10,"Dai Ichi-butai Unit");
    // factory.createUnit(2,69,55,10,"Dai Ni-butai Unit");
    
    factory.titusComands();

    return 0;
}