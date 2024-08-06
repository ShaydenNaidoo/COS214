#include "Infantry.h"
#include <iostream>
#include <string>

using namespace std;


Soldiers* Infantry::clonis(){
    return new Infantry(*this);
}

void Infantry::engage(){
    cout << "Engaging\n";
}

void Infantry::disengage(){
    cout << "Disengaging\n";
}

void Infantry::prepare(){
  cout<<"Perparing\n";
}

Infantry::~Infantry(){
   
}


