//6) A special case of hybrid inheritance: Multipath inheritance:
//In C++, multipath inheritance is the derivation of a class from other derived classes, which are derived from the same base class.
// It is also called hybrid inheritance in C++. Multipath inheritance can be ambiguous and can lead to confusion if not used carefully.

//1) Avoiding ambiguity using the scope resolution operator:

#include<iostream>
using namespace std;
//Base class
class A
{
    public:
        int a;
};
//left subclass
class B:public A
{
    public:
        int b;
};
//right subclass
class C:public A
{
    public:
        int c;
};
//subclass
class D:public B,public C
{
    public:
        int d;
};
int main()
{
    A obj1;
    obj1.a=10;

    D obj2;
    // obj2.a=20;   //Statement1 Error
    // obj2.a=50;  //Statement2 Error
    obj2.B::a=20;
    obj2.C::a =50;

    cout<<"obj2.B::a="<<obj2.B::a<<endl;
    cout<<"obj2.C::a="<<obj2.C::a<<endl;
    
    return 0;
}
//Note: Still, there are two copies of ClassA in Class-D.