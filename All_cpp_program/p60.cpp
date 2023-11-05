//Demonstrate the use of "this" pointer as this pointer can be used to return a reference to the object that is calling the member function.

#include<iostream>
using namespace std;
class A
{
        int a;
    public:
        A &setdata(int a)
        {
            this->a=a;
            return *this;
        }
        void getdata()
        {
            cout<<"The value of a is: "<<a<<endl;
        }
};

int main()
{
    A obj;
    obj.setdata(5).getdata();   //Now setdata() is giving the object in which it is called.
    obj.getdata();
    return 0;
}