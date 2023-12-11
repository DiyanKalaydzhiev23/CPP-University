#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long int getMedian(vector<long long int> nums) {
    sort(nums.begin(), nums.end());
    return nums[(nums.size() - 1) / 2];
}

int main() {
    long long int testCases, n, temp;
    cin >> testCases;

    for (long long int t = 0; t < testCases; ++t) {
        cin >> n;
        vector<long long int> nums;

        for (long long int i = 0; i < n; ++i) {
            cin >> temp;
            nums.push_back(temp);
        }

        cout << getMedian(nums) << endl;
    }
    return 0;
}
