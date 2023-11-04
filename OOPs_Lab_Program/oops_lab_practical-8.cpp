#include <iostream>
using namespace std;

class Demo
{
private:
    const int X;
    const int Y;

public:
    Demo() : X(10), Y(20) {};
    Demo(int a, int b) : X(a), Y(b) {}; // Corrected "intializer list" to "initializer list."

    // To display output on screen.
    void Display();
};

void Demo::Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}

int main()
{
    // Ctor automatically calls when an object is created.
    Demo d1; // Default constructor
    Demo d2(30, 40); // Parameterized constructor.

    // Display the value of data members.
    cout << "Value of d1: ";
    d1.Display();

    cout << "Value of d2: ";
    d2.Display();

    return 0;
}

