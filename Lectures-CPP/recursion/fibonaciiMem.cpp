#include <iostream>
using namespace std;

long long fibonacci(int n, long long memo[]) {
    if (n <= 1) {
        return n;
    }

    // Check if the value has already been computed
    if (memo[n] != -1) {
        return memo[n];
    }

    // If not, compute it recursively and store in the memo array
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main() {
    int n;
    cout << "Enter the term number to find in Fibonacci sequence: ";
    cin >> n;

    // Dynamically allocate memory for the memoization array
    long long* memo = new long long[n + 1];
    for (int i = 0; i <= n; ++i) {
        memo[i] = -1; // Initialize all elements to -1
    }

    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n, memo) << endl;

    // Free the dynamically allocated memory
    delete[] memo;

    return 0;
}
