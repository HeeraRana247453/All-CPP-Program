//Demonstrate the Run Time Polymorphism using the Virtual function.(Late Binding or Dynamic Binding)

#include<iostream>
using namespace std;
class Base
{
    public:
        int base_var;
        virtual void display()//virtual function will not inherit //without virtrual it will produce the different output.
        {
            cout<<endl<<"1)Display the variable of base class base_var="<<base_var<<endl<<endl;
        }
};
class Derived:public Base
{
    public:
        int derived_var;
        void display()
        {
            cout<<"2)Display the variable of the base class base_var="<<base_var<<endl;
            cout<<"2)Display the variable of the derived class derived_var="<<derived_var<<endl<<endl;
        }
};
int main()
{
    Base *base_ptr;
    Base base_obj;
    Derived *derived_ptr;
    Derived derived_obj;
    base_ptr = &derived_obj;
    derived_ptr = &derived_obj;
    
    base_ptr->base_var=10;
    derived_ptr->derived_var = 20;

    base_ptr->display();   //if the display() func. in base class is virtual then it will invoke the display() func. of the derived class because base_ptr is points to derived_obj
    derived_ptr->display();
    return 0;
}

//Virtual Function does not inherit, means if you will invoke the virtual function of the base class using the base_class_pointer which points to the derived_class_object, then
//the function with same name of derived class will invoke