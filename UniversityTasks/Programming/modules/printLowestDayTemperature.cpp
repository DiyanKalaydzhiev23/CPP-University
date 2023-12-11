#include <iostream>
#include "printLowestDayTemperature.h"

using std::cout;
using std::endl;


void printLowestDayTemperature(float **array, int days, int measurements) {
    float lowestTemp = LONG_MAX;
    int lowestDay;
    int lowestMeasurement;

    for (int d = 0; d < days; d++) {
        for (int m = 0; m < measurements; m++) {
            if (array[d][m] < lowestTemp) {
                lowestTemp = array[d][m];
                lowestDay = d + 1;
                lowestMeasurement = m + 1;
            }
        }
    }

    cout << "The day with lowest temp is " << lowestDay
         << " and lowest measurement is " << lowestMeasurement
         << " with temperature " << lowestTemp << endl;
}