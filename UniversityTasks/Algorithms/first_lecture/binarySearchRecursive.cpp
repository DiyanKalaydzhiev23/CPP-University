#include <iostream>
#include <vector>

using namespace std;

int binarySearch(int searchedNum, int leftIndex, int rightIndex, vector<int> list) {
    int currentIndex = (leftIndex + rightIndex) / 2;
    
    if (leftIndex > rightIndex) {
        return -1;
    }

    if (list[currentIndex] == searchedNum) {
        return currentIndex;
    }
    else if (searchedNum > list[currentIndex]) {
        return binarySearch(searchedNum, currentIndex + 1, rightIndex, list);
    }
    else {
        return binarySearch(searchedNum, leftIndex, currentIndex - 1, list);
    }
}

int main() {
    int searchedNum;
    vector<int> list = {5, 7, 8, 12, 50, 101, 123};

    cout << "Enter the searched num: ";
    cin >> searchedNum;

    cout << "The index of the searched num is: " << binarySearch(searchedNum, 0, list.size(), list);

    return 0;
}