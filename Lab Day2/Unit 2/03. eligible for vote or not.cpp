#include <iostream>
void getAge(int &age) {
std::cout << "Enter your age: ";
std::cin >> age;
}
void checkEligibility(int age) {
int votingAge = 18;
if (age >= votingAge) {
std::cout << "You are eligible to vote." << std::endl;
} else {
int yearsLeft = votingAge - age;
std::cout << "You are not eligible to vote. Years left to be eligible: " << yearsLeft << "year(s)." << std::endl;
}
}
int main() {
int personAge;
getAge(personAge);
checkEligibility(personAge);
return 0;
}
