#include <iostream>
#include "printAverageOfHottestHourOfTheMonth.h"

using std::cout;
using std::endl;

void printAverageOfHottestHourOfTheMonth(float **array, int days, int measurements) {
    auto *averageTemperatureForDifferentHours = new float[days];

    for (int m = 0; m < days; m++) {
        float sumTempForHour = 0;

        for (int d = 0; d < measurements; d++) {
            sumTempForHour += array[d][m];
        }

        averageTemperatureForDifferentHours[m] = sumTempForHour / (float)days;
    }

    float hottestAverageTemp = -LONG_MAX;
    int hottestAverageHour;

    for (int m = 0; m < measurements; m++) {
        if (averageTemperatureForDifferentHours[m] > hottestAverageTemp) {
            hottestAverageTemp = averageTemperatureForDifferentHours[m];
            hottestAverageHour = m + 1;
        }
    }

    cout << "Hottest average hour for the month is " << hottestAverageHour
         << " with temperature " << hottestAverageTemp << endl;
}