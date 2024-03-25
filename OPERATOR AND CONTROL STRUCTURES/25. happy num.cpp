#include <iostream>
#include <set>
using namespace std;

bool isHappyNumber(int num) {
    set<int> seen;
    while (true) {
        seen.insert(num);
        int sum = 0;
        while (num != 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        if (sum == 1) {
            return true;
        }
        if (seen.find(sum) != seen.end()) {
            return false;
        }
        num = sum;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Happy numbers up to " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (isHappyNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
