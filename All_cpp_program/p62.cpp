//Demonstrate the Compile Time Polymorphism using the function Overloading.(Early Binding or Static Binding)

#include<iostream>
using namespace std;
class Base
{
    public:
        int base_var;
        void display()
        {
            cout<<endl<<"1)Displaying base class variable, base_var="<<base_var<<endl;
        }
};
class Derived:public Base
{
    public:
        int derived_var;
        void display()
        {
            cout<<endl<<"2)Displaying base class variable, base_var="<<base_var<<endl;  //if not assign by derived_ptr then it will produce the garbage value.
            cout<<"2)Displaying derived class variable, derived_var="<<derived_var<<endl;
        }
};
int main()
{
    Base *base_ptr;
    Base base_obj;

    Derived *derived_ptr;
    Derived derived_obj;
    base_ptr=&derived_obj;//if base_ptr=&base_obj; output of base_var will change.
    derived_ptr =&derived_obj;

    base_ptr->base_var = 39;
    // base_obj.base_var=53;//Right but not work because there is a pointer
    // base_ptr->derived_var=23; //Throw an error because base class pointer can'nt points the derived class data members.
    // base_obj.derived_var=42; //Throw an error(obviously)
 
    // derived_ptr->base_var = 90;  //Otherwise base_var produce garbage value inside the derived class.
    derived_ptr->derived_var =52;
    
    base_ptr->display();
    derived_ptr->display();
    return 0;
}