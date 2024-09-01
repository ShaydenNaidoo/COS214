#include "WarArchives.h"

void WarArchives::addTacticalMemento(TacticalMemento *memento, std::string label){
    archive[label] = memento;

}

TacticalMemento* WarArchives::removeTacticalMemento(std::string label){
    TacticalMemento *temp = archive[label];   
    archive.erase(label);
    return temp;

}

std::string WarArchives::bestStrategy(std::size_t specialization){
    std::map<std::string, TacticalMemento*>::iterator x = archive.begin();

    for(x; x != archive.end(); x++){
        switch(specialization){
            case 0: 
                if(x->second->getStrategy()->operator==('f')) return x->first;
                break;

            case 1:
                if(x->second->getStrategy()->operator==('A')) return x->first;
                break;

            case 2:
                if(x->second->getStrategy()->operator==('F')) return x->first;
                break;

        }
    
    }

    return "";



}

WarArchives::~WarArchives(){
    std::map<std::string, TacticalMemento*>::iterator x = archive.begin();

    for(x; x != archive.end(); x++){
        delete x->second;

    }

    archive.clear();

}