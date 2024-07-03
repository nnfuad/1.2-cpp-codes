#include <iostream>
using namespace std;

const int MAX = 100;

void multiplyMatrices(int mat1[][MAX], int mat2[][MAX], int res[][MAX], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            res[i][j] = 0;
            for (int k = 0; k < col1; ++k) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int row1, col1, row2, col2;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> row2 >> col2;

    if (col1 != row2) {
        cout << "Cannot multiply the matrices. Number of columns in the first matrix must be equal to the number of rows in the second matrix.";
        return 0;
    }

    int mat1[MAX][MAX], mat2[MAX][MAX], res[MAX][MAX];

    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            cin >> mat2[i][j];
        }
    }

    multiplyMatrices(mat1, mat2, res, row1, col1, row2, col2);

    cout << "Resultant matrix after multiplication:\n";
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
