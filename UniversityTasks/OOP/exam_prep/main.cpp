#include <iostream>


using namespace std;


int sort_function(int *array) {
    return *array;
}


int main() {

    int array[] = {4, 3, 2, 1};

    sort_function(array);

    for (auto el : array) {
        cout << el << " ";
    }

    return 0;
}
