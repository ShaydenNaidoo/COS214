#ifndef WOODLAND_ARTILLERY_H
#define WOODLAND_ARTILLERY_H

// Include any necessary headers here
#include "Artillery.h"
// Declare your class and its member functions
class WoodlandArtillery: public Artillery {
public:
    WoodlandArtillery();
    WoodlandArtillery(int health, int damage, int defence, std::string name, char terrain, int currSold, int range, int accuracy, double wBonus);
    virtual ~WoodlandArtillery();
    void move();
    void attack();
private:
double wBonus;
};

#endif // WOODLAND_ARTILLERY_H