//CONCRETE_PRODUCT
#ifndef OPENFIELDARTILLERY_H
#define OPENFIELDARTILLERY_H

#include "Artillery.h"

class OpenFieldArtillery: public Artillery {
  private:
    double ofBonus;

  public:
    OpenFieldArtillery(int health, int damage, int defence, std::string name, int range, int accuracy);
    void move();
    void attack();
    void printUnitDetails();
		void printDetails();
  
};

#endif