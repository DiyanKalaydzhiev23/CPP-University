#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        cout << string((num - i) * 2, '0');

        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }
}