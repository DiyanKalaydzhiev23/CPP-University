#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    int min, max;

    cout << "Enter the minimum random value: ";
    cin >> min;

    cout << "Enter the maximum random value: ";
    cin >> max;
    
    cout << "Your random number is: " << min + rand() % (max + 1 - min);

    return 0;
}