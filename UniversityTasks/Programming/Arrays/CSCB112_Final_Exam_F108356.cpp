#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;


void printMatrix(int **matrix, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << matrix[row][col] << " ";
        }

        cout << endl;
    }

    cout << endl;
}


void printSpiralMatrix(int **matrix, int row, int col, int rows, int cols) {
    if (row >= rows or col >= cols) return;

    for (int p = col; p < cols; p++)
        cout << matrix[row][p] << " ";

    for (int p = row + 1; p < rows; p++)
        cout << matrix[p][cols - 1] << " ";

    if ((rows - 1) != row) {
        for (int p = cols - 2; p >= col; p--)
            cout << matrix[rows - 1][p] << " ";
    }

    if ((cols - 1) != col) {
        for (int p = rows - 2; p > row; p--)
            cout << matrix[p][col] << " ";
    }

    printSpiralMatrix(matrix, row + 1, col + 1, rows - 1, cols - 1);
}


void changeOverFirstDiagonal(int **matrix, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < rows - row; col++) {
            matrix[row][col] = pow((row + col), row);
        }
    }

    printMatrix(matrix, rows, cols);
}


void zeroOverSecondDiagonal(int **matrix, int rows, int cols) {
    int rightIndex = rows - 1;

    for (int row = 0; row < rows; row++) {
        rightIndex--;

        for (int col = rightIndex; col >= 0; col--) {
            matrix[row][col] = 0;
        }
    }

    printMatrix(matrix, rows, cols);
}


int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of cols: ";
    cin >> cols;

    int **matrix = new int *[rows];

    srand(time(0));

    for (int row = 0; row < rows; row++) {
        matrix[row] = new int[cols];

        for (int col = 0; col < cols; col++) {
            matrix[row][col] = rand() % 134 - 12;
        }
    }

    printMatrix(matrix, rows, cols);
    zeroOverSecondDiagonal(matrix, rows, cols);
    changeOverFirstDiagonal(matrix, rows, cols);
    printSpiralMatrix(matrix, 0, 0, rows, cols);

    for (int row = 0; row < rows; row++) {
        delete[] matrix[row];
        matrix[row] = nullptr;
    }

    delete[] matrix;
    matrix = nullptr;

    return 0;
}