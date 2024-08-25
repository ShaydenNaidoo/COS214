#include <iostream>

#include "InfantryFactory.h"
#include "Infantry.h"
#include "ShieldBearer.h"
#include "Soldiers.h"
#include "MainManager.h"
#include "BattleManager.h"

using namespace std;


int main(){
    MainManager factory(100);
    factory.createUnit(1,25,15,50,"Dai Ichi-butai Unit");
    factory.createUnit(0,10,25,5,"Dai Rei-butai Unit");
    factory.createUnit(0,10,25,5,"Mina's Unit");
    factory.createUnit(2,10,25,5,"Dai Ni-butai Unit");
    factory.createUnit(1,15,2,10,"Hibeno's Unit");
    factory.printSummary();
    factory.printUnits();
    factory.titusComands();
    std::cout << "testing clone" << std::endl;
    factory.cloneSoldier(0);
    factory.printUnit(0);
    factory[0]->setCurrNumSoldiers(50);
    factory.printUnit(0);
    std::cout << "testing memento" << std::endl;
    std::cout << "Militus Memento" << std::endl;
    factory.militusMemento();
    factory.printUnit(0);
    std::cout << "Vivifa Memento" << std::endl;
    factory.vivifaMemento();
    factory.printUnit(0);

    BattleManager x;
    x.kill();
    x.Battle();

    return 0;
}