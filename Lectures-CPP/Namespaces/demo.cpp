#include <iostream>
#include "fileToIMport.h"

using namespace std;

void counterFunction() {
    static int counter = 0;
    counter++;
    cout << "Counter: " << counter << endl;
}

unsigned no_gcd(int a, int b) {
    return (0 == b ? a : no_gcd(b, a / b));
}

int main() {
    cout << no_gcd(12, 8);
}
