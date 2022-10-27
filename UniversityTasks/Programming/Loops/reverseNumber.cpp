#include <iostream>
using namespace std;

int main() {
    string num;

    cout << "Enter a number to be reversed: ";
    cin >> num;

    for (int i = 0; i < num.size() / 2; i++) {
        num[i] = num[i] ^ num[num.size() - i - 1];
        num[num.size() - i - 1] = num[i] ^ num[num.size() - i - 1];
        num[i] = num[i] ^ num[num.size() - i - 1];
    }

    cout << "The reversed number is: " << num << endl;

    return 0;
}