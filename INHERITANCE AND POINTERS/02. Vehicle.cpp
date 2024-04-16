#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(std::string make, std::string model, int year) : make(make), model(model), year(year) {}

    std::string getMake() const {
        return make;
    }

    void setMake(std::string newMake) {
        make = newMake;
    }

    std::string getModel() const {
        return model;
    }

    void setModel(std::string newModel) {
        model = newModel;
    }

    int getYear() const {
        return year;
    }

    void setYear(int newYear) {
        year = newYear;
    }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    std::string fuelType;

public:
    Car(std::string make, std::string model, int year, int seatingCapacity, std::string fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    int getSeatingCapacity() const {
        return seatingCapacity;
    }

    void setSeatingCapacity(int newSeatingCapacity) {
        seatingCapacity = newSeatingCapacity;
    }

    std::string getFuelType() const {
        return fuelType;
    }

    void setFuelType(std::string newFuelType) {
        fuelType = newFuelType;
    }
};

class Truck : public Vehicle {
private:
    int payloadCapacity;
    int towingCapacity;

public:
    Truck(std::string make, std::string model, int year, int payloadCapacity, int towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}

    int getPayloadCapacity() const {
        return payloadCapacity;
    }

    void setPayloadCapacity(int newPayloadCapacity) {
        payloadCapacity = newPayloadCapacity;
    }

    int getTowingCapacity() const {
        return towingCapacity;
    }

    void setTowingCapacity(int newTowingCapacity) {
        towingCapacity = newTowingCapacity;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2022, 5, "Gasoline");
    Truck myTruck("Ford", "F-150", 2021, 2000, 5000);

    myCar.setYear(2023);
    myTruck.setPayloadCapacity(2500);

    std::cout << "Car: " << myCar.getMake() << " " << myCar.getModel() << " " << myCar.getYear()
              << ", Seating Capacity: " << myCar.getSeatingCapacity() << ", Fuel Type: " << myCar.getFuelType() << std::endl;

    std::cout << "Truck: " << myTruck.getMake() << " " << myTruck.getModel() << " " << myTruck.getYear()
              << ", Payload Capacity: " << myTruck.getPayloadCapacity() << ", Towing Capacity: " << myTruck.getTowingCapacity() << std::endl;

    return 0;
}
