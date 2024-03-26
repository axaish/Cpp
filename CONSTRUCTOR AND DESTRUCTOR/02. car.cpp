#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    Car(const std::string& carBrand, const std::string& carModel, int carYear)
        : brand(carBrand), model(carModel), year(carYear) {
        std::cout << "A new car " << year << " " << brand << " " << model << " is created." << std::endl;
    }

    ~Car() {
        std::cout << "The car " << year << " " << brand << " " << model << " is destroyed." << std::endl;
    }

    void drive() const {
        std::cout << "Driving the car " << year << " " << brand << " " << model << "." << std::endl;
    }

    void display() const {
        std::cout << "Car: " << year << " " << brand << " " << model << std::endl;
    }
};

int main() {
    Car myCar("Toyota", "Camry", 2022);

    myCar.drive();
    myCar.display();

    return 0;
}
