#include <iostream>
using namespace std;

class MyClass {
public:
    // Default (zero argument) constructor
    MyClass() {
        value = 0;
        cout <<endl<< "Default constructor called." << endl;
    }

    // Parameterized constructor
    MyClass(int val) {
        value = val;
        cout << "Parameterized constructor called with value: " << value << endl;
    }

    
    void DisplayValue() {
        cout << "Value: " << value << endl;
    }

private:
    int value;
};

int main() {
    
    MyClass obj1;           // Calls the default constructor
    MyClass obj2(42);       // Calls the parameterized constructor

    obj1.DisplayValue();
    obj2.DisplayValue();

    return 0;
}
