#include <iostream>

class Shape {
public:
    virtual double calculateArea() const = 0;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}

    double calculateArea() const override {
        return 3.14 * radius * radius;
    }

private:
    double radius;
};

int main() {
    Circle circle(5);
    std::cout << "Area of circle: " << circle.calculateArea() << std::endl;
    return 0;
}
