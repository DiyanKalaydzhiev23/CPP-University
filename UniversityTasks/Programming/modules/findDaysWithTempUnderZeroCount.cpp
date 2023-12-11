#include "findDaysWithTempUnderZeroCount.h"

int findDaysWithTempUnderZeroCount(float **array, int days, int measurements) {
    int underZeroDays = 0;

    for (int m = 0; m < days; m++) {
        for (int d = 0; d < measurements; d++) {
            if (array[d][m] < 0) {
                underZeroDays += 1;
                break;
            }
        }
    }

    return underZeroDays;
}
