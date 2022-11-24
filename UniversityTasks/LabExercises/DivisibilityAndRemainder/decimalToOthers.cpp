#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    int binary[32];

    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
}

void decimalToOctal(int n) {
    int octalNum[100];

    int i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << octalNum[j];
}

void decimalToHex(int n) {
    char hex[100];

    int i = 0;
    while (n != 0) {
        int temp = n % 16;

        if (temp < 10) {
            hex[i] = temp + 48;
        }
        else {
            hex[i] = temp + 55;
        }

        i++;
        n /= 16;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << hex[j];
    }
}

int main() {
    int number, numeralSystem;

    cin >> numeralSystem;
    cin >> number;

    if (number > 100 || number < 1) {
        cout << "Invalid input data!";
    }
    else if (numeralSystem == 2) {
        decimalToBinary(number);
    }
    else if (numeralSystem == 8) {
        decimalToOctal(number);
    }
    else if (numeralSystem == 10) {
        cout << number;
    }
    else if (numeralSystem == 16) {
        decimalToHex(number);
    }
    else {
        cout << "Invalid input data!";
    }
}