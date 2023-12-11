#include <iostream>
#include "getAverageForTheMonth.h"
#include "printLowestDayTemperature.h"
#include "printAverageOfHottestHourOfTheMonth.h"
#include "findDaysWithTempUnderZeroCount.h"

using std::cout;
using std::endl;


int main() {
    const int days = 30;
    const int measurements = 6;

    float **arrayOfArrays = new float*[days];

    for (int i = 0; i < days; ++i) {
        arrayOfArrays[i] = new float[measurements];
    }

    for (int i = 0; i < days; ++i) {
        for (int j = 0; j < measurements; ++j) {
            arrayOfArrays[i][j] = static_cast<float>(i * measurements + j);
        }
    }

    cout << getAverageForTheMonth(arrayOfArrays, days, measurements) << endl;

    printLowestDayTemperature(arrayOfArrays, days, measurements);
    printAverageOfHottestHourOfTheMonth(arrayOfArrays, days, measurements);

    cout << findDaysWithTempUnderZeroCount(arrayOfArrays, days, measurements) << endl;

    return 0;
}
