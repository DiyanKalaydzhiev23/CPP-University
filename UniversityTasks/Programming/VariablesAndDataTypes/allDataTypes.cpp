#include <iostream>
using namespace std;

int main() {
    int number;
    float floatingNumber;
    bool boolean;
    char character;

    cout << "The next input lines are done with the basic data types in C++, so don't go with really big numbers :)" << endl;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter a boolean (0 or 1): ";
    cin >> boolean;

    cout << "Enter the first letter of your name (char): ";
    cin >> character;

    cout << "Enter a number between 0 and 1: ";
    cin >> floatingNumber;

    return 0;
}