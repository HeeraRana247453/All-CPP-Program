//Simple program to demonstrate the use of the friend function.

#include<iostream>
using namespace std;

class Second;

class First
{
       int data;
    public:
       void setdata(int value)
       {
        data=value;
       }
    friend void sum(First o1,Second o2);
};

class Second
{
       int num;
    public:
       void setdata(int v1)
       {
        num=v1;
       }
    friend void sum(First o1,Second o2);
};

void sum(First o1,Second o2)
{
   cout<<"Sum of the numbers is: "<<o1.data + o2.num<<endl;
}

int main()
{
    First o1;
    o1.setdata(9);

    Second o2;
    o2.setdata(7);

    sum(o1,o2);
    return 0;
}