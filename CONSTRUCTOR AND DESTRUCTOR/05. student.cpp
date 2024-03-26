#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    Student(const std::string& studentName, int studentAge)
        : name(studentName), age(studentAge) {
        std::cout << "A new student named " << name << " aged " << age << " is enrolled." << std::endl;
    }

    ~Student() {
        std::cout << "The student named " << name << " aged " << age << " is unenrolled." << std::endl;
    }

    void display() const {
        std::cout << "Student: Name = " << name << ", Age = " << age << std::endl;
    }
};

int main() {
    Student myStudent("John Doe", 20);

    myStudent.display();

    return 0;
}
