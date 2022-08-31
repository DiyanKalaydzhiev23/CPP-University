#include <iostream>
#include <map>

using namespace std;
 
int romanToInt(string s) {
    map<char, int> roman;
    roman['M'] = 1000;
    roman['D'] = 500;
    roman['C'] = 100;
    roman['L'] = 50;
    roman['X'] = 10;
    roman['V'] = 5;
    roman['I'] = 1;

    int res = 0;

    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (roman[s[i]] < roman[s[i+1]])
            res -= roman[s[i]];
        else
            res += roman[s[i]];
    }

    res += roman[s[s.size()-1]];

    return res;
}

int main() {
    string romanNumber;
    cin >> romanNumber;

    cout << romanToInt(romanNumber);

    return 0;
}