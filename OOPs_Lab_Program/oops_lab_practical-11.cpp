#include <iostream>
#include <conio.h>

class Time
{
    int hrs, min;

public:
    Time(int t);
    void display();
};

Time::Time(int t)
{
    std::cout << "Basic Type to ==> Class Type Conversion..." << std::endl;
    hrs = t / 60;
    min = t % 60;
}

void Time::display()
{
    std::cout << hrs << " Hour(s)" << std::endl;
    std::cout << min << " Minutes" << std::endl;
}

int main()
{
    // clrscr();

    int duration;
    std::cout << "Enter time duration in minutes: ";
    std::cin >> duration;

    Time t1(duration);

    t1.display();
    getch();
    return 0;
}
