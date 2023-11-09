//Open the Text file in append mode using "open()" function.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("p68-Textfile.txt",ios::app);
    string str1;

    while(getline(cin,str1))
    {
        if(str1.empty())
        {break;}
        out<<"\n" + str1;
    }

    out.close();
    return 0;
}
   