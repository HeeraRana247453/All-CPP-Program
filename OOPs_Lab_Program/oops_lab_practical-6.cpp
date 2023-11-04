#include <iostream>
using namespace std;

class DynamicObject {
public:
    // Parameterized constructor
    DynamicObject(double base, double height) {
        base_ = base;     // Initialize the private members with the constructor arguments
        height_ = height;
        cout << "Parameterized constructor called with base: " << base_ << " and height: " << height_ << endl;
    }

    void CalculateArea() {
        double area = 0.5 * base_ * height_;  // Use the private members for the calculation
        cout << "Area of the triangle: " << area << endl;
    }

private:
    double base_;
    double height_;
};

int main() {
    float a, b;
    cout << "Enter the value of base: " << endl;
    cin >> a;
    cout << "Enter the value of height: " << endl;
    cin >> b;

    // Dynamically allocate an object and call its constructor
    DynamicObject* dynamicObj = new DynamicObject(a, b);

    dynamicObj->CalculateArea();

    // Deallocate the object and free the memory
    delete dynamicObj;

    return 0;
}
