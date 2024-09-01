#include "Fortification.h"


void Fortification::engage(LegionFactory* factory, Legion* legion){
    UnitComponent* infantry =  factory->createInfantry(100, 50, 50, "Fortification Infantry");
    UnitComponent* artillery = factory->createArtillery(100, 50, 50, "Fortification Artillery", 100,50);
    legion->add(infantry);
    legion->add(artillery);
    std::cout << "A new team of Infantry and Artillery units has been dispatched to fortify our encampment.\n";
    
}

bool Fortification::operator==(char x){
    if(x == 'F') return true;
    else false;

}
