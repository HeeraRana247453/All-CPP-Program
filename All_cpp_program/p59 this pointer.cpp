//Demonstrate the use of "this" pointer as it is used to access the members of the object that is calling the member function.

#include<iostream>
using namespace std;
class A
{
        int a;
    public:
        void setdata(int a)
        {
            (*this).a=a; //or this->a=a;
        }
        void getdata()
        {
            cout<<"The value of a is: "<<a<<endl;
        }
};
int main()
{
    A obj;
    obj.setdata(5);
    obj.getdata();
    return 0;
}


/*=>The this pointer in C++ is a pointer that refers to the object that is calling the member function in which it is.
  Here are some of its properties:
------------------------------------
1)The this pointer is an implicit parameter that is passed to all non-static member functions.
2)The this pointer is used to access the members of the object that is calling the member function.
3)The this pointer is used to disambiguate between the member variable of the object and any other variable with the same name that might be in scope.
4)The this pointer can be used to return a reference to the object that is calling the member function.
5)The type of the this pointer depends on the function declaration. If a member function of class X is declared as const,
  then the type of the this pointer is const X*. Otherwise, the type of the this pointer is X*. 
*/