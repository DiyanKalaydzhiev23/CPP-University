#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

double negativePowerOfANum(int number, int power) {
    float newNum = 1.0 / number;
    power = abs(power);

    for (int i = 1; i < power; i++) {
        newNum *= newNum;
    }

    return newNum;
}

int main() {
    float number;
    int power;

    cout << "Enter the number: ";
    cin >> number;

    cout  << "Enter the negative power: ";
    cin >> power;

    cout << "The result is: " << negativePowerOfANum(number, power);

    return 0;
}