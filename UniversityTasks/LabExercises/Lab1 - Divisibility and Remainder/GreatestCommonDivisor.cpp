#include <iostream>

using namespace std;
using std::min;

int GCD(int number1, int number2, int number3) {
    int minNumber = min(number1, number2);
    minNumber = min(minNumber, number3);

    for (int i = minNumber; i > 0; i--) {
        if (number1 % i == 0 & number2 % i == 0 & number3 % i == 0) {
            return i;
        }
    }
}

int main() {
    int number1, number2, number3;

    cin >> number1;
    cin >> number2;
    cin >> number3;

    cout << GCD(number1, number2, number3);

    return 0;
}
