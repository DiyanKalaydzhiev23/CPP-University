#include <iostream>

using namespace std;

int main() {
    string A, B, result;

    cin >> A;
    cin >> B;

    for (int i = 0; i <= 10; i++) {
        if (A[i] == '1' && B[i] == '0') {
            result += '1';
        } else {
            result += '0';
        }
    }

    cout << result;

    return 0;
}