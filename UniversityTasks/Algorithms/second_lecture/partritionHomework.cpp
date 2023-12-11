#include <iostream>
#include <vector>

using namespace std;

void printRightPart(int pivotIdx, vector<int> &nums) {
    cout << "Right part: ";
 
    for (int i = pivotIdx; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
}

void printLeftPart(int pivotIdx, vector<int> &nums) {
    cout << "Left part: ";
    
    for (int i = 0; i < pivotIdx; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
}

vector<int> partition(vector<int> nums, int pivot, string text) {
    int left = 0;
    int right = nums.size() - 1;

    cout << text << endl << endl;

    cout << "Pivot: " << nums[pivot] << endl;

    while (left <= right) {
        if (nums[left] > nums[pivot] && nums[right] < nums[pivot]) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
        }
        if (nums[left] <= nums[pivot]) {
            left += 1;
        }
        if (nums[right] >= nums[pivot]) {
            right -= 1;
        }
    }

    printLeftPart(pivot, nums);
    printRightPart(pivot, nums);

    cout << "---------" << endl;

    return nums;
}

int main() {
    vector<int> numbers = { 5, 8, 6, 3, 7, 9 };
    vector<int> numbersSorted = { 1, 2, 3, 4, 5, 6 };
    vector<int> numbersReversed = { 6, 5, 4, 3, 2, 1 };

    vector<int> pivots = { 0, (int)(numbers.size() - 1), (int)(numbers.size() / 2), 2 };

    for (int pivot : pivots) {
        partition(numbers, pivot, "Random array: ");
        partition(numbersSorted, pivot, "Sorted array: ");
        partition(numbersReversed, pivot, "Reversed array: ");
    }

    return 0;
}