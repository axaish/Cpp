#include <iostream>
#include <vector>

using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    
    return n + 1;
}

int main() {
    int arr1[] = {1, 2, 0};
    vector<int> nums1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    cout << "arr1[] = {1, 2, 0} Output: " << firstMissingPositive(nums1) << endl;

    int arr2[] = {3, 4, -1, 1};
    vector<int> nums2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
    cout << "arr2[] = {3, 4, -1, 1} Output: " << firstMissingPositive(nums2) << endl;

    int arr3[] = {7, 8, 9, 11, 12};
    vector<int> nums3(arr3, arr3 + sizeof(arr3) / sizeof(arr3[0]));
    cout << "arr3[] = {7, 8, 9, 11, 12} Output: " << firstMissingPositive(nums3) << endl;

    return 0;
}
