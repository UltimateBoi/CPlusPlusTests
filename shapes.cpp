#include <cmath>

class Shape {
    public:
        virtual double area() = 0; // pure virtual function
        virtual double perimeter() = 0; // pure virtual function
};

class Rectangle : public Shape { // Rectangle as a subclass of Shape
    private:
        double length; // Attribute
        double width; // Attribute
    public:
        Rectangle(double length, double width) {
            this->length = length;
            this->width = width;
        }
        double area() {
            return length * width;
        }
        double perimeter() {
            return 2 * (length + width);
        }
};

class Circle : public Shape { // Circle as a subclass of Shape
    private:
        double radius; // Attribute
    public:
        Circle(double radius) { // Constructor for Circle
            this->radius = radius; // this is a pointer to the current object
        }
        double area() {
            return 3.14159 * radius * radius; // Area = πr^2
        }
        double perimeter() {
            return 2 * 3.14159 * radius; // Perimeter = 2πr
        }
};

// Right angled triangles only

class Triangle : public Shape { // Triangle as a subclass of Shape
    private:
        double base; // Attribute
        double height; // Attribute
        double hypotenuse; // Attribute
    public:
        Triangle(double base, double height, double hypotenuse) { // Constructor for Triangle
            this->base = base; // this is a pointer to the current object
            this->height = height; // this is a pointer to the current object
            this->hypotenuse = hypotenuse; // this is a pointer to the current object
        }
        double area() {
            return 0.5 * base * height; // Area = 0.5 * base * height
        }
        double perimeter() {
            return base + height + hypotenuse; // Perimeter = base + height + hypotenuse
        }
};