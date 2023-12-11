#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& nums, int low, int high) {
    int pivot = nums[(low + high) / 2];
    int left = low;
    int right = high;

    while (left <= right) {
        while (nums[left] < pivot) left++;
        while (nums[right] > pivot) right--;

        if (left <= right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }

    return left; // Return the index where the partition ends.
}

void quicksort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(nums, low, high);

        quicksort(nums, low, pivotIndex - 1);  // Recursively sort the elements before the partition
        quicksort(nums, pivotIndex, high);     // Recursively sort the elements starting from the partition to the end
    }
}

int main() {
    vector<int> numbers = { 10, 8, 3, 5, 6, 0, 3, 5, 2 };

    quicksort(numbers, 0, numbers.size() - 1);

    for (int el : numbers) {
        cout << el << " ";
    }

    return 0;
}
