#include <iostream>
#include <vector>
#include <cmath>

void printBoard(const std::vector<int>& board) {
    int size = board.size();
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (board[i] == j) {
                std::cout << "Q ";
            } else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

bool isValid(const std::vector<int>& board, int row, int col) {
    for (int i = 0; i < row; ++i) {
        if (board[i] == col || abs(i - row) == abs(board[i] - col)) {
            return false;
        }
    }
    return true;
}

void solveNQueens(std::vector<int>& board, int row, int& count) {
    int size = board.size();
    if (row == size) {
        count++;
        std::cout << "Solution " << count << ":\n";
        printBoard(board);
        return;
    }

    for (int col = 0; col < size; ++col) {
        if (isValid(board, row, col)) {
            board[row] = col;
            solveNQueens(board, row + 1, count);
            board[row] = -1;
        }
    }
}

void nQueens(int n) {
    std::vector<int> board(n, -1);
    int count = 0;
    solveNQueens(board, 0, count);
    if (count == 0) {
        std::cout << "No solution exists for " << n << "-queens problem.\n";
    }
}

int main() {
    int n;
    std::cout << "Enter the number of queens (N): ";
    std::cin >> n;
    nQueens(n);
    return 0;
}
