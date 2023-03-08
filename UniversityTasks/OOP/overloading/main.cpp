#include <iostream>
#include "Building.h"


using std::cin;
using std::cout;
using std::endl;

int main() {
    Building b;

    cin >> b;
    cout << b << endl;

    int x = 2;

    x += b;

    cout << b << endl;

    return 0;
}
