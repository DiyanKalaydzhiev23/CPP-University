#include <iostream>
#include <vector>
#include <cstdlib>
#include<bits/stdc++.h>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::regex;
using std::abs;
using std::regex_replace;
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

void zigZagMatrixFill(int **matrix, int rows, int cols) {
    for (int row = 0; row < rows; row++)
        if (row % 2  == 0)
            for (int col = 0; col < cols; col++)
                cin >> matrix[row][col];
        else
            for (int col = cols - 1; col >= 0; col--)
                cin >> matrix[row][col];
}

void printMatrix(int **matrix, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << matrix[row][col] << " ";
        }

        cout << endl;
    }
}

void deleteAllNumbersInAString(string & row) {
    for (char i = '0'; i <= '9'; i++)
        row.erase(std::remove(row.begin(), row.end(), i), row.end());
}

inline void replaceSubString(string & toReplace, string & newString, string & text) {
    text = regex_replace(text, regex(toReplace), newString);
}

inline string clearAllRepeatingCharsInAString(string & text) {
    string temp;

    temp += text.at(0);

    for (int i = 1; i < text.length(); i++)
        if (temp.find(text.at(i)) >= temp.length())
            temp += text.at(i);

    return temp;
}

inline int countSameSymbolsInAString(string & text1, string & text2) {
    int sameSymbolsCounter = 0;

    string temp1 = clearAllRepeatingCharsInAString(text1);
    string temp2 = clearAllRepeatingCharsInAString(text2);

    if (temp1.length() < temp2.length()) {
        for (char chr : temp1)
            if (temp2.find(chr) < temp2.length())
                sameSymbolsCounter++;
    } else {
        for (char chr : temp2)
            if (temp1.find(chr) < text2.length())
                sameSymbolsCounter++;
    }

    return sameSymbolsCounter;
}

inline int countDifferentSymbolsInAString(string & text1, string & text2) {
    int diffSymbolsCounter = 0;

    string temp1 = clearAllRepeatingCharsInAString(text1);
    string temp2 = clearAllRepeatingCharsInAString(text2);

    if (temp1.length() < temp2.length()) {
        for (char chr : temp1)
            if (temp2.find(chr) >= temp2.length())
                diffSymbolsCounter++;
    } else {
        for (char chr : temp2)
            if (temp1.find(chr) >= text2.length())
                diffSymbolsCounter++;
    }

    return diffSymbolsCounter;
}



int exam() {
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

    // task 4

    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of cols: ";
    cin >> cols;

    int **matrix = new int *[rows];

    for (int row = 0; row < rows; row++)
        matrix[row] = new int[cols];

    zigZagMatrixFill(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    delete[] matrix[rows];

  // task 5
    string text = "9c10he4t38e6n9e7";

    deleteAllNumbersInAString(text);

    cout << text << endl;

    // task 6
    string toReplace = "te";
    string newString = "sa";

    replaceSubString(toReplace, newString, text);

    cout << text << endl;

    // task 7 & 8
    string text1;
    string text2;

    cout << "Enter the first text: ";
    cin >> text1;

    cout << "Enter the second text: ";
    cin >> text2;

    cout << "Count of same symbols: " << countSameSymbolsInAString(text1, text2) << endl;
    cout << "Count of different symbols: " << countDifferentSymbolsInAString(text1, text2) << endl;

    return 0;
}
