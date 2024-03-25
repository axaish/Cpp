#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>

double calculateAverage(const std::vector<double>& numbers) {
    double sum = 0.0;
    for (size_t i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }
    return sum / numbers.size();
}

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    try {
        std::ifstream file(filename.c_str());
        if (!file.is_open()) {
            throw std::runtime_error("Error opening file.");
        }

        std::vector<double> numbers;
        double num;
        while (file >> num) {
            numbers.push_back(num);
        }

        if (file.bad()) {
            throw std::runtime_error("Error reading file.");
        }

        if (numbers.empty()) {
            throw std::runtime_error("No numeric data found in file.");
        }

        double average = calculateAverage(numbers);
        std::cout << "Average: " << average << std::endl;

        file.close();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
