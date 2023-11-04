#include <iostream>

class student {
protected:
    char name[20];
    int roll_no;

public:
    void gets() {
        std::cout << "Enter the student data: ";
        std::cin >> name >> roll_no;
    }

    void shows() {
        std::cout << std::endl;
        std::cout << "Name of the student is: " << name << std::endl;
        std::cout << "The roll no of the student is: " << roll_no << std::endl;
    }
};

class marks {
protected:
    float m1;
    float m2;

public:
    void getm() {
        std::cout<<"Enter the marks of the student(m1 & m2): ";
        std::cin >> m1 >> m2;
    }

    void showm() {
        std::cout << "Marks of first subject: " << m1 << std::endl;
        std::cout << "Marks of second subject: " << m2 << std::endl;
    }
};

class data : public student, public marks {
    float total;

public:
    void add() {
        total = m1 + m2;
        std::cout << "The total of marks is: " << total << std::endl;
    }
};

int main() {

    data s;
    s.gets();
    s.getm();
    s.shows();
    s.showm();
    s.add();

    return 0;
}
