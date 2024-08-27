#include "Ambush.h"

void Ambush::engage(){
    std::cout << "Infantry units are surounding the enemy encampment.\n"
    << "Artillery units are preparing to bombard the encampment\n"
    << "Artillery units have begun their bombardment\n"
    << "Infantry units have begun their attack\n";

}

bool Ambush::operator==(char x){
    if(x == 'A') return true;
    else return false;
    
}