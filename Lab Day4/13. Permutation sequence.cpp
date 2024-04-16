#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

std::string intToString(int num) {
    std::ostringstream oss;
    oss << num;
    return oss.str();
}

std::string getPermutation(int n, int k) {
    std::string result;
    std::vector<int> nums;
    int fact = 1;

    for (int i = 1; i <= n; ++i) {
        nums.push_back(i);
        fact *= i;
    }

    --k;

    while (n > 0) {
        fact /= n;
        int index = k / fact;
        k %= fact;

        result += intToString(nums[index]);
        nums.erase(nums.begin() + index);

        --n;
    }

    return result;
}

int main() {
    int n, k;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    std::string permutation = getPermutation(n, k);
    std::cout << "Permutation sequence: " << permutation << std::endl;

    return 0;
}
