#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n, j;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }

        if (j == i) {
            cout << i << endl;
        }
    }
}