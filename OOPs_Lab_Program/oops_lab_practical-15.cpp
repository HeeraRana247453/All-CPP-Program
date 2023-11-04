#include <iostream>

class B {
public:
    virtual void show() {
        std::cout << "show of B class" << std::endl;
    }
};

class D1 : public B {
public:
    void show() override {
        std::cout << "show of class D1" << std::endl;
    }
};

class D2 : public B {
public:
    void show() override {
        std::cout << "show of class D2" << std::endl;
    }
};

int main() {
    B *p;
    B B1;
    p = &B1;
    p->show();

    D1 obj;
    p = &obj;
    p->show();

    D2 obj1;
    p = &obj1;
    p->show();

    return 0;
}
