#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

string to_ic(int num, int base) {
    if (num == 0) {
        return "0";
    }

    const char chars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result = "";

    while (num > 0) {
        int remainder = num % base;
        result = chars[remainder] + result;
        num /= base;
    }

    return result;
}

int main() {
    using namespace std;
    string line;

    while (getline(cin, line)) {
        istringstream iss(line);
        int base;
        iss >> base;

        vector<int> numbers;
        int temp;

        while (iss >> temp) {
            numbers.push_back(temp);
        }

        for (size_t i = 0; i < numbers.size(); i++) {
            cout << to_ic(numbers[i], base);
            if (i != numbers.size() - 1) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
