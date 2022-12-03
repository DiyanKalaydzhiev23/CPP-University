#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    float tirePressure, oil, fuel;

    cout << "Enter the tire pressure: ";
    cin >> tirePressure;

    cout << "Enter the oil: ";
    cin >> oil;

    cout << "Enter the fuel: ";
    cin >> fuel;

    if (tirePressure < 1 || oil < 1.5) {
        cout << "Can't go";
        return;
    }
    
    if (tirePressure >= 1 && tirePressure <= 2.3) {
        tirePressure = 2.4;
    }

    if (fuel < 25) {
        fuel = 50;
    }

    cout << "Go and drive my friend" << endl;
}