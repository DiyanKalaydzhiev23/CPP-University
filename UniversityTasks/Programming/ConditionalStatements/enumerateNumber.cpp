#include <iostream>
using namespace std;

int main() {
    string number;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 0; i < number.size(); i++) {
        cout << i + 1 << "." << " " << number[i] << endl;
    }

    return 0;
}