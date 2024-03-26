#include <iostream>
using namespace std;
int main() {
int number, sum = 0, remainder = 1;
cout << "Enter a number: ";
cin >> number;
while (remainder < number) {
if (number % remainder == 0) {
sum += remainder;
}
remainder++;
}
if (sum == number) {
cout << number << " is a perfect number" << endl;
} else {
cout << number << " is not a perfect number" << endl;
}
return 0;
}
