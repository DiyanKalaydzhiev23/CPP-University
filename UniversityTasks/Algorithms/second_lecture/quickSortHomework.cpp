#include <iostream>
#include <vector>

using namespace std;

void printList(vector<int> &nums) {
    cout << "The array: ";
    
    for (int num : nums) {
        cout << num << " ";
    }

    cout << endl;
}

void printPivot(int pivot) {
    cout << "The value of the pivot is: " << pivot << endl;
}

void printBorders(int left, int right) {
    cout << "The array is from left: " << left << " to right: " << right << endl;
}

void printSwap(int leftValue, int rightValue) {
    cout << "Swapping left value: " << leftValue << " with right value: " << rightValue << endl;
}

int partition(vector<int>& nums, int low, int high) {
    int pivot = nums[(low + high) / 2];
    int left = low;
    int right = high;

    printBorders(left, right);
    printPivot(nums[pivot]);

    while (left <= right) {
        while (nums[left] < pivot) left++;
        while (nums[right] > pivot) right--;

        if (left <= right) {
            printSwap(nums[left], nums[right]);
            swap(nums[left], nums[right]);

            left++;
            right--;
        }
    }

    return left;
}

void quicksort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(nums, low, high);

        quicksort(nums, low, pivotIndex - 1);
        quicksort(nums, pivotIndex, high);
    }
}

int main() {
    vector<int> numbers = { 10, 8, 3, 40, 3, 4, 1 };

    printList(numbers);
    quicksort(numbers, 0, numbers.size() - 1);
    printList(numbers);

    return 0;
}
