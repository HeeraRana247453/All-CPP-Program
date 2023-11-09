//Demonstrate the use of "is_open()" function to check that textfile  is exist or not and read that file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
   string filename = "p70-Textfile.txt";

    // Open the file and check if it exists
   ifstream inputFile(filename);
    
    if (inputFile.is_open()) {
        // File exists, so read and display its contents
       string line;
        while (getline(inputFile, line)) {
           cout << line <<endl;
        }

        // Close the file
        inputFile.close();
    } else {
       cerr << "The file " << filename << " does not exist." <<endl;
    }

    return 0;
}