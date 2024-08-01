#include <iostream>

using namespace std;

int main(){
    char *x = new char[11];
    x[0] = 'H';
    x[1] = 'e';
    x[2] = 'l';
    x[3] = 'l';
    x[4] = 'o';
    x[5] = ' ';
    x[6] = 'W';
    x[7] = 'o';
    x[8] = 'r';
    x[9] = 'l';
    x[10] = 'd';

    for(int y = 0; y < 11; y++) cout << x[y];

    cout << endl;

    delete [] x;

    return 0;
}