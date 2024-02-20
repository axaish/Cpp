#include <iostream>
#include <vector>
using namespace std;

vector<int> calculateDivisors(int num) {
    vector<int> divisors;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

bool isAbundantNumber(int num) {
    vector<int> divisors = calculateDivisors(num);
    int sum = 0;
    for (int i = 0; i < divisors.size(); i++) {
        sum += divisors[i];
    }
    return sum > num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Abundant numbers up to " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (isAbundantNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
