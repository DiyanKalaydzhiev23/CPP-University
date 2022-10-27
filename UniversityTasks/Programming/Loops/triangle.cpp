#include <iostream>
using namespace std;

int main() {
    int size;

    char space = ' ';
    char star = '*';

    cout << "Enter the triangle size: ";
    cin >> size;

    for (int i = 1; i <= size; i++) {
        cout << string(size - i, space) << string(i * 2 - 1, star) << endl;
    }

    return 0;
}