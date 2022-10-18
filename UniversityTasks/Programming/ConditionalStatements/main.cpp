#include <iostream>
#include <map>

using namespace std;


void enumerateNumber() {
    string number;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 0; i < number.size(); i++) {
        cout << i + 1 << "." << " " << number[i] << endl;
    }
}

void checkIfNumberInInterval() {
    int min, max, num;

    cout << "Enter a MIN constraint: ";
    cin >> min;

    cout << "Enter a MAX constraint: ";
    cin >> max;

    cout << "Enter a number for interval check: ";
    cin >> num;

    const int MIN = min, MAX = max;

    if (num >= MIN && num <= MAX)
        cout << "Number is in the interval" << endl;
    else
        cout << "Number is not in the interval" << endl;
}


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

string intToRoman(int num) {
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};

    string ans = M[num / 1000] + C[(num % 1000) / 100] + X[(num % 100) / 10] + I[(num % 10)];

    return ans;
}

int main() {
    int num1;
    string romanNumber;

    cout << "Enter integer: ";
    cin >> num1;
    cout << num1 << " is " << intToRoman(num1) << " in roman" << endl;

    cout << "Enter a roman number: ";
    cin >> romanNumber;
    cout << romanNumber << " is " << romanToInt(romanNumber) << " as integer" << endl;

    checkIfNumberInInterval();
    enumerateNumber();

    return 0;
}