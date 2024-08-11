#include "BattleManager.h"

BattleManager::BattleManager(){
    this->army = new MainManager(50);
    this->enemy = new MainManager(55);

    this->army->createUnit(0,10,15,9,"1st Infantry Unit");
    this->enemy->createUnit(0,10,15,9,"The enemy");
    this->army->createUnit(0,10,15,9,"2nd Infantry Unit");
    this->enemy->createUnit(0,10,15,9,"The enemy");    
    this->army->createUnit(0,10,15,9,"3rd Infantry Unit");
    this->enemy->createUnit(0,10,15,9,"The enemy");
    this->army->createUnit(0,10,15,9,"4th Infantry Unit");
    this->enemy->createUnit(0,10,15,9,"The enemy");
    this->army->createUnit(0,10,15,9,"5th Infantry Unit");
    this->enemy->createUnit(0,10,15,9,"The enemy");
    this->enemy->createUnit(0,10,15,9,"The enemy");

    this->army->createUnit(1,25,5,25,"1st Shield Bearer Unit");
    this->enemy->createUnit(1,25,5,25,"The enemy");
    this->army->createUnit(1,25,5,25,"2nd Shield Bearer Unit");
    this->enemy->createUnit(1,25,5,25,"The enemy");
    this->army->createUnit(1,25,5,25,"3rd Shield Bearer Unit");
    this->enemy->createUnit(1,25,5,25,"The enemy");
    this->enemy->createUnit(1,25,5,25,"The enemy");

    this->army->createUnit(2,10,15,9,"1st Boatman Unit");
    this->enemy->createUnit(2,10,15,9,"The enemy");
    this->army->createUnit(2,10,15,9,"2nd Boatman Unit");
    this->enemy->createUnit(2,10,15,9,"The enemy");
    this->army->createUnit(2,10,15,9,"3rd Boatman Unit");
    this->enemy->createUnit(2,10,15,9,"The enemy");
    this->army->createUnit(2,10,15,9,"4th Boatman Unit");
    this->army->createUnit(2,10,15,9,"5th Boatman Unit");  

}

BattleManager::BattleManager(MainManager *army, MainManager *enemy): army(army), enemy(enemy){}

void BattleManager::Battle(){
    int VIC;
    for(std::size_t x = 0; x < this->enemy->numberOfUnits(); x++){
        bool flag = true, con = true;
        int opt = 0, y = 0;

        std::cout << "\033[1;31mAn enemy unit apears infront you, blocking your way from conquering the unkown kingdom infront of you.\n"
        <<"The terrain allows for Infantry, Shield Bearers or Boatman to intervene.\n\n"
        << "\033[1;37mChoose which units will battle the enemy: \033[0m\n";
        
        while(flag){


            while(con){
                for(std::size_t A = 0; A < this->army->numberOfUnits(); A++){
                    if(this->army->operator[](A)->getCurrNumSoldiers() > 0){
                        for(std::size_t z : engagedArmy){
                            if( z == A) y = -1;
                        }

                        if(y != -1){
                            std::cout << "\t" << A+1 << ".) " << this->army->operator[](A)->getUnitName() << std::endl;
                            opt++;

                        }   

                        y = 0;

                    }

                }


                if(opt <= 0){
                    std::cout << "\033[7;31mThe enemy was too strong for you, you got wiped out\033[0m\n\n";
                    y = -2;
                    VIC = 0;
                    break;
                
                }else{
                    std::cout << "\t-2.) Give Up" << std::endl;
                    std::cout << "\n\033[7;37mSelect a unit:\033[0m ";
                    std::cin >> y;

                    if(y == -2) {
                        VIC = 0;
                        break;
                    }

                    if(y <= 0 || y > this->army->numberOfUnits()){
                        std::cout << "Invalid Index Given";
                        y = -1;

                    }

                    if(y != -1){
                        engagedArmy.push_back(y-1);

                        std::cout << "\n\n\033[7;37mWould you like to select another unit to engage the enemy (1/0):\033[0m ";
                        std::cin >> opt;

                        if(opt != 1){
                            con = false;

                        }

                    }    


                }

            }

            if(y == -2) break;

            if(y != -1){

                for(std::size_t V : engagedArmy){
                    if(this->army->operator[](V)->getCurrNumSoldiers() != 0){
                        int dam = this->army->operator[](V)->getCurrNumSoldiers() * this->army->operator[](V)->getDamagePerSoldier();
                        dam -= dam * (this->enemy->operator[](x)->getDefencePerSoldier()/100);
                        this->enemy->operator[](x)->incrementDamage(dam*0.15);

                        std::cout << "\033[1;32m"<< this->army->operator[](V)->getUnitName() << "\033[0m dealt \033[1;31m" << dam << " damage"
                        << "\033[0m to \033[1;31m " << this->enemy->operator[](x)->getUnitName() << "\033[0m\n\n";

                    }
                
                }

                for(std::size_t V : engagedArmy){
                    if(this->army->operator[](V)->getCurrNumSoldiers() != 0){
                        int dam = this->enemy->operator[](x)->getCurrNumSoldiers() * this->army->operator[](x)->getDamagePerSoldier();
                        dam -= dam * (this->army->operator[](V)->getDefencePerSoldier()/100);
                        this->army->operator[](V)->incrementDamage(dam*0.15);

                        std::cout << "\033[1;31m"<< this->enemy->operator[](x)->getUnitName() << "\033[0m dealt \033[1;31m" << dam << " damage"
                        << "\033[0m to \033[1;32m " << this->army->operator[](V)->getUnitName() << "\033[0m\n\n";

                        break;

                    }

                }


                std::size_t B = 0;
                for(std::size_t V : engagedArmy){
                    if(this->army->operator[](V)->getCurrNumSoldiers() <= 0){
                        std::cout << "\033[7;31m" << this->army->operator[](V)->getUnitName() << " has been wiped out\033[0m\n\n";
                        B++;
                    }
                
                }

                if(B == engagedArmy.size()) {
                    con = true;
                    std::cout << "\033[7;31mAll engaged units have been wiped out, send more troops\033[0m\n\n";
                    engagedArmy.clear();

                }
                
                if(this->enemy->operator[](x)->getCurrNumSoldiers() <= 0){
                    std::cout << "\033[7;32m" << this->enemy->operator[](x)->getUnitName() << " has been wiped out\033[0m\n\n";

                    std::cout << "\033[1;37mStats of Engaged Units:\033[0m\n\n";

                    for(std::size_t S:engagedArmy) this->army->printUnit(S);

                    std::cout << "\n\n";

                    engagedArmy.clear();
                    VIC = -1;
                    flag = false;


                }
            }

        }

        if(y == -2) {
            std::cout << "\n\n\033[1;34mGuess History Is Wrong, The Roman Legion's Pretty Weak\033[0m\n";
            break;
        
        }

    }

    if(VIC == -1){
        std::cout << "\n\n\033[7;32mTHE ROMAN LEGION HAS CONQUERED THE UNKOWN KINGDOM!!\033[0m\n\n";

    }
    
}
