//Demonstrate the use of "eof()" function, i.e end of file.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream read;
    read.open("p71-Textfile.txt");
    string str1;
    while(read.eof()==0) //end of file
    {
        getline(read,str1); //because we are not getting the input from console.
        cout<<str1 + "\n";
    }
    read.close();
    return 0;
}