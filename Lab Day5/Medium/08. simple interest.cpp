#include <iostream>

double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}
double calculateSeniorCitizenInterest(double principal, double time) {
    double rate = 12.0;
    return calculateSimpleInterest(principal, rate, time);
}

int main() {
    double principal, time;
    char seniorCitizen;

    std::cout << "Enter principal amount: ";
    std::cin >> principal;
    std::cout << "Enter time period (in years): ";
    std::cin >> time;
    std::cout << "Are you a senior citizen? (Y/N): ";
    std::cin >> seniorCitizen;

    double interest;
    if (seniorCitizen == 'Y' || seniorCitizen == 'y') {
        interest = calculateSeniorCitizenInterest(principal, time);
    } else {
        double rate = 10.0;
        interest = calculateSimpleInterest(principal, rate, time);
    }

    std::cout << "Simple interest: " << interest << std::endl;

    return 0;
}
