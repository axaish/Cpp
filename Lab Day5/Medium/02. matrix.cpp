#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int> > data;
    int rows;
    int cols;

public:
    Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
        data.resize(rows, std::vector<int>(cols, 0));
    }
    void setElement(int row, int col, int value) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            data[row][col] = value;
        } else {
            std::cerr << "Invalid index!" << std::endl;
        }
    }
    int getElement(int row, int col) const {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            return data[row][col];
        } else {
            std::cerr << "Invalid index!" << std::endl;
            return 0; 
        }
    }
};

int main() {
    Matrix matrix(3, 3); 
    matrix.setElement(0, 0, 1);
    matrix.setElement(0, 1, 2);
    matrix.setElement(0, 2, 3);
    matrix.setElement(1, 0, 4);
    matrix.setElement(1, 1, 5);
    matrix.setElement(1, 2, 6);
    matrix.setElement(2, 0, 7);
    matrix.setElement(2, 1, 8);
    matrix.setElement(2, 2, 9);
    std::cout << "Matrix elements:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix.getElement(i, j) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
