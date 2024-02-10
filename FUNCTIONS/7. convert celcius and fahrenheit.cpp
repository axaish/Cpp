#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    double temp;
    cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter temperature: ";
    cin >> temp;
    if(choice == 1)
        cout << temp << " degrees Celsius is equal to " << celsiusToFahrenheit(temp) << " degrees Fahrenheit." << endl;
    else if(choice == 2)
        cout << temp << " degrees Fahrenheit is equal to " << fahrenheitToCelsius(temp) << " degrees Celsius." << endl;
    else
        cout << "Invalid choice." << endl;
    return 0;
}
