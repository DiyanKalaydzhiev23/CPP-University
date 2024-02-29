#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::sort;

void printReverseArray(int* arr, int n) {
    if (n == 0) {
        return;
    }

    cout << arr[n - 1] << " ";

    printReverseArray(arr, n - 1);
}

void printRepeatingNumbers(int *arr, int size, int* foundNumbers) {
    int counter = 0;

    for (int i = 0; i < size && counter < 5; i++) {
        bool visited = false;

        if (arr[i] != foundNumbers[arr[i]]) {
            for (int j = i; j < size; j++) {
                if (arr[i] == arr[j]) {
                    if (visited) {
                        cout << "the num is" << arr[i] << endl;
                        foundNumbers[arr[i]] = arr[i];
                        counter++;
                        break;
                    }

                    visited = true;
                }
            }
        }
    }
}

void printRepeatingNumbersFaster(int* arr, int size) {
    int lastNum = -1;
    int numCounter = 0;

    for (int i = 0; i < size; i++) {
        int currentNum = arr[i];

        if (currentNum != lastNum) {
            if (numCounter > 1) {
                cout << "The number " << lastNum << " is repeated" << endl;
            }
            lastNum = currentNum;
            numCounter = 1;
        }
        else {
            numCounter++;
        }
    }
}

int main() {
    const int size = 6;
    int foundNumbers[size];
    int array[size] = {2, 2, 2, 3, 3, 6};
    sort(array, array + size);
    printRepeatingNumbersFaster(array, size);
}