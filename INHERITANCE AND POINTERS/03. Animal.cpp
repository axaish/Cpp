#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    std::string species;
    int age;

public:
    Animal(std::string name, std::string species, int age)
        : name(name), species(species), age(age) {}

    std::string getName() const {
        return name;
    }

    void setName(std::string newName) {
        name = newName;
    }

    std::string getSpecies() const {
        return species;
    }

    void setSpecies(std::string newSpecies) {
        species = newSpecies;
    }

    int getAge() const {
        return age;
    }

    void setAge(int newAge) {
        age = newAge;
    }
};

class Cat : public Animal {
private:
    std::string color;
    std::string breed;

public:
    Cat(std::string name, std::string species, int age, std::string color, std::string breed)
        : Animal(name, species, age), color(color), breed(breed) {}

    std::string getColor() const {
        return color;
    }

    void setColor(std::string newColor) {
        color = newColor;
    }

    std::string getBreed() const {
        return breed;
    }

    void setBreed(std::string newBreed) {
        breed = newBreed;
    }
};

class Dog : public Animal {
private:
    double weight;
    std::string breed;

public:
    Dog(std::string name, std::string species, int age, double weight, std::string breed)
        : Animal(name, species, age), weight(weight), breed(breed) {}

    double getWeight() const {
        return weight;
    }

    void setWeight(double newWeight) {
        weight = newWeight;
    }

    std::string getBreed() const {
        return breed;
    }

    void setBreed(std::string newBreed) {
        breed = newBreed;
    }
};

int main() {
    Cat myCat("Whiskers", "Cat", 5, "Orange", "Persian");
    Dog myDog("Buddy", "Dog", 3, 25.5, "Labrador");

    myCat.setAge(6);
    myDog.setWeight(26.0);

    std::cout << "Cat: " << myCat.getName() << ", Species: " << myCat.getSpecies() << ", Age: " << myCat.getAge()
              << ", Color: " << myCat.getColor() << ", Breed: " << myCat.getBreed() << std::endl;

    std::cout << "Dog: " << myDog.getName() << ", Species: " << myDog.getSpecies() << ", Age: " << myDog.getAge()
              << ", Weight: " << myDog.getWeight() << " lbs, Breed: " << myDog.getBreed() << std::endl;

    return 0;
}
