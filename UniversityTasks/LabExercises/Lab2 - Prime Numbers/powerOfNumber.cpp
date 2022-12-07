#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n, p, m, k = 0;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter a prime number p: ";
    cin >> p;

    m = n;

    while (m % p == 0) {
        k++;
        m = m / p;
    }

    cout << n << " = " << p << "^" << k << " * " << m << endl;

    return 0;
}