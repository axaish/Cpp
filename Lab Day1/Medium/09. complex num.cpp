#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        if (imag >= 0) {
            std::cout << real << " + " << imag << "i";
        } else {
            std::cout << real << " - " << -imag << "i";
        }
    }
};

int main() {
    Complex num1(3.5, 2.0);
    Complex num2(1.5, 4.0);

    Complex sum = num1 + num2;
    Complex diff = num1 - num2;

    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    std::cout << "Difference: ";
    diff.display();
    std::cout << std::endl;

    return 0;
}
