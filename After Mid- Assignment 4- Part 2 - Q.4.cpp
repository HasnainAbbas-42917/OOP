#include <iostream>

using namespace std;

template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int intSum = add<int>(5, 3);
    float floatSum = add<float>(2.5, 1.5);

    cout << "Integer sum: " << intSum << endl;
    cout << "Float sum: " << floatSum << endl;

    return 0;
}
