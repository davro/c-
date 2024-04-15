#include <iostream>
#include <vector>

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

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : width(width), height(height) {}

    double calculateArea() const override {
        return width * height;
    }

private:
    double width, height;
};

int main() {
    std::vector<Shape*> shapes;
    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(4, 6));

    for (const auto shape : shapes) {
        std::cout << "Area: " << shape->calculateArea() << std::endl;
    }

    // Clean up memory
    for (const auto shape : shapes) {
        delete shape;
    }

    return 0;
}
