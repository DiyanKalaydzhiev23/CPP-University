#include <iostream>
#include <vector>
using namespace std;


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

    return arr;
}

int main() {
    vector<int> nums = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(nums);

    for (const int num : nums) {
        cout << num << " ";
    }

    return 0;
}
