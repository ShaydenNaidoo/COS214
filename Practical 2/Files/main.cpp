#include <iostream>

#include "InfantryFactory.h"
#include "Infantry.h"
#include "ShieldBearer.h"
#include "Soldiers.h"
#include "MainManager.h"
#include "PrototypeRegistry.h"
#include "BoatmanFactory.h"
#include "ShieldBearerFactory.h"
#include "Memento.h"
#include "SoldierFactory.h"
#include "Soldiers.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "Infantry.h"
#include <vector>
using namespace std;


int main(){
    std::cout << "object diagram instance" << std::endl;
    InfantryFactory* inFactory = new InfantryFactory(100);
    ShieldBearerFactory* sBFactory = new ShieldBearerFactory(100);
    BoatmanFactory* bFactory = new BoatmanFactory(100);
   Soldiers* ichiUnit = inFactory -> createUnit(10,25,5,"Dai Ichi-butai Unit");
   Soldiers*reiUnit = sBFactory -> createUnit(25,15,50,"Dai Rei-butai Unit");
   Soldiers* sanUnit = bFactory -> createUnit(10,25,5,"Dai San-butai Unit");
   vector<Soldiers*> units;
    units.push_back(ichiUnit);
    units.push_back(reiUnit);
    units.push_back(sanUnit);
    for(auto i: units){
        i->prepare();
        i->execute();
        i->retreat();
        i->rest();
    }
    cout << "Memento testing" << endl;
    vector<Memento*> memHistory;
    memHistory.push_back(ichiUnit->militusMemento());
     cout << "current ichiUnit" << endl;
     ichiUnit->setCurrNumSoldiers(50);
    ichiUnit->printUnit();
 
         vector<Soldiers*> clonedUnits;
    clonedUnits.push_back(ichiUnit->clonis());
      cout << "cloned unit" << endl;  
    cout << "restoring ichiUnit" << endl;
    clonedUnits[0]->printUnit();
    ichiUnit->vivificaMemento(memHistory[0]);
    ichiUnit->printUnit();
    cout << "Maintesting" << endl;
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

    
 
  
    return 0;
}