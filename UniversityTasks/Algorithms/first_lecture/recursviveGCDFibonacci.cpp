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
    int fibonacciPairOne1 = 55;
    int fibonacciPairOne2 = 89;

    gcd(fibonacciPairOne1, fibonacciPairOne2, 1);

    cout << "The gcd is of fibonacci pair one with numbers " << fibonacciPairOne1 << " and " << fibonacciPairOne2 << " is " << result << endl;

    int fibonacciPairTwo1 = 144;
    int fibonacciPairTwo2 = 233;

    gcd(fibonacciPairTwo1, fibonacciPairTwo2, 1);

    cout << "The gcd is of fibonacci pair two with numbers " << fibonacciPairTwo1 << " and " << fibonacciPairTwo2 << " is " << result << endl;

    return 0;
}