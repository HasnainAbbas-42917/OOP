#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() {} // virtual destructor
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const {
        return M_PI * pow(radius, 2);
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const {
        return 0.5 * base * height;
    }
};

bool sortByArea(const Shape* s1, const Shape* s2) {
    return s1->area() < s2->area();
}

int main() {
    const int numShapes = 4;
    Shape *shapes[numShapes];

    shapes[0] = new Circle(3);
    shapes[1] = new Rectangle(4, 5);
    shapes[2] = new Triangle(6, 7);
    shapes[3] = new Circle(4);

    // Sort shapes by area
    sort(shapes, shapes + numShapes, sortByArea);

    // Print sorted shapes
    for (int i = 0; i < numShapes; i++) {
        cout << "Shape " << i+1 << " area: " << shapes[i]->area() << endl;
    }

    // Free memory
    for (int i = 0; i < numShapes; i++) {
        delete shapes[i];
    }

    return 0;
}
