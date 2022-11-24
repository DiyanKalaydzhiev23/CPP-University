#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b;

    cout << "Enter a number a: ";
    cin >> a;

    cout << "Enter a number b: ";
    cin >> b;

    while (b == 0) {
        cout << "Cannot divide by zero, enter a valid number";
        cin >> b;
    }

    int q = a / b;
    int r = a % b;

    cout << "Q is: " << q << endl;
    cout << "R is: " << r << endl;
}
