#ifndef OPENFIELDARTILLERY_H
#define OPENFIELDARTILLERY_H

#include "Artillery.h"
class OpenFieldArtillery: public Artillery {
public:
OpenFieldArtillery(int health, int damage, int defence, std::string name, char terrain, int currSold, int range, int accuracy, double ofBonus);
virtual ~OpenFieldArtillery();
  void move();
    void attack();
private:
double ofBonus;
};


#endif // OPENFIELDARTILLERY_H