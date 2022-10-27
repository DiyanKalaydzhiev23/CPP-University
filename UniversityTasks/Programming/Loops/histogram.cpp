#include <iostream>
using namespace std;

int main() {
    string number;
    int histogram [10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };  

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 0; i < number.size(); i++) {
        histogram[number[i] - '0'] += 1;
    }  

    for (int i = 0; i < 10; i++) {
        cout << i << "/" << histogram[i] << endl;
    } 

    return 0;
}