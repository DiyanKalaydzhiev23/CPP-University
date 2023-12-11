#include <iostream>
#include <algorithm>
#include <cstring>
#include <cctype>

using namespace std;

int sumOfElementsThatOccurOnlyInSecondSet(const int firstSet[], const int secondSet[], int sizeFirst, int sizeSecond) {
    int sum = 0;

    for (int i = 0; i < sizeSecond; i++) {
        int j;

        for (j = 0; j < sizeFirst; j++)
            if (firstSet[j] == secondSet[i])
                break;

        if (j == sizeFirst)
            sum += secondSet[i];
    }

    return sum;
}

void printEvenOddSet(const char textSet1[], const char textSet2[], int sizeFirst, int sizeSecond, int biggestSize) {
    char result[biggestSize]; // that's created because the problem description tells us to do it

    for (int i = 0; i < biggestSize; i++) {
        result[i] = '\0';
    }


    for (int i = 0; i < sizeFirst; i++) {
        if (i % 2 == 0) {
            result[i] = textSet1[i];
        }
    }

    for (int i = 1; i < sizeSecond; i++) {
        if (i % 2 == 1) {
            int j;

            for (j = 0; j < sizeFirst; j++)
                if (textSet1[j] == textSet2[i])
                    break;

            if (j == sizeFirst)
                result[i] = textSet2[i];
        }
    }

    cout << "{";

    for (int i = 0; i < biggestSize; i++) {
        if (result[i] != '\0')
            cout << result[i] << ", ";
    }

    cout << "}" << endl;
}

string encodeString() {
    string text = "this one is a test string!";
    int number = 2;

    for (int i = 0; i < text.length(); i++) {
        char el = text[i];

        if (el < 'A' || el > 'z') {
            text[i] = '*';
        }
        else {
            text[i] += number;
            text[i] = toupper(text[i]);
        }
    }

    return text;
}

int main() {
    int firstSet [] = {6, 11, 8, 2, 5};
    int secondSet [] = {5, 2, 3, 8, 1, 6, 4, 12, 9, 10};

    int sizeFirst, sizeSecond;

    sizeFirst = sizeof(firstSet) / sizeof(firstSet[0]);
    sizeSecond = sizeof(secondSet) / sizeof(secondSet[1]);

    cout << "The sum is: " << sumOfElementsThatOccurOnlyInSecondSet(firstSet, secondSet, sizeFirst, sizeSecond) << endl;

    char textSet1 [] = {'e', 'r', 'D', 'U', 'w', 'm', 'B', 'x', 'N', 'z', };
    char textSet2 [] = {'m', 'd', 'r', 'D', 'U', 'w', 'a', 'W', };

    sizeFirst = sizeof(textSet1) / sizeof(textSet1[0]);
    sizeSecond = sizeof(textSet2) / sizeof(textSet2[1]);

    printEvenOddSet(textSet1, textSet2, sizeFirst, sizeSecond, max(sizeFirst, sizeSecond));
    cout << encodeString();
    return 0;
}
