#include <iostream>

using namespace std;

// Function to calculate the area of a rectangle
int area(int length, int width) {
    return length * width;
}

// Function to calculate the area of a circle
float area(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    int length = 5;
    int width = 6;
    float radius = 3.5;

    cout << "Area of rectangle: " << area(length, width) << endl;
    cout << "Area of circle: " << area(radius) << endl;

    return 0;
}
