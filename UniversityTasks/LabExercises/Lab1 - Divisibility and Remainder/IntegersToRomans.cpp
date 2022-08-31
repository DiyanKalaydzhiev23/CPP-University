#include <iostream>
using namespace std;

string intToRoman(int a) {
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string ans = M[a/1000] + C[(a%1000)/100] + X[(a%100)/10] + I[(a%10)];

    return ans;
}

int main() {
    int number;
    cin >> number;

    cout << intToRoman(number);

    return 0;
}