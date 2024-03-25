#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int mat[maxSize][maxSize];
    int size;
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    cout << "Enter the size of the square matrix: ";
    cin >> size;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "Element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < size; ++i) {
        primaryDiagonalSum += mat[i][i];
    }

    for (int i = 0; i < size; ++i) {
        secondaryDiagonalSum += mat[i][size - 1 - i];
    }

    cout << "\nSum of elements in the primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of elements in the secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}
