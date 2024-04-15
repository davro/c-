#include <iostream>

class Animal {
public:
    Animal(const std::string& name) : name(name) {}

    void speak() const {
        std::cout << name << " makes a sound." << std::endl;
    }

private:
    std::string name;
};

class Dog : public Animal {
public:
    Dog(const std::string& name) : Animal(name) {}

    void speak() const {
        std::cout << "Woof Woof!" << std::endl;
    }
};

int main() {
    Dog dog("Buddy");
    dog.speak();
    return 0;
}

