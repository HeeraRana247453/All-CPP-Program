//Demonstrat the use of Constructor.
//Set default value of the complex number using the constructor and then set manually.

#include<iostream>
using namespace std;

class complex
{
      int a;
      int b;
    public:
      complex();//default constructor
      void display(void)
      {
        cout<<endl<<"complex no.: "<<a<<" + "<<b<<"i"<<endl;
      }
      void setdata(int p,int q)
      {
        a=p;
        b=q;
      }
};

complex::complex()
{
    a=0;
    b=0;
    cout<<"Default constructor called."<<endl;
}

int main()
{
    int x,y;

    complex c1;   //automatically value have been set when the object is created.
    c1.display();

    cout<<"Enter the real & imaginary part of number: ";
    cin>>x>>y;

    c1.setdata(x,y);   //value set by manually.
    c1.display();

    return 0;
}


/* Properties of Constructor:-
    1)The name of the constructor is the same as its class name.
    2)Constructors are mostly declared in the public section of the class, though they can be declared in the private section of the class.
    3)Constructors do not return values; hence they do not have a return type.
    4)Constructors are invoked automatically when an object of a class is created.
    5)Constructors can be overloaded, meaning that multiple constructors can exist within a single class, each with a different set of parameters.
    6)Constructors can be used to initialize data members of an object.
    7)Constructors can also be used to allocate memory for an object.
    8)Constructors can be defined inside or outside the class declaration.
    9)Constructors can have default arguments.
    10)Constructors can be explicitly called by the user using the scope resolution operator.
    11)Constructors can be inherited by derived classes.
    12)Constructors can be deleted or made private to prevent their usage.
    13)Constructors can be virtual, which allows for dynamic binding and polymorphism.
  X 14)Constructors can be constexpr, which allows for compile-time evaluation.
    15)Constructors can be explicit, which prevents implicit conversions.

 */