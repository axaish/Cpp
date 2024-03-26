#include <iostream>
class Person {
protected:
    int salary;
public:
    void getData() {
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }
    void displayData() const {
        std::cout << "Salary: " << salary << std::endl;
    }
    virtual void calculateBonus() = 0; 
};

class Admin : public Person {
public:
    using Person::getData; 
    using Person::displayData; 
    void calculateBonus() override {
        int bonus = this->salary + 1000; 
        std::cout << "Bonus: " << bonus << std::endl;
    }
};
class Account : public Person {
public:
    using Person::getData; 
    using Person::displayData; 
    void calculateBonus() override {
        int bonus = this->salary + 1000; 
        std::cout << "Bonus: " << bonus << std::endl;
    }
};

class Master : public Admin, public Account {
public:
    
    void calculateBonus() override {
        int bonus = Admin::salary + 1000; 
        std::cout << "Bonus: " << bonus << std::endl;
    }
};

int main() {
    Master employee;

    employee.Admin::getData(); 
   
    employee.Admin::displayData(); 
    employee.calculateBonus();
    return 0;
}
