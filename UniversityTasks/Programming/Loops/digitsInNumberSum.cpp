#include <iostream>
using namespace std;

int main() {
    string num;
    int digitsSum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i < num.size(); i++) {
        digitsSum += num[i] - '0';
    }

    cout << digitsSum;

    return 0;
}