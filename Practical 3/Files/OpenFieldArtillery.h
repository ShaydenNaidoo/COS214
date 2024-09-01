//CONCRETE_PRODUCT
#ifndef OPENFIELDARTILLERY_H
#define OPENFIELDARTILLERY_H

#include "Artillery.h"

class OpenFieldArtillery: public Artillery {
  private:
    double ofBonus;

  public:
    OpenFieldArtillery(int health, int damage, int defence, std::string name, int range, int accuracy);
    void move() override;
    void attack() override;
    void printUnitDetails() override;
		void printDetails() override;
    void add(UnitComponent* component) override;
    void remove(UnitComponent* component) override;
};

#endif