#include <iostream>

using std::cin;
using std::cout;
using std::endl;


inline float findRectangleArea(float a, float b) {
    return a * b;
}

int main() {
    float a, b;

    cout << "Enter the side a: ";
    cin >> a;

    cout << "Enter the side b: ";
    cin >> b;

    cout << "The area is: " << findRectangleArea(a, b) << " cm2" << endl; 

    return 0;
}