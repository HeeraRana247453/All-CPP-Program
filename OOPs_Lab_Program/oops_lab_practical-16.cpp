#include <iostream>
#include <conio.h>

int main() {
    
    int a, b, c;
    std::cout << "Enter the values: " << std::endl;
    std::cout << "a= ";
    std::cin >> a;
    std::cout << "b= ";
    std::cin >> b;
    c = a - b;
    
    try {
        if (c != 0) {
            std::cout << "The result of a/c is= " << a / c << std::endl;
        } else {
            throw c;
        }
    } catch (int x) {
        std::cout << "Exception has occurred: Division by zero" << std::endl;
    }
    
    getch();
    return 0;
}
