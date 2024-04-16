#include <iostream>
using namespace std;
class Person {
protected:
    string name;
public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
    }
    void displayData() {
        cout << "Name: " << name << endl;
    }
};
class Account : public Person {
protected:
    double salary;
public:
    void getData() {
        Person::getData();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayData() {
        Person::displayData();
        cout << "Salary: " << salary << endl;
    }
    double getSalary() {
        return salary;
    }
};
class Admin : public Account {
public:
    double bonus() {
        return getSalary() * 1.1; 
    }
};
class Master : public Account {
public:
    double bonus() {
        return getSalary() * 1.1; 
    }
};

int main() {
    Master m;
    m.getData();
    cout << "Bonus: " << m.bonus() << endl;
    return 0;
}
