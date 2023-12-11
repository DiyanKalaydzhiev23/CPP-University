#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>

using namespace std;

void printLeftRightArray(vector<int> &leftArray, vector<int> &rightArray)
{
    cout << "The right array: ";

    for (const int el : leftArray)
    {
        cout << el << " ";
    }

    cout << endl;

    cout << "The left array: ";

    for (const int el : rightArray)
    {
        cout << el << " ";
    }

    cout << endl;

    cout << "------------------" << endl;
}

void mergeArrays(vector<int> &leftArr, vector<int> &rightArr, vector<int> &sortedArr)
{
    int leftArrSize = leftArr.size();
    int rightArrSize = rightArr.size();

    int leftIdx = 0, rightIdx = 0, sortedIdx = 0;

    while (leftIdx < leftArrSize && rightIdx < rightArrSize)
    {
        if (leftArr[leftIdx] < rightArr[rightIdx])
        {
            sortedArr[sortedIdx++] = leftArr[leftIdx++];
        }
        else
        {
            sortedArr[sortedIdx++] = rightArr[rightIdx++];
        }
    }

    while (leftIdx < leftArrSize)
    {
        sortedArr[sortedIdx++] = leftArr[leftIdx++];
    }

    while (rightIdx < rightArrSize)
    {
        sortedArr[sortedIdx++] = rightArr[rightIdx++];
    }
}

vector<int> mergeSort(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }

    int halfArraySize = arr.size() / 2;

    vector<int> arr1(arr.begin(), arr.begin() + halfArraySize);
    vector<int> arr2(arr.begin() + halfArraySize, arr.end());

    arr1 = mergeSort(arr1);
    arr2 = mergeSort(arr2);

    mergeArrays(arr1, arr2, arr);

    printLeftRightArray(arr1, arr2);

    return arr;
}

void printList(vector<int> &nums)
{
    cout << "The array: ";

    for (int num : nums)
    {
        cout << num << " ";
    }

    cout << endl;
}

void printPivot(int pivot)
{
    cout << "The value of the pivot is: " << pivot << endl;
}

void printBorders(int left, int right)
{
    cout << "The array is from left: " << left << " to right: " << right << endl;
}

void printSwap(int leftValue, int rightValue)
{
    cout << "Swapping left value: " << leftValue << " with right value: " << rightValue << endl;
}

int partition(vector<int> &nums, int low, int high)
{
    int pivot = nums[(low + high) / 2];
    int left = low;
    int right = high;

    printBorders(left, right);
    printPivot(nums[pivot]);

    while (left <= right)
    {
        while (nums[left] < pivot)
            left++;
        while (nums[right] > pivot)
            right--;

        if (left <= right)
        {
            printSwap(nums[left], nums[right]);
            swap(nums[left], nums[right]);

            left++;
            right--;
        }
    }

    return left;
}

void quicksort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(nums, low, high);

        quicksort(nums, low, pivotIndex - 1);
        quicksort(nums, pivotIndex, high);
    }
}

int main()
{
    time_t t0, t1, t2, t3;
    clock_t c0, c1, c2, c3;

    srand(time(NULL));

    vector<int> numbers = {10, 8, 3, 40, 3, 4, 1};
    vector<int> numbers2 = {10, 8, 3, 40, 3, 4, 1};

    printList(numbers);

    t0 = time(NULL);
    c0 = clock();

    quicksort(numbers, 0, numbers.size() - 1);

    c1 = clock();
    t1 = time(NULL);

    cout << "elapsed wall clock time: " << (float)(c1 - c0) / CLOCKS_PER_SEC << endl;

    printList(numbers);

    cout << "Merge sort --------" << endl;

    printList(numbers2);

    srand(time(NULL));

    t2 = time(NULL);
    c2 = clock();

    mergeSort(numbers2);

    c3 = clock();
    t3 = time(NULL);

    cout << "elapsed wall clock time: " << (float)(c3 - c2) / CLOCKS_PER_SEC << endl;

    printList(numbers2);

    return 0;
}
