//2) Avoiding ambiguity using the Virtual Base class:-

//program to calculate the product of the three numbers a,b,c
#include<iostream>
using namespace std;

class A
{
    public:
        int a;
};
class B: virtual public A
{
    public:
        int b;
};
class C:virtual public A
{
    public:
        int c;
};
class D:public B,public C
{
    public:
        int d;
        void fun()  //you can'nt call the constructor without defining the values of a,b,c otherwise it will generate the wrong output.
        {
            d=a*b*c;
        }
};

int main()
{
    D obj1;
    obj1.a=20;
    obj1.a=50;

    obj1.b=60;
    obj1.c=70;
    
    cout<<"obj1.a="<<obj1.a<<endl;
    cout<<"obj1.b="<<obj1.b<<endl;
    cout<<"obj1.c="<<obj1.c<<endl;

    obj1.fun();//Now we can call the function because all values defined.
    cout<<"product of a,b,c is: "<<obj1.d<<endl;

    return 0;
}

/* 
Ques)-What is the Virtual Base Class?
Ans)-
When any data/function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called?
  One inherited through B or the other inherited through C.This confuses the compiler and it displays an error. 
To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as a virtual base class by placing a keyword virtual before
  the inheritance declaration.Now only one copy of data/function member will be copied to class C and class B, and class A becomes the virtual base class.
  Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances 
*/