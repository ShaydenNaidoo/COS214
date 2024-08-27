#include "Fortification.h"
#include <iostream>
#include "LegionFactory.h"
// void Fortification::engage(){
//     std::cout << "Infantry units are surrounding our encampment.\n"
//     << "Artillery units are preparing to defend the encampment\n"
//     << "Cavalry units are preparing to meet the enemy outside the encampment\n"
//     << "Artillery units have begun their bombardment\n"
//     << "Cavalry units are keeping the enemy away\n"
//     << "Infantry units have begun their defence\n";

<<<<<<< HEAD
void Fortification::engage(){
    std::cout << "Infantry units are surrounding our encampment.\n"
    << "Artillery units are preparing to defend the encampment\n"
    << "Cavalry units are preparing to meet the enemy outside the encampment\n"
    << "Artillery units have begun their bombardment\n"
    << "Cavalry units are keeping the enemy away\n"
    << "Infantry units have begun their defence\n";

}

bool Fortification::operator==(char x){
    if(x == 'F') return true;
    else false;

}
=======
// }
void Fortification::engage(LegionFactory* factory, Legion* legion){
    UnitComponent* infantry =  factory->createInfantry(100, 50, 50, "Fortification Infantry");
    UnitComponent* artillery = factory->createArtillery(100, 50, 50, "Fortification Artillery", 100,50);
    legion->add(infantry);
    legion->add(artillery);
    std::cout << "A new team of Infantry and Artillery units has been dispatched to fortify our encampment.\n";
    
}
>>>>>>> 9fd9439f8f097de2f12a0686354935c85d32c825
