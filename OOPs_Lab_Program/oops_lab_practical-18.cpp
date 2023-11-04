#include <iostream>
#include <fstream>


int main() {

    std::ofstream outfile("result");
    outfile << "Harsimran" << std::endl;
    outfile << "marks:" << std::endl;
    outfile << "490" << std::endl;
    outfile.close();

    std::ifstream infile("result");
    char name[40], name1[40], name2[40];

    infile >> name;
    infile >> name1;
    infile >> name2;

    std::cout << "Name of the student is: " << name << std::endl;
    std::cout << name1 << std::endl;
    std::cout << name2 << std::endl;

    infile.close();
    return 0;
}
