#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() {
        return M_PI * pow(radius, 2);
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    Shape *shapes[3];

    shapes[0] = new Circle(3);
    shapes[1] = new Rectangle(4, 5);
    shapes[2] = new Triangle(6, 7);

    for (int i = 0; i < 3; i++) {
        cout << "Area of shape " << i+1 << ": " << shapes[i]->area() << endl;
    }

    return 0;
}
