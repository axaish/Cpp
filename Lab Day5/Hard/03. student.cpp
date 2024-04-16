#include <iostream>
int main() {
    int marks[4], total = 0, aggregate;
    std::cout << "Enter the marks of the student: ";
    for (int i = 0; i < 4; ++i) {
        std::cin >> marks[i];
        total += marks[i];
    }
    aggregate = total / 4;
    std::cout << "Total marks: " << total << std::endl;
    std::cout << "Aggregate: " << aggregate << std::endl;
    std::cout << "Grade: ";
    if (aggregate >= 75) {
        std::cout << "Distinction";
    } else if (aggregate >= 60) {
        std::cout << "First Division";
    } else if (aggregate >= 50) {
        std::cout << "Second Division";
    } else if (aggregate >= 40) {
        std::cout << "Third Division";
    } else {
        std::cout << "Fail";
    }
    std::cout << std::endl;

    return 0;
}
