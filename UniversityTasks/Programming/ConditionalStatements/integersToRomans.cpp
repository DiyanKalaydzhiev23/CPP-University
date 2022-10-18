#include <iostream>
using namespace std;

string intToRoman(int num) {
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};

    string ans = M[num / 1000] + C[(num % 1000) / 100] + X[(num % 100) / 10] + I[(num % 10)];

    return ans;
}

int main() {
    int number;
    cin >> number;

    cout << intToRoman(number);

    return 0;
}