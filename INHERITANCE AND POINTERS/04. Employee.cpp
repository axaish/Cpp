#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double salary;

public:
    Employee(std::string name, int id, double salary)
        : name(name), id(id), salary(salary) {}

    std::string getName() const {
        return name;
    }

    void setName(std::string newName) {
        name = newName;
    }

    int getId() const {
        return id;
    }

    void setId(int newId) {
        id = newId;
    }

    double getSalary() const {
        return salary;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }
};

class Manager : public Employee {
private:
    std::string department;
    double bonus;

public:
    Manager(std::string name, int id, double salary, std::string department, double bonus)
        : Employee(name, id, salary), department(department), bonus(bonus) {}

    std::string getDepartment() const {
        return department;
    }

    void setDepartment(std::string newDepartment) {
        department = newDepartment;
    }

    double getBonus() const {
        return bonus;
    }

    void setBonus(double newBonus) {
        bonus = newBonus;
    }
};

class Engineer : public Employee {
private:
    std::string specialty;
    int hours;

public:
    Engineer(std::string name, int id, double salary, std::string specialty, int hours)
        : Employee(name, id, salary), specialty(specialty), hours(hours) {}

    std::string getSpecialty() const {
        return specialty;
    }

    void setSpecialty(std::string newSpecialty) {
        specialty = newSpecialty;
    }

    int getHours() const {
        return hours;
    }

    void setHours(int newHours) {
        hours = newHours;
    }
};

int main() {
    Manager manager("John Doe", 1001, 80000.0, "Sales", 5000.0);
    Engineer engineer("Jane Smith", 2001, 75000.0, "Software", 40);

    manager.setSalary(85000.0);
    engineer.setHours(45);

    std::cout << "Manager: " << manager.getName() << ", ID: " << manager.getId() << ", Salary: $" << manager.getSalary()
              << ", Department: " << manager.getDepartment() << ", Bonus: $" << manager.getBonus() << std::endl;

    std::cout << "Engineer: " << engineer.getName() << ", ID: " << engineer.getId() << ", Salary: $" << engineer.getSalary()
              << ", Specialty: " << engineer.getSpecialty() << ", Hours: " << engineer.getHours() << std::endl;

    return 0;
}
