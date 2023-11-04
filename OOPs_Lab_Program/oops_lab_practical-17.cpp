#include <iostream>

template<class T>
class Sum {
    T a, b, c;

public:
    void get();
    void add();
};

template<class T>
void Sum<T>::get() {
    std::cin >> a >> b;
}

template<class T>
void Sum<T>::add() {
    std::cout << "The sum of two numbers is: ";
    c = a + b;
    std::cout << c << std::endl;
    std::cout << std::endl;
}

int main() {
    Sum<int> obj;
    Sum<float> obj1;

    std::cout << "Enter the integer values: " << std::endl;
    obj.get();
    obj.add();
    
    std::cout << "Enter the float values: " << std::endl;
    obj1.get();
    obj1.add();
    
    return 0;
}
