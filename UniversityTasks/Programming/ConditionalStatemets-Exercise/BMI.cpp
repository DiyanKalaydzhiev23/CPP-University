#include <iostream>
#include <math.h>
using namespace std;

int main() {
    char gender;
    float height, weight, shoes = 2 * 0.4, outfit = 1;

    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your gender (m/f): ";
    cin >> gender;

    if (gender == 'm') {
        weight += -3;
    } else if (gender == 'f') {
        weight += 2;
    } else {
        cout << "Not a valid gender!";
        return 0;
    }

    weight -= shoes + outfit;

    cout << "Your BMI is: " << weight / pow(height, 2);

    return 0;
}