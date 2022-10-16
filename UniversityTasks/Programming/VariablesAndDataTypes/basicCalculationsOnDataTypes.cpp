#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter a num for the operations: ";
    cin >> num1;

    cout << "Enter a num to operate with: ";
    cin >> num2;

    num1 += num2;
    cout << num1 << endl;

    num1 -= num2;
    cout << num1 << endl;

    num1 *= num2;
    cout << num1 << endl;

    num1 /= num2;
    cout << num1 << endl;

    num1 %= num2;
    cout << num1 << endl;

    return 0;
}