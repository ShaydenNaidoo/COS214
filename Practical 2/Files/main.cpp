#include <iostream>

#include "InfantryFactory.h"
#include "Infantry.h"
#include "ShieldBearer.h"
#include "Soldiers.h"

using namespace std;


int main(){
   //running Prototype tests
    cout<<"||||||||||Running Prototype tests||||||||||"<<endl;
    PrototypeRegistry registry;
    registry.registerSoldierPrototype("InfantryClones", new Infantry(35,16,14,"Accensus(Infantry)"));
    registry.registerSoldierPrototype("BoatmanClones", new Boatman(45,25,10,"Naval fleet (Boatman)"));
     registry.registerSoldierPrototype("ShieldBearerClones", new ShieldBearer(50,5,30,"Scutummen (ShieldBearer)"));
    Soldiers* soldiers1 = registry.cloneSoldier("InfantryClones");
    Soldiers* soldiers2 = registry.cloneSoldier("InfantryClones");
    Soldiers* soldiers3 = registry.cloneSoldier("BoatmanClones");
    Soldiers* soldiers4 = registry.cloneSoldier("BoatmanClones");
    Soldiers* soldiers5 = registry.cloneSoldier("ShieldBearerClones");
    Soldiers* soldiers6 = registry.cloneSoldier("ShieldBearerClones");
    cout<<"List of prototypes:"<<endl;
    registry.listSoldierPrototypes();
    cout<<"|||||||||| Titus: engage InfantryClones! ||||||||||"<<endl;
    soldiers1->engage();
    soldiers2->engage();
 cout<<"|||||||||| Titus: disengage InfantryClones! ||||||||||"<<endl;
    soldiers1->disengage();
    soldiers2->disengage();
    cout<<"|||||||||| Titus: engage BoatmanClones! ||||||||||"<<endl;
    soldiers3->engage();
    soldiers4->engage();
    cout<<"|||||||||| Titus: disengage BoatmanClones! ||||||||||"<<endl;
    soldiers3->disengage();
    soldiers4->disengage();
    cout<<"|||||||||| Titus: engage ShieldBearerClones! ||||||||||"<<endl;
    soldiers5->engage();
    soldiers6->engage();
    cout<<"|||||||||| Titus: disengage ShieldBearerClones! ||||||||||"<<endl;
    soldiers5->disengage();
    soldiers6->disengage();
    cout<<"||||||||||End of Prototype tests:||||||||||"<<endl;  
    

    return 0;
}