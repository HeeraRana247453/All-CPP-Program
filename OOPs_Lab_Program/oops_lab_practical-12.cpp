#include <iostream>
#include <conio.h>

class sample
{
public:
    operator int()
    {
        int sum;
        sum = 10; // You should use a class member here.
        return sum;
    }
};

int main()
{

    sample s1;
    int x = 20;
    std::cout << "Initialized value of x = " << x << std::endl;
    std::cout << std::endl;
    std::cout << "After converting class type to basic type:" << std::endl;
    std::cout << std::endl;
    std::cout << "The value of x = ";
    x = int(s1); // This should use the class's data, not a fixed value.
    std::cout << x << std::endl;

    getch();
    return 0;
}
