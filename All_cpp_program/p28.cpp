//Demonstrate the use of the friend function.
//Program to swap the values of the two variable of the two different classes' objects.

#include<iostream>
using namespace std;

class c2;

class c1
{
       int value1;
    public:
       void setdata(int a)
       {
         value1=a;
       }
    friend void swap(c1 &o1,c2 &o2);
    friend void display(c1 o1,c2 o2);
};

class c2
{
       int value2;
    public:
       void setdata(int b)
       {
        value2=b;
       }
    friend void swap(c1 &o1,c2 &o2);
    friend void display(c1 o1,c2 o2);
};

void swap(c1 &o1,c2 &o2)
{ 
   int temp = o1.value1;
   o1.value1 = o2.value2;
   o2.value2 = temp;
}

void display(c1 o1,c2 o2)
{
    cout<<endl<<"Value1="<<o1.value1<<endl;
    cout<<"Value2="<<o2.value2<<endl;
}

int main()
{
    int x,y;
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;

    c1 o1;
    o1.setdata(x);

    c2 o2;
    o2.setdata(y);

    display(o1,o2);
    swap(o1,o2);
    cout<<endl<<"After swapping:-"<<endl;
    display(o1,o2);

    return 0;
}