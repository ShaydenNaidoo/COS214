#include <iostream>

#include "InfantryFactory.h"
#include "Infantry.h"
#include "ShieldBearer.h"
#include "Soldiers.h"

using namespace std;


int main(){

    InfantryFactory x(10);
    Soldiers *p = x.createUnit(10,10,10,"TestUnit");

    cout<< p->getUnitName() << endl
        << p->getType() << endl
        << p->getHealthPerSoldier() << endl
        << p->getDamagePerSoldier() << endl
        << p->getDefencePerSoldier() << endl << endl;

    cout << x.calculateTotalDamagePerUnit(p) << endl;

    
    

    return 0;
}