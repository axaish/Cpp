#include <iostream>
float calculateInterestSenior(float principal, float rate, float time) {
return (principal * rate * time) / 100;
}
float calculateInterest(float principal, float time) {
float rate = 10.0;
return (principal * rate * time) / 100;
}
int main() {
float principal, time, interest;
std::cout << "Enter principal amount: ";
std::cin >> principal;
std::cout << "Enter time period (in years): ";
std::cin >> time;
char customerType;
std::cout << "Are you a senior citizen? (Y/N): ";
std::cin >> customerType;
if (customerType == 'Y' || customerType == 'y') {
interest = calculateInterestSenior(principal, 12.0, time);
} else {
interest = calculateInterest(principal, time);
}
std::cout << "Simple interest: " << interest << std::endl;
return 0;
}
