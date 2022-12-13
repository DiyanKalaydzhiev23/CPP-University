#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::endl;

inline void addElementToList(const string & element, vector<string> & list) {
    list.push_back(element);
}

inline void changeElementAtIndexInList(const string & element, int index, vector<string> & list) {
    if (index < 0 || index > list.size()) {
        cout << "Invalid index!" << endl;
    } else {
        list[index] = element;
    }
}

inline void insertElementAtIndexToList(const string & element, int index, vector<string> & list) {
    if (index < 0 || index > list.size()) {
        cout << "Invalid index!" << endl;
    } else {
        list.insert(list.begin() + index, element);
    }
}

inline void removeElementFromList(const string & element, vector<string> & list) {
    for (int i = 0; i < list.size(); i++) {
        if (list[i] == element) {
            list.erase(list.begin() + i);
            break;
        }
    }
}

void findWagons(int startIndex, int endIndex, const string & composition) {
    string validWagons = "OPK";

    for (int i = startIndex; i <= endIndex; i++) {
        if (validWagons.find(composition[i]) != std::string::npos) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    vector<string> list;

    // task 1 & 2
    addElementToList("F108356", list);
    addElementToList("F108534", list);
    addElementToList("F108537", list);
    removeElementFromList("F108537", list);
    insertElementAtIndexToList("F106534", 2, list);
    changeElementAtIndexInList("F102734", 1, list);

    // task 3
    string composition;
    int startIndex, endIndex;

    cout << "Enter composition: ";
    cin >> composition;

    cout << "Enter starting index: ";
    cin >> startIndex;

    cout << "Enter end index: ";
    cin >> endIndex;

    findWagons(startIndex, endIndex, composition);

    return 0;
}
