//Nesting of the Function.
//Write a program to read a number and check whether it is binary or not
//and if it is a binary number take its once compliment.

#include<iostream>
using namespace std;

class Numbers
{
      string s;           //Data Members
    public:
      void read(void);     //Member functions
      void chk_bin(void);    
      void once_comp(void);
      void display(void);
};

int main()
{
    Numbers bin;//creating object

    bin.read();
    cout<<"This is your string: ";
    bin.display();

    bin.chk_bin();
    // cout<<s;   //We can'nt call it here as the string is private in the class

    return 0;
}

void Numbers:: read(void)
{
    cout<<"Enter the binary number: ";
    cin>>s;
}

void Numbers:: chk_bin(void)
{
    bool f=true;
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')  //s.at() function to extract character by character from the string.
        {
            cout<<"NO: This is not the Binary Number.";
            f=false;
            exit(0);
            // break;
        }
    }
    if(f==true)
    {
        cout<<endl<<"YES: This is the binary number !!"<<endl;
        cout<<"And its once compliment is:";
        once_comp();   //It will consider the same instance(object) as of the chk_bin().
        display();

        // Numbers bin2;
        // bin2.once_comp(); //It will consider the bin2 as the instance(object) different from the chk_bin().
    }
}

void Numbers:: once_comp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}
void Numbers::display(void)
{
    cout<<s<<endl<<endl;    
}