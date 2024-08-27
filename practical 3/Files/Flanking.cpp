#include "Flanking.h"

// void Flanking::engage(){
//     std::cout << "Infantry units are meeting the enemy at the front.\n"
//     << "Artillery units are preparing to bombard the enemy\n"
//     << "Cavalry units are moving to the enemy\'s flank\n"
//     << "Artillery units have begun their bombardment\n"
//     << "Infantry units have begun their attack\n"
//     << "Cavalry Units have begun their attack\n";
    

void Flanking::engage(LegionFactory* factory,   Legion* legion){
    UnitComponent* cavalry  = factory->createCavalry(100, 50, 50, "Flanking Cavalry", 50);
    legion->add(cavalry);
    std::cout << "A new team of Cavalry units has been dispatched to flank the enemy.\n";
} 

bool Flanking::operator==(char x){
    if(x == 'f') return true;
    else return false;
    
}