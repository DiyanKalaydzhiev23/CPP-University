#include <iostream>
#include <vector>
#include <sstream>
#include <climits>

using namespace std;

int findMaxSum(vector<int> nums, int subSize) {
    int maxSum = INT_MIN;

    for (int i = 0; i < (int)nums.size(); i++) {
        int currentSum = 0;

        for (int j = i; j < i + subSize; j++) {
            if (j >= (int)nums.size()) {
                break;
            }

            currentSum += nums[j];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int maaain() {
    string line;

    while (getline(cin, line)) {
        istringstream iss(line);

        int size;
        iss >> size;

        int subSize;
        iss >> subSize;

        vector<int> nums;
        int temp;

        for (int i = 0; i < size; i++) {
            cin >> temp;
            nums.push_back(temp);
        }

        int result = findMaxSum(nums, subSize);

        if (result != INT_MIN) {
            cout << result << endl;
        }

        cin.ignore();
    }

    return 0;
}


//
// Created by Diyan on 21.10.2023 г..
//
