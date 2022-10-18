#include <iostream>
#include <map>

using namespace std;
 
int romanToInt(string romanNumber) {
    map<char, int> roman;
    roman['M'] = 1000;
    roman['D'] = 500;
    roman['C'] = 100;
    roman['L'] = 50;
    roman['X'] = 10;
    roman['V'] = 5;
    roman['I'] = 1;

    int res = 0;

    for (int i = 0; i < romanNumber.size() - 1; ++i)
    {
        if (roman[romanNumber[i]] < roman[romanNumber[i+1]])
            res -= roman[romanNumber[i]];
        else
            res += roman[romanNumber[i]];
    }

    res += roman[romanNumber[romanNumber.size()-1]];

    return res;
}

int main() {
    string romanNumber;
    cin >> romanNumber;

    cout << romanToInt(romanNumber);

    return 0;
}