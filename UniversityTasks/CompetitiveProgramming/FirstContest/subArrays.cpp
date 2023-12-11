#include <iostream>
#include <cstring>
#include <unordered_set>
#include <string>

using namespace std;

const int MAX_SIZE = 3100;

int main() {
    char line[MAX_SIZE];

    while (cin >> line) {

        unordered_set<string> uniqueSubstrings;
        int lineLength = strlen(line);

        for (int step = 1; step <= lineLength; step++) {
            for (int i = 0; i <= lineLength - step; i++) {
                string subString(line + i, line + i + step);
                uniqueSubstrings.insert(subString);
            }
        }

        cout << uniqueSubstrings.size() << endl;
    }

    return 0;
}