#include <iostream>

using namespace std;

int factorial(int n) {
    cout << "N on dive is: " << n << endl;
    
    if (n == 1) {
        return n;
    }

    int result = n * factorial(n - 1); 

    cout << "N on bubble up is: " << n << endl;

    return result;
}

int main() {

    cout << factorial(5);

    return 0;
}