#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int * array = new int[n + 1];

    for (int i = 0; i <= n; i++) {
        array[i] = 0;
    }

    

    return 0;
}