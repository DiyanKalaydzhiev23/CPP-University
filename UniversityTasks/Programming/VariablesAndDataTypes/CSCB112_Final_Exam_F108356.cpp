#include <iostream>
using namespace std;


void allDataTypes() {
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

    cout << "Your variables: " << number << ", " << floatingNumber << ", " << boolean << ", " << character << endl;
}

void basicCalculations() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
}

void basicCalculationsSavedInVariables() {
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
}

void bitwiseVariablesSwap() {
    int a = 5, b = 10;

    cout << "Variables before bitwise swap: " << "a = " << a << ", b = " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "Variables after bitwise swap: " << "a = " << a << ", b = " << b << endl;
}

int main() {
    cout << "\n" << "Task 1" << "\n" << endl;

    allDataTypes();
    cout << "\n" << "Task 2" << "\n" << endl;

    basicCalculations();
    cout << "\n" << "Task 3" << "\n" << endl;

    basicCalculationsSavedInVariables();
    cout << "\n" << "Task 4" << "\n" << endl;

    bitwiseVariablesSwap();
    
    return 0;
}