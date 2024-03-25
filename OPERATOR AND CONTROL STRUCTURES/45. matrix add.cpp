#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    int mat1[100][100], mat2[100][100], sum[100][100];

    cout << "Enter the number of rows for the matrices: ";
    cin >> rows;
    cout << "Enter the number of columns for the matrices: ";
    cin >> cols;

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "Result of addition:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
