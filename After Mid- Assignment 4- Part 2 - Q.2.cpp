#include <iostream>

using namespace std;

class Complex {
private:
    int real;
    int imaginary;
public:
    Complex(int r = 0, int i =0) {
        real = r;
        imaginary = i;
    }
    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imaginary = imaginary + obj.imaginary;
        return res;
    }
    Complex operator - (Complex const &obj) {
        Complex res;
        res.real = real - obj.real;
        res.imaginary = imaginary - obj.imaginary;
        return res;
    }
    void display() {
        cout << real << " + i" << imaginary << endl;
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2(2, 7);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    c3.display();
    c4.display();

    return 0;
}
