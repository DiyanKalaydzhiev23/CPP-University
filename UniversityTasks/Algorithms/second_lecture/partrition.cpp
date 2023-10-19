#include <iostream>
#include <vector>

using namespace std;


vector<int> partition(vector<int> nums) {
    int pivot = nums.size() / 2;
    int left = 0;
    int right = nums.size() - 1;

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

    return nums;
}

int main() {
    vector<int> numbers = { 5, 8, 6, 3, 7, 9 };

    numbers = partition(numbers);

    for (int el : numbers) {
        cout << el << " ";
    }

    return 0;
}