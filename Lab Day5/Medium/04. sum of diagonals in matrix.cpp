#include <iostream>
#include <vector>
int sumOfDiagonals(const std::vector<std::vector<int> >& matrix) {
    int sum = 0;
    int n = matrix.size(); 
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][i];
    }
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][n - i - 1];
    }

    return sum;
}

int main() {
    int n;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> n;

    std::vector<std::vector<int> > matrix(n, std::vector<int>(n));

    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
    int diagonalSum = sumOfDiagonals(matrix);
    std::cout << "Sum of diagonals of the matrix: " << diagonalSum << std::endl;

    return 0;
}
