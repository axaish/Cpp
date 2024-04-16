#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
    std::string gender;

public:
    Person(std::string name, int age, std::string gender)
        : name(name), age(age), gender(gender) {}

    std::string getName() const {
        return name;
    }

    void setName(std::string newName) {
        name = newName;
    }

    int getAge() const {
        return age;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    std::string getGender() const {
        return gender;
    }

    void setGender(std::string newGender) {
        gender = newGender;
    }
};

class Student : public Person {
private:
    int rollNumber;
    std::string className;

public:
    Student(std::string name, int age, std::string gender, int rollNumber, std::string className)
        : Person(name, age, gender), rollNumber(rollNumber), className(className) {}

    int getRollNumber() const {
        return rollNumber;
    }

    void setRollNumber(int newRollNumber) {
        rollNumber = newRollNumber;
    }

    std::string getClassName() const {
        return className;
    }

    void setClassName(std::string newClassName) {
        className = newClassName;
    }
};

class Teacher : public Person {
private:
    std::string subject;
    double salary;

public:
    Teacher(std::string name, int age, std::string gender, std::string subject, double salary)
        : Person(name, age, gender), subject(subject), salary(salary) {}

    std::string getSubject() const {
        return subject;
    }

    void setSubject(std::string newSubject) {
        subject = newSubject;
    }

    double getSalary() const {
        return salary;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }
};

int main() {
    Student student("Alice", 20, "Female", 101, "12th Grade");
    Teacher teacher("Mr. Smith", 35, "Male", "Mathematics", 60000.0);

    student.setAge(21);
    teacher.setSalary(65000.0);

    std::cout << "Student: " << student.getName() << ", Age: " << student.getAge() << ", Gender: " << student.getGender()
              << ", Roll Number: " << student.getRollNumber() << ", Class: " << student.getClassName() << std::endl;

    std::cout << "Teacher: " << teacher.getName() << ", Age: " << teacher.getAge() << ", Gender: " << teacher.getGender()
              << ", Subject: " << teacher.getSubject() << ", Salary: $" << teacher.getSalary() << std::endl;

    return 0;
}
