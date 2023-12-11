#include "getAverageForTheMonth.h"

float getAverageForTheMonth(float **array, int days, int measurements) {
    float sum = 0;

    for (int d = 0; d < days; d++) {
        for (int m = 0; m < measurements; m++) {
            sum += array[d][m];
        }
    }

    return sum / (float)days;
};