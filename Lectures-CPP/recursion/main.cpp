#include <iostream>
using namespace std;

void collatz(long long n) {
    cout << n << " ";

    // Base case: the sequence has reached 1
    if (n == 1) {
        return;
    }

    // If n is even, divide it by 2
    if (n % 2 == 0) {
        collatz(n / 2);
    }
        // If n is odd, multiply by 3 and add 1
    else {
        collatz(3 * n + 1);
    }
}

int main() {
    long long n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Collatz sequence starting with " << n << ": ";
    collatz(n);
    cout << endl;

    return 0;
}



