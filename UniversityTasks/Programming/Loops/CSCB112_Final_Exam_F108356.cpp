#include <iostream>
using namespace std;


void rectangleOfNumbers(bool withoutRepeat) {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        if (withoutRepeat)
            cout << string((num - i) * 2 - 1 > 0 ? (num - i) * 2 - 1: 0, '0');
        else
            cout << string((num - i) * 2, '0');

        for (int j = (withoutRepeat && i == num ? i - 1 : i); j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }
}

void triangle() {
    int size;

    char space = ' ';
    char star = '*';

    cout << "Enter the triangle size: ";
    cin >> size;

    for (int i = 1; i <= size; i++) {
        cout << string(size - i, space) << string(i * 2 - 1, star) << endl;
    }
}

void histogram() {
    string number;
    int histogram [10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };  

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 0; i < number.size(); i++) {
        histogram[number[i] - '0'] += 1;
    }  

    for (int i = 0; i < 10; i++) {
        cout << i << "/" << histogram[i] << endl;
    }
}

void reverseNumber() {
    string num;

    cout << "Enter a number to be reversed: ";
    cin >> num;

    for (int i = 0; i < num.size() / 2; i++) {
        num[i] = num[i] ^ num[num.size() - i - 1];
        num[num.size() - i - 1] = num[i] ^ num[num.size() - i - 1];
        num[i] = num[i] ^ num[num.size() - i - 1];
    }

    cout << "The reversed number is: " << num << endl;
}

void digitsInNumberSum() {
    string num;
    int digitsSum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i < num.size(); i++) {
        digitsSum += num[i] - '0';
    }

    cout << "Number sum is: " << digitsSum << endl;
}

void numberLength() {
    string number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Number length is: " << number.size() << endl;
}

int main() {

    numberLength();
    digitsInNumberSum();
    reverseNumber();
    histogram();
    triangle();
    rectangleOfNumbers(false);
    rectangleOfNumbers(true);

    return 0;
}
