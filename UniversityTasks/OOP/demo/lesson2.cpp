#include <iostream>
#include <cstring>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int customMathFunction(int n, int k) {
    int totalSum = 0;
    int midSum;

    for (int currentMultiplier = 1; currentMultiplier <= n; currentMultiplier++) {
        midSum = (currentMultiplier + 1) + (k * currentMultiplier);
        totalSum += midSum;
        cout << "Mid sum is: " << midSum << endl;
    }

    return totalSum;
}


string replaceAll(string str, const string& from, const string& to) {
    size_t start_pos = 0;

    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }

    return str;
}


string removeBroFromString(string &sentence) {
    sentence = replaceAll(sentence, "bro", "");

    return sentence;
}

int getAllDivisors(int num, int *array) {
    for (int d = 1, i = 0; d <= num; d++) {
        if (num % d == 0) {
            array[i] = d;
            i++;
        }
    }

    return *array;
}

int countDivisors(int n) {
    int cnt = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                cnt++;
            } else {
                cnt = cnt + 2;
            }
        }
    }

    return cnt;
}

int main3() {
    string text = "Mom: bro, the dishwasher bro is full bro; Son: have you ate?";
    cout << customMathFunction(5, 4) << " is the total sum" << endl;

    cout << removeBroFromString(text) << endl;

    int n;

    cout << "Enter the number: ";
    cin >> n;

    int divisors = countDivisors(n);

    int *array = new int[divisors];

    getAllDivisors(n, array);

    for (int i = 0; i < divisors; i++) {
        cout << array[i] << endl;
    }

    delete[] array;

    return 0;
}
