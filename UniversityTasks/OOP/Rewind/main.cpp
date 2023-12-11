#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

bool isPowerOfTwo(int num) {
    return ceil(log2(num)) == floor(log2(num));
}

int main() {

    cout << isPowerOfTwo(2) << endl;
    cout << isPowerOfTwo(16) << endl;
    cout << isPowerOfTwo(32) << endl;
    cout << isPowerOfTwo(33) << endl;

    return 0;
}