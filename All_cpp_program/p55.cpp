//Demonstrate the use of constructor in the derived classes.

#include<iostream>
using namespace std;

class base1
{
        int a;
    public:
        base1(int i)
        {
            a=i;
            cout<<"Constructor of the Base1 class is called."<<endl;
        }
        void get_base1()
        {
            cout<<"The value of the Base1 is: "<<a<<endl;
        }
};
class base2
{
        int b;
    public:
        base2(int j)
        {
            b=j;
            cout<<"Constructor of the Base2 class is called."<<endl;
        }
        void get_base2()
        {
            cout<<"The value of the Base2 is: "<<b<<endl;
        }
};
class derived:public base1,virtual base2  //order of calling the constructor will change because of the virtual base class(1st priority)
{
        int c,d;
    public:
        derived(int i,int j,int k,int l):base1(i),base2(j)
        {
            c=k;
            d=l;
            cout<<"Constructor of the Derived Class is called."<<endl;
        }
        void get_derived()
        {
            get_base1();
            get_base2();
            cout<<"The values of the c,d is: "<<c<<","<<d<<endl;
        }
};
int main()
{
    derived obj(2,3,4,5);
    obj.get_derived();
    return 0;
}


/* Properties of the derived class Constructor:-
---------------------------------------------------------
    1)When a derived class is created, the constructor of the base class is called first, followed by the constructor of the derived class.
    2)The derived class constructor determines which base class constructor is called.
    3)If no base class constructor is specified, the default base class constructor will be used.
    4)The base class constructor is called and executed before executing the statements in the body of the derived class.
    5)Base class constructors are always called using the derived class constructors.
    6)Constructors in derived classes can pass arguments to base class constructors using an initializer list.
    7)The initializer list initializes variables before the body of the constructor executes.
    8)Constructors in derived classes can call other constructors in their own classes using a member initialization list.
    9)Constructors in derived classes can be overloaded to accept different numbers or types of arguments.
    10)Constructors in derived classes can be inherited from their base classes or overridden to provide custom behavior for a specific derived class 
    11)If there is any Virtual Base Class in the Multiple Inheritance then the constructor of the Virtual base class will call first.
    12)If both base class are virtual then the constructor will call acc. to the order.
*/