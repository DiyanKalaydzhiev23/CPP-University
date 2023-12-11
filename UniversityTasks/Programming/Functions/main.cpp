#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <Windows.h>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;


int factorial(int n) {
    int result = n;

    for (int current_num = n - 1; current_num > 0; current_num--) {
        result *= current_num;
    }

    return result;
}

void sort2(int &num1, int &num2) {
    if (num1 <= num2) {
        return;
    }

    int temp_num = num2;

    num2 = num1;
    num1 = temp_num;
}

int fibonacci(int n) {
    int num1 = 1;
    int num2 = 1;

    if (n < 2) {
        return num1;
    }

    int temp_num;

    for (int i = 0; i < n - 2; i++) {
        temp_num = num2;

        num2 = num1 + num2;
        num1 = temp_num;
    }

    return num2;
}

void addPi(string text) {

    stringstream ss(text);
    string word;

    while (ss >> word) {
        cout << "пи" << word << " ";
    }

    cout << endl;
}

int main() {

    cout << factorial(5) << endl;

    int a = 7, b = 6;

    sort2(a, b);

    cout << a << b << endl;

    cout << fibonacci(21) << endl;

    setlocale(LC_ALL, "Bulgarian");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string s = "some senence";

    addPi(s);

    return 0;
}