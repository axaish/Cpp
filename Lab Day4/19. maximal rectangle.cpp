#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int maximalRectangle(vector<vector<char> >& matrix) {
    if (matrix.empty() || matrix[0].empty()) return 0;

    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> heights(cols, 0);
    int maxArea = 0;

    stack<int> s;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            heights[j] = matrix[i][j] == '1' ? heights[j] + 1 : 0;
        }

        for (int j = 0; j <= cols; ++j) {
            while (!s.empty() && (j == cols || heights[s.top()] >= heights[j])) {
                int height = heights[s.top()];
                s.pop();
                int width = s.empty() ? j : j - s.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            s.push(j);
        }
    }

    return maxArea;
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<char> > matrix(rows, vector<char>(cols));
    cout << "Enter the elements of the matrix (0 or 1):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Maximal Rectangle Area: " << maximalRectangle(matrix) << endl;

    return 0;
}
