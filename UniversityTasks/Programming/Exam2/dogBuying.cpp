#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
    char names[100][20];
    char currentName[20];
    char letterToSearch;

    for (int i = 0; i <= 100; i++) {
        cout << "Enter the name you want: ";
        cin >> names[i];

        if (names[i][0] == '0' && !names[i][1]) {
            break;
        }
    }

    cout << "Enter a letter to search: ";
    cin >> letterToSearch;

    for (int i = 0; i <= 100; i++) {
        if (names[i][0] == letterToSearch) {
            cout << names[i] << endl;
        }
    }

    return 0;
}