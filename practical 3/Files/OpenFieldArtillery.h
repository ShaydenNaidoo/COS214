#ifndef OPENFIELDARTILLERY_H
#define OPENFIELDARTILLERY_H

#include "Artillery.h"
class OpenFieldArtillery: public Artillery {
public:
OpenFieldArtillery(int health, int damage, int defence, std::string name, char terrain, int currSold, double range, double accuracy, double ofBonus);
virtual ~OpenFieldArtillery();
private:
double ofBonus;
};


#endif // OPENFIELDARTILLERY_H