#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <climits>
#include <queue>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

string toFraction(double num) {
    const double tolerance = 1e-6;
    int denominator = 1;

    while (fabs(num * denominator - round(num * denominator)) > tolerance) {
        ++denominator;
    }

    int numerator = round(num * denominator);
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    if (denominator == 1) {
        return to_string(numerator);
    } else {
        return to_string(numerator) + "/" + to_string(denominator);
    }
}

int main() {
    string line;
    int listLength;
    int divideTimesCount;

    while (getline(cin, line)) {
        istringstream iss(line);

        iss >> listLength;
        iss >> divideTimesCount;

        priority_queue<double> numbers;

        getline(cin, line);
        istringstream issn(line);

        for (int i = 0; i < listLength; i++) {
            double number;
            
            issn >> number;
            numbers.push(number);
        }

        for (int i = 0; i < divideTimesCount; i++) {
            double maxNum = numbers.top();
            numbers.pop();

            double dividedNum = maxNum / 2;
            numbers.push(dividedNum);
            numbers.push(dividedNum);
        }

        cout << toFraction(numbers.top()) << endl;
    }

    return 0;
}
