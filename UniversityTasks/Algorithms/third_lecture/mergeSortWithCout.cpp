#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;


void printLeftRightArray(vector<int> &leftArray, vector<int> &rightArray) {
    cout << "The right array: "; 

    for (const int el : leftArray) {
        cout << el << " ";
    }

    cout << endl;

    cout << "The left array: ";

    for (const int el : rightArray) {
        cout << el << " ";
    }

    cout << endl;

    cout << "------------------" << endl;
}


void mergeArrays(vector<int> &leftArr, vector<int> &rightArr, vector<int> &sortedArr) {
    int leftArrSize = leftArr.size();
    int rightArrSize = rightArr.size();

    int leftIdx = 0, rightIdx = 0, sortedIdx = 0;

    while (leftIdx < leftArrSize && rightIdx < rightArrSize) {
        if (leftArr[leftIdx] < rightArr[rightIdx]) {
            sortedArr[sortedIdx++] = leftArr[leftIdx++];
        }
        else {
            sortedArr[sortedIdx++] = rightArr[rightIdx++];
        }
    } 
    
    while (leftIdx < leftArrSize) {
        sortedArr[sortedIdx++] = leftArr[leftIdx++];
    }

    while (rightIdx < rightArrSize) {
        sortedArr[sortedIdx++] = rightArr[rightIdx++];
    }
}

vector<int> mergeSort(vector<int> &arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    int halfArraySize = arr.size() / 2;
    
    vector<int> arr1(arr.begin(), arr.begin() + halfArraySize);
    vector<int> arr2(arr.begin() + halfArraySize, arr.end());

    arr1 = mergeSort(arr1);
    arr2 = mergeSort(arr2);

    mergeArrays(arr1, arr2, arr);

    // printLeftRightArray(arr1, arr2);

    return arr;
}

int main() {
    vector<int> nums(100000);
    
    // Seed the random number generator
    srand(time(nullptr));

    // Fill the vector with random values
    for (int &num : nums) {
        num = rand() % 1000000;  // Random number between 0 and 999999
    }

    // Start the timer
    clock_t start = clock();

    // Perform merge sort
    mergeSort(nums);

    // Stop the timer
    clock_t end = clock();

    // Calculate the elapsed time in seconds
    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    cout << "Merge sort took " << elapsed_time << " seconds." << endl;

    return 0;
}