#include <iostream>
#include <bitset>
#include <ctime>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::bitset;

int main() {
    bool qualityArray[100];
    bool priceArray[100];

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        qualityArray[i] = (bool)(rand() % 2);
        priceArray[i] = (bool)(rand() % 2);
    }

    for (int i = 0; i < 100; i++) {
        cout << (qualityArray[i] ^ priceArray[i]);
    }

    return 0;
}
