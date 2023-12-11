#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string num;

    while (cin >> num) {
        vector<char> numVec(begin(num), end(num));

        sort(numVec.begin(), numVec.end(), greater<char>());

        int sum = 0;
        for (char digit : numVec) {
            sum += digit - '0';
        }

        if (sum % 3 == 0 && count(numVec.begin(), numVec.end(), '0') >= 1) {
            for (char i : numVec) {
                cout << i;
            }
        } else {
            cout << "-1";
        }

        cout << endl;
    }

    return 0;
}
