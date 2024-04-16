#include <iostream>
#include <vector>

bool isSafe(int row, int col, std::vector<std::vector<int> >& matrix, int N) {
    for (int i = 0; i < N; ++i) {
        if (matrix[row][i] == 1 || matrix[i][col] == 1) {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (matrix[i][j] == 1) {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j < N; --i, ++j) {
        if (matrix[i][j] == 1) {
            return false;
        }
    }

    return true;
}

int countDistinctSolutionsUtil(int row, std::vector<std::vector<int> >& matrix, int N) {
    if (row == N) {
        return 1;
    }

    int count = 0;

    for (int col = 0; col < N; ++col) {
        if (isSafe(row, col, matrix, N)) {
            matrix[row][col] = 1;

            count += countDistinctSolutionsUtil(row + 1, matrix, N);

            matrix[row][col] = 0;
        }
    }

    return count;
}

int countDistinctSolutions(int N) {
    std::vector<std::vector<int> > matrix(N, std::vector<int>(N, 0));

    return countDistinctSolutionsUtil(0, matrix, N);
}

int main() {
    int N;
    std::cout << "Enter the size of the matrix (N): ";
    std::cin >> N;

    int distinctSolutions = countDistinctSolutions(N);
    std::cout << "Number of distinct solutions for a " << N << "x" << N << " matrix: " << distinctSolutions << std::endl;

    return 0;
}
