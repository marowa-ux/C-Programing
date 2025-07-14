#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int matrix3[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j] + matrix3[i][j];
        }
    }
}
void displayMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {

    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matrix3[ROWS][COLS] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};

    int resultMatrix[ROWS][COLS];

    addMatrices(matrix1, matrix2, matrix3, resultMatrix);

    cout << "Matrix 1:" << endl;
    displayMatrix(matrix1);

    cout << "Matrix 2:" << endl;
    displayMatrix(matrix2);

    cout << "Matrix 3:" << endl;
    displayMatrix(matrix3);


    cout << "Result Matrix (Matrix1 + Matrix2 + Matrix3):" << endl;
    displayMatrix(resultMatrix);

    return 0;
}

