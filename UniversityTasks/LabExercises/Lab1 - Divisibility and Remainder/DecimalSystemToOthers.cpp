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

    cin >> number;
    cin >> numeralSystem;

    if (numeralSystem == 2) {
        decimalToBinary(number);
    }
    else if (numeralSystem == 10) {
        cout << number;
    }
    else if (numeralSystem == 16) {
        decimalToHex(number);
    }
    else {
        cout << "Invalid numeral system!";
    }
}