#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> st;
    int maxArea = 0;

    for (int i = 0; i <= n; ++i) {
        while (!st.empty() && (i == n || heights[i] < heights[st.top()])) {
            int h = heights[st.top()];
            st.pop();
            int w = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, h * w);
        }
        st.push(i);
    }

    return maxArea;
}

int main() {
    int n;
    cout << "Enter the number of rectangles: ";
    cin >> n;

    vector<int> heights(n);
    cout << "Enter the heights of the rectangles: ";
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    cout << "Largest rectangle area: " << largestRectangleArea(heights) << endl;

    return 0;
}
