
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
    factory.titusComands();
    std::cout<<"clone test"<<std::endl;
    factory.cloneSoldier(0);
    factory.printUnit(0);
    factory[0]->setCurrNumSoldiers(50);
    factory.printUnit(0);
    std::cout << "Militus Memento" << std::endl;
    factory.militusMemento();
    factory.printUnit(0);
    std::cout << "Vivifa Memento" << std::endl;
    factory.vivifaMemento();
    factory.printUnit(0);
    return 0;
}