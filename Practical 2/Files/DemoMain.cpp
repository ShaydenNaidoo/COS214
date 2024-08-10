//made Samvit Prakash
#include <iostream>
#include <string>
#include "MainManager.h"

using namespace std;

int main(){
/*                                                     Background                                                                     */
    cout << "\t\t\t\t\t\t\t\033[1;37mThe Call of Destiny\033[0m\n"
    << "In the year 100 BC, Rome is a republic on the brink of empire. To the north, hostile barbarian tribes threaten the borders.\n"
    << "To the east, the vast realms of Parthia eye Rome warily. Amidst political chaos, a young Roman legionnaire, Titus Flavius,\n"
    << "rises through the ranks, destined to shape the future of the mightiest army the world has ever seen.\n\n";


/*                                                     Factory Method                                                                     */
    cout << "\t\t\t\t\t\t\t\033[1;37mFactory Method\033[0m\n"
    << "As Titus encounters different war zones, choosing the right factory allows for tailored army compositions that meet\n"
    << "specific battlefield needs. Titus's soldier factories produce infantry, shield bearer and boatman units which all have unique\n"
    << "attributes.\n\n";

    MainManager manager(100);
    bool flag = true;
    int opt = 4;


    manager.createUnit(0,10,15,5,"I_Unit");
    manager.createUnit(1,25,10,25,"S_Unit");
    manager.createUnit(2,15,14,5,"B_Unit");

    

    while(flag){

        cout << "\033[1;4;37mUnit Attrinutes:\033[0m\n\n"
        << "1.) \033[1;4;37mInfantry\033[0m   \t\t2.) \033[1;4;37mShield Bearer\033[0m\t\t3.) \033[1;4;37mBoatman\033[0m\n"
        << "\033[1;33m   Med\033[0m Health \t\t\033[1;32m   High\033[0m Health  \t\t\033[1;33m   Med\033[0m Health\n"
        << "\033[1;31m   Low\033[0m Defence\t\t\033[1;32m   High\033[0m Defence \t\t\033[1;31m   Low\033[0m Defence\n"
        << "\033[1;32m   High\033[0m Damage\t\t\033[1;31m   Low\033[0m Damage   \t\t\033[1;33m   Med\033[0m Damage\n"
        << "\nCreate battle units for Titus:\n"
        << "\t-Enter 1 to create an infantry unit\n"
        << "\t-Enter 2 to create a shield bearer unit\n"
        << "\t-Enter 3 to create a boatman unit\n"
        << "\t-Enter 4 to cancel\n\n"
        << "\033[7;37mPlease enter an option:\033[0m ";

        cin >> opt;

        if(opt == 4) break;

        while(flag){
            int health, defence, damage;
            string name;

            cout << "\n\n\033[1;37mPlease enter the following attributes while following the unit attributes above:\033[0m\n"
            << "Please enter the \033[1;37munit name\033[0m without spaces: ";

            cin >> name;

            cout << "\nPlease enter amount of \033[1;32mhealth \033[0mper unit: ";

            cin >> health;

            cout << "\nPlease enter amount of \033[1;36mDefence \033[0mper unit: ";

            cin >> defence;

            cout << "\nPlease enter amount of \033[1;31mDamage \033[0mper unit: ";
            
            cin >> damage;

            if(manager.createUnit(opt-1,health,damage,defence,name) != true){
                cout << "\n\033[1;31mCould not create unit, please reread each unit's attributes and try again\033[0m";
            }else flag = false;


        }
        flag = true;

        cout << "\n\n\033[1;37mTitus's Current Army:\033[0m\n";
        manager.printUnits();
        cout << "\n\n\033[7;37mWould you like to create another unit? (1/0):\033[0m ";

        cin >> opt;

        if(opt != 1) {
            flag = false;
            cout << "\n\n";
            manager.printSummary();
            cout << "\n\n";

        }

        
    }

/*                                                     Prototype                                                                     */
    cout << "\t\t\t\t\t\t\t\033[1;37mPrototype\033[0m\n"
    << "After a significant victory, Titus uses the spoils to clone elite units, swiftly bolstering his forces without waiting for\n"
    << "new recruits.";

    flag = true;

    while(flag){
        int x = 0;
        cout << "\n\n";
        manager.printSummary();

        cout << "\nClone battle units for Titus using the \"clonis\" spell:\n"
        << "\t-Enter 1 to clone all units\n"
        << "\t-Enter 2 to clone specific units\n"
        << "\t-Enter 3 to view all units\n"
        << "\t-Enter 4 to cancel\n\n"
        << "\033[7;37mPlease enter an option:\033[0m ";

        cin >> opt;

        if(opt == 4) break;

        
        if(opt == 1){
            manager.cloneSoldier();

            cout << "\n\n\033[1;37m Titus's new army\033[0m\n\n";
            manager.printUnits();
            cout << "\n\n";

        }

        if(opt == 2){
            cout << "\n\n";
            for(size_t x = 0; x < manager.numberOfUnits(); x++){
                cout << "\033[1;37m" << x+1 << ".) " << manager[x]->getUnitName() << "\t(" << manager[x]->getType() << ")\n";
            }  

            cout << "\n\033[0m\033[7;37mPlease enter a index from above to clone:\033[0m ";

            cin >> x;

            manager.cloneSoldier(x-1);

            cout << "\n\n\033[1;37m Titus's new army\033[0m\n\n";
            manager.printUnits();
            cout << "\n\n";

        }
        
        if(opt == 3){
            cout << "\n\n";
            manager.printUnits();
            cout << "\n\n";
            continue;
            
        }
   
        cout << "\n\n\033[7;37mWould you like to use \"clonis\" again? (1/0):\033[0m ";

        cin >> opt;

        if(opt != 1) {
            flag = false;
            cout << "\n\n";
            manager.printSummary();
            cout << "\n\n";

        }


    }

/*                                                     Template Method                                                                     */
    cout << "\t\t\t\t\t\t\t\033[1;37mTemplate Method\033[0m\n"
    << "As Titus commands diverse legions, each type of soldier must respond uniquely to the commands of attack and retreat,\n"
    << "yet follow a general pattern of behavior.\n";

    flag = true;

    while(flag){
        int x;
        cout << "\nCommand Titus's legion:\n"
        << "\t-Enter 1 to command all units\n"
        << "\t-Enter 2 to command one unit\n"
        << "\t-Enter 3 to cancel\n\n"
        << "\033[7;37mPlease enter an option:\033[0m ";

        cin >> opt;

        if(opt == 3) break;


        if(opt == 2){
            cout << "\n\n";
            for(size_t x = 0; x < manager.numberOfUnits(); x++){
                cout << "\033[1;37m" << x+1 << ".) " << manager[x]->getUnitName() << "\t(" << manager[x]->getType() << ")\n";
            }  

            cout << "\n\033[0m\033[7;37mPlease enter a index from above to command:\033[0m ";

            cin >> x;

            cout << "\nEngage or disengage the enemy:\n"
            << "\t-Enter 1 to command the unit to engage\n"
            << "\t-Enter 2 to command the unit to disengage\n\n"
            << "\033[7;37mPlease enter an option:\033[0m ";

            cin >> opt;

            cout << "\n";

            if(opt == 1) manager[x-1]->engage();
            else manager[x-1]->disengage();            

            opt = 2;
        }

        if(opt == 1){
            cout << "\nEngage or disengage the enemy:\n"
            << "\t-Enter 1 to command all units to engage\n"
            << "\t-Enter 2 to command all units to disengage\n\n"
            << "\033[7;37mPlease enter an option:\033[0m ";

            cin >> opt;

            for(size_t x = 0; x < manager.numberOfUnits(); x++){
                cout << "\n";
                if(opt == 1) manager[x]->engage();
                else manager[x]->disengage();
                cout << "\n\n";

            } 

        }

        cout << "\n\n\033[7;37mWould you like to give the legion another command? (1/0):\033[0m ";

        cin >> opt;

        if(opt != 1) {
            flag = false;

        }

    }

/*                                                     Memento                                                                     */
    cout << "\t\t\t\t\t\t\t\033[1;37mMemento\033[0m\n"
    << "Titus uses this system to refine his strategies, learning from past encounters to optimize future engagements.\n\n";

    flag = true;

    while(flag){
        int x;
        cout << "\nSave current state of army:\n"
        << "\t-Enter 1 to save all unit's states\n"
        << "\t-Enter 2 to save one unit's state\n"
        << "\t-Enter 3 to restore all unit's sates\n"
        << "\t-Enter 4 to restore one unit's state\n"
        << "\t-Enter 5 to kill half of your army\n"
        << "\t-Enter 6 to kill half of a unit\n"
        << "\t-Enter 7 to cancel\n\n"
        << "\033[7;37mPlease enter an option:\033[0m ";

        cin >> opt;

        if(opt == 7) break;

        if(opt == 1){
            manager.militusMemento();
            continue;
        
        }

        if(opt == 2){
            cout << "\n\n";
            for(size_t x = 0; x < manager.numberOfUnits(); x++){
                cout << "\033[1;37m" << x+1 << ".) " << manager[x]->getUnitName() << "\t(" << manager[x]->getType() << ")\n";
            }  

            cout << "\n\033[0m\033[7;37mPlease enter a index from above to command:\033[0m ";

            cin >> x;

            manager.militusMemento(manager[x-1]);
            continue;            

        }

        if(opt == 3){
            manager.vivifaMemento();
            continue;
        
        }

        if(opt == 4){
            cout << "\n\n";
            for(size_t x = 0; x < manager.numberOfUnits(); x++){
                cout << "\033[1;37m" << x+1 << ".) " << manager[x]->getUnitName() << "\t(" << manager[x]->getType() << ")\n";
            }  

            cout << "\n\033[0m\033[7;37mPlease enter a index from above to command:\033[0m ";

            cin >> x;

            manager.vivifaMemento(manager[x-1]);
            continue;            

        }

        
    
    }



    return 0;
}