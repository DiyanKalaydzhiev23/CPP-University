#include <iostream>
#include <cstring>

using namespace std;

void averageNumberInARow() {
    double sum = 0;
    int n;

    cout << "Enter n: ";
    cin >> n;

    char row[n];

    cout << "Enter row of numbers: ";
    cin >> row;

    char *rowPtr = row;

    for (int i = 0; i < strlen(rowPtr); i++)
        sum += (rowPtr[i] - '0');

    cout << "Average number is: " << (sum / strlen(rowPtr)) << endl;
}

void checkIfMatrixIsSymmetric() {
    int n;

    cout << "Enter the size of the matrix, between 0 and 9: ";
    cin >> n;

    if (n > 10) {
        cout << "Not a valid number: ";
        return;
    }

    char **matrix = new char *[n];

    cout << "Enter the matrix: " << endl;

    for (int row = 0; row < n; row++) {
        matrix[row] = new char [n];
        cin >> matrix[row];
    }

    for (int row = 0; row < n - 1; row++) {
        for (int col = 0; col < n - 1; col++) {
            if (matrix[row][col] != matrix[col][row]) {
                cout << "Matrix IS NOT symmetric" << endl;
                return;
            }
        }
    }

    cout << "Matrix IS symmetric" << endl;
}

void checkIfMonotonousDecreasing() {
    char string[10];

    cout << "Enter a line of numbers to check if it's monotonously decreasing: ";
    cin >> string;

    int diff = (string[0] - '0') - (string[1] - '0');

    if (diff < 1) {
        cout << "The line of numbers IS NOT monotonously decreasing" << endl;
        return;
    }

    for (int i = 1, j = 2; i < strlen(string) - 1; i++, j++) {
        if ((string[i] - '0') - (string[j] - '0') != diff) {
            cout << "The line of numbers IS NOT monotonously decreasing" << endl;
            return;
        }
    }

    cout << "The line of numbers IS monotonously decreasing" << endl;
}

void checkIfPalindrome() {
    char string[20];

    cout << "Enter a word, to check if it's a palindrome: ";
    cin >> string;

    for (int i = 0, j = strlen(string) - 1; i < strlen(string) / 2; i++, j--) {
        if (string[i] != string[j]) {
            cout << "The word you entered IS NOT a palindrome" << endl;
            return;
        }
    }

    cout << "The word you entered IS a palindrome" << endl;
}

int main() {
    checkIfPalindrome();
    checkIfMonotonousDecreasing();
    checkIfMatrixIsSymmetric();
    averageNumberInARow();

    return 0;
}
