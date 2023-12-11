#include <iostream>

using namespace std;

int result;

void gcd(int a, int b, int call) {
    cout << "a: " << a << " on call " << call << endl;

    if (b == 0) {
        result = a;
        return;
    }

    gcd(b, a % b, call + 1);

    cout << "b: " << b << " on call " << call << endl;
}

int main() {
    int a, b;

    cin >> a;
    cin >> b;

    gcd(a, b, 1);

    cout << "The gcd is of " << a << " and " << b << " is " << result << endl;

    return 0;
}