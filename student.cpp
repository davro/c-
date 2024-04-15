#include <iostream>

class Student {
public:
    Student(const std::string& name, int age) : name(name), age(age) {}

    void introduce() {
        std::cout << "Hi, I'm " << name << " and I'm " << age << " years old." << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    Student student("Alice", 20);
    student.introduce();
    return 0;
}
