#include <iostream>
#include <string>

class Class_type_one {
    std::string a = "Chandigarh Group of Colleges";

public:
    std::string get_string() {
        return a;
    }

    void display() {
        std::cout << a << std::endl;
    }
};

class Class_type_two {
    std::string b;

public:
    void operator=(Class_type_one a) {
        b = a.get_string();
    }

    void display() {
        std::cout << b << std::endl;
    }
};

int main() {
    Class_type_one a;
    Class_type_two b;
    
    b = a;
    
    a.display();
    b.display();
    
    return 0;
}
