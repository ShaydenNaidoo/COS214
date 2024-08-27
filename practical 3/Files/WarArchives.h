#ifndef WAR_ARCHIVES_H
#define WAR_ARCHIVES_H

#include <iostream>
#include <vector>
#include <map>

#include "TacticalMemento.h"

#include "Flanking.h"
#include "Fortification.h"
#include "Ambush.h"

class WarArchives {
    private:
        std::map<std::string, TacticalMemento*> archive;

    public:
        void addTacticalMemento(TacticalMemento *memento, std::string label);
        TacticalMemento* removeTacticalMemento(std::string label);
        std::string bestStrategy(std::size_t specialization);
        ~WarArchives();



};

#endif