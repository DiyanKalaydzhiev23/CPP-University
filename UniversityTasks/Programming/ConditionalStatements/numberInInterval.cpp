#include <iostream>
using namespace std;

int main() {
    int min, max, num;

    cout << "Enter a MIN constraint: ";
    cin >> min;

    cout << "Enter a MAX constraint: ";
    cin >> max;

    cout << "Enter a number for interval check: ";
    cin >> num;

    const int MIN = min, MAX = max;

    if (num >= MIN && num <= MAX)
        cout << "Number is in the interval";
    else
        cout << "Number is not in the interval";

    return 0;
}
