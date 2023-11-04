#include <iostream>
using namespace std;

class Circle {
public:
    // Function to calculate the area of the circle
    double CalculateArea() const {
        return 3.14159265359 * radius*radius;
    }

    // Function to get the radius (a constant member function)
    double GetRadius() const {
        return radius;
    }

private:
    const double radius = 2.0;  // Constant data member with member initialization
};

int main() {
   
    Circle circle;

    // circle.radius = 10.0;  // This line would generate a compilation error.

    cout <<endl<< "Circle Radius: " << circle.GetRadius() << endl;
    cout << "Circle Area: " << circle.CalculateArea() << endl<<endl;

    return 0;
}
