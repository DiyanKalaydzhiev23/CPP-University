#include <iostream>
#include <cstdlib>

using std::abs;
using std::cout;
using std::cin;
using std::endl;

int arrayAbsoluteSumOnEvenElements(int *array, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sum += abs(array[i]);
        }
    }

    return sum;
}

void printTriangleOfLetters(char firstLetter, char lastLetter) {
    for (char c1 = firstLetter; c1 <= lastLetter; c1++) {
        for (char c2 = firstLetter; c2 <= c1; c2++) {
            cout << c2;
        }

        cout << endl;
    }
}

int main2() {
    printTriangleOfLetters('A', 'E');

//    int arraySize;
//
//    cout << "Enter the sizeof the array: ";
//    cin >> arraySize;
//
//    int *array = new int[arraySize];
//
//    for (int i = 0; i < arraySize; i++) {
//        cout << "Enter a number: ";
//        cin >> array[i];
//    }
//
//    cout << "The sum of the array even positions: " << arrayAbsoluteSumOnEvenElements(array, arraySize) << endl;
//
//    delete[] array;

    return 0;
}
