#include <iostream>

using namespace std;

int main() {
    int x = 10;

    x+= 100;
    x--;
    x++;
    --x;
    x*=99;
    x/= 5;
    x+= x+27 *(x/2)*99+80;

    cout << endl << x << endl;

    return 0;
}