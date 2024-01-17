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
    } 
    else {
       cerr << "The file " << filename << " does not exist." <<endl;
    }

    return 0;
}


// int main()
// {
//     string str1;
//     ifstream input("textfile-0.txt");
//     try{
//         if(input.is_open()==0)
//         {
//             throw runtime_error("Exception: File does not exist or file is not open.");
//         }
//             while(input.eof()==0)
//             {
//                 getline(input,str1);
//                 cout<<str1<<endl;
//             }
//     }
//     catch(const exception &e)
//     {
//         cerr<<e.what()<<endl;
//     }
//     catch(...)
//     {
//         cout<<"Runtime Error !1";
//     }
//     input.close();
//     return 0;
// }