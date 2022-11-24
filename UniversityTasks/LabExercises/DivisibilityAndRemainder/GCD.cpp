#include <iostream>

using namespace std;
using std::min;

int main() {
    int number1, number2, number3;

    int minNumber = 20, maxNumber = 300;

    cin >> number1;
    cin >> number2;
    cin >> number3;

    if (number1 < minNumber || number1 > maxNumber ||
        number2 < minNumber || number2 > maxNumber ||
        number3 < minNumber || number3 > maxNumber) {
        cout << "Invalid input data!";
    } else {

        int minNumberFromData = min(number1, number2);
        minNumberFromData = min(minNumberFromData, number3);

        for (int i = minNumberFromData; i > 0; i--) {
            if (number1 % i == 0 & number2 % i == 0 & number3 % i == 0) {
                cout << i;
                break;
            }
        }
    }

    return 0;
}