#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int> > mat;
    size_t rows;
    size_t cols;

public:
    Matrix(size_t rows, size_t cols) : rows(rows), cols(cols) {
        mat.resize(rows, std::vector<int>(cols, 0));
    }
    Matrix operator+(const Matrix& other) const {
        Matrix result(rows, cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }
    Matrix operator-(const Matrix& other) const {
        Matrix result(rows, cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
            }
        }
        return result;
    }
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            std::cerr << "Error: Matrices cannot be multiplied. Number of columns in first matrix must be equal to number of rows in second matrix." << std::endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, other.cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < other.cols; ++j) {
                for (size_t k = 0; k < cols; ++k) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }

    void display() const {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    std::vector<std::vector<int> >& getMatrix() {
        return mat;
    }
};

int main() {
    Matrix mat1(2, 2);
    mat1.getMatrix()[0][0] = 1;
    mat1.getMatrix()[0][1] = 2;
    mat1.getMatrix()[1][0] = 3;
    mat1.getMatrix()[1][1] = 4;

    std::cout << "Matrix 1:" << std::endl;
    mat1.display();
    std::cout << std::endl;

    Matrix mat2(2, 2);
    mat2.getMatrix()[0][0] = 5;
    mat2.getMatrix()[0][1] = 6;
    mat2.getMatrix()[1][0] = 7;
    mat2.getMatrix()[1][1] = 8;

    std::cout << "Matrix 2:" << std::endl;
    mat2.display();
    std::cout << std::endl;

    Matrix matSum = mat1 + mat2;
    std::cout << "Matrix Sum:" << std::endl;
    matSum.display();
    std::cout << std::endl;

    Matrix matDiff = mat1 - mat2;
    std::cout << "Matrix Difference:" << std::endl;
    matDiff.display();
    std::cout << std::endl;

    Matrix matProd = mat1 * mat2;
    std::cout << "Matrix Product:" << std::endl;
    matProd.display();

    return 0;
}
