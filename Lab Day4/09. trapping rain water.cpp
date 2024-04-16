#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int trapWater(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;
    
    int water = 0;
    stack<int> st;
    
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && height[i] > height[st.top()]) {
            int top = st.top();
            st.pop();
            if (st.empty()) break;
            int distance = i - st.top() - 1;
            int boundedHeight = min(height[i], height[st.top()]) - height[top];
            water += distance * boundedHeight;
        }
        st.push(i);
    }
    
    return water;
}

int main() {
    int arr1[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> height1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    cout << "height 1= {0,1,0,2,1,0,1,3,2,1,2,1} Output: " << trapWater(height1) << endl;
    
    int arr2[] = {4,2,0,3,2,5};
    vector<int> height2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
    cout << "height 2 = {4,2,0,3,2,5} Output: " << trapWater(height2) << endl;
    
    return 0;
}
