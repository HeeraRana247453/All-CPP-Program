//Open the Text file in append mode using constructor.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   ofstream print_file("p69-Textfile.txt",ios::app);
   string str1;
   while(getline(cin,str1))
   {
    if(str1.empty())
    {
        break;
    }
    print_file<<str1 + "\n";
   }
   print_file.close();
    return 0;
}
