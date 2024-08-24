#ifndef RIVERBANKARTILLERY_H
#define RIVERBANKARTILLERY_H

// Include any necessary headers here
#include "Artillery.h"
// Declare your class and its member functions
class RiverbankArtillery: public Artillery {
public:
    RiverbankArtillery();
    RiverbankArtillery(int health, int damage, int defence, std::string name, char terrain, int currSold, int range, int accuracy, double rbBonus);
    virtual ~RiverbankArtillery();
    
private:
double rbBonus;
};

#endif // RIVERBANKARTILLERY_H