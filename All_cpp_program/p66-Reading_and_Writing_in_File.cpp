//Demonstrate the Input & Output Operation in the Text File.
//(Without using the new line character during output in file)

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int choice;
    cout<<"1)Write"<<endl
        <<"2)Read"<<endl
        <<"Enter the choice: ";
        cin>>choice;

    cin.ignore(); // Clear the newline character from the input buffer.

    //Writing
    if(choice==1)
    {
    string str;
    cout<<"Start writing: ";
    getline(cin,str);
    
    ofstream out("p66-textfile.txt");//Opening file using constructor
    out<<str;//insert the string
    out.close();
    }

    //Reading
    else if(choice==2)
    {
    string str2;
    ifstream in("p66-textfile.txt");
    getline(in,str2);  //in>>str2;
    cout<<str2;
    in.close();
    }

    return 0;
}

/* 
File I/O in C++: Reading and Writing Files

These are some useful classes for working with files in C++
-------------------------------------------------------------
1)fstream base class
2)ifstream --> derived from fstreambase
3)ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it.
 Primarily, there are 2 ways to open a file:

1)Using the constructor
2)Using the member function open() of the class
*/