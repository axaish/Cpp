#include <iostream>
#include <string>
class Employee {
protected:
    std::string name;
    int id;
    double salary;
public:
    void set_employee_data(const std::string& emp_name, int emp_id, double emp_salary) {
        name = emp_name;
        id = emp_id;
        salary = emp_salary;
    }
    void display_employee_data() const {
        std::cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << std::endl;
    }
};
class Manager : public Employee {
private:
    std::string department;
    double bonus;

public:
    void set_manager_data(const std::string& mgr_department, double mgr_bonus) {
        department = mgr_department;
        bonus = mgr_bonus;
    }

    void display_manager_data() const {
        std::cout << "Department: " << department << ", Bonus: " << bonus << std::endl;
    }
};

class Engineer : public Employee {
private:
    std::string specialty;
    int hours;

public:
    void set_engineer_data(const std::string& eng_specialty, int eng_hours) {
        specialty = eng_specialty;
        hours = eng_hours;
    }

    void display_engineer_data() const {
        std::cout << "Specialty: " << specialty << ", Hours: " << hours << std::endl;
    }
};

int main() {
    Manager manager;
    manager.set_employee_data("John Doe", 1001, 60000);
    manager.set_manager_data("Engineering", 5000);

    Engineer engineer;
    engineer.set_employee_data("Jane Smith", 1002, 55000);
    engineer.set_engineer_data("Software Development", 40);

    std::cout << "Manager Details:" << std::endl;
    manager.display_employee_data();
    manager.display_manager_data();

    std::cout << "\nEngineer Details:" << std::endl;
    engineer.display_employee_data();
    engineer.display_engineer_data();

    return 0;
}
