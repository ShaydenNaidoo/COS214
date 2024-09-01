#include "Ambush.h"

// void Ambush::engage(){
//     std::cout << "Infantry units are surounding the enemy encampment.\n"
//     << "Artillery units are preparing to bombard the encampment\n"
//     << "Artillery units have begun their bombardment\n"
//     << "Infantry units have begun their attack\n";

// }
void Ambush::engage(LegionFactory* factory, Legion* legion){
    UnitComponent* infantry =  factory->createInfantry(100, 50, 50, "Ambush Infantry");
    legion->add(infantry);
    std::cout << "A new team of Infantry units has been dispatched to ambush the enemy encampment.\n";
}

bool Ambush::operator==(char x){
    if(x == 'A') return true;
    else return false;
    
}