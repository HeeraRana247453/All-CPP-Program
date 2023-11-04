//Example of the multilevel interitance.
//Program to calculate the value of d=a*b*c ,and inherit a--->b--->c

#include<iostream>
using namespace std;

class A
{
    protected:
        int a;
    public:
        void set_a()
        {
            cout<<"Enter the value of A: ";
            cin>>a;
        }
        void display_a()
        {
            cout<<"Value of A = "<<a<<endl;
        }
};
class B: public A
{
    protected:
        int b;
    public:
        void set_b()
        {
            cout<<"Enter the value of B: ";
            cin>>b;
        }
        void display_b()
        {
            cout<<"Value of B = "<<b<<endl;
        }
};
class C: public B
{
        int c;
        int d;
    public:
        void set_c()
        {
            cout<<"Enter the value of C: ";
            cin>>c;
        }
        void display_c()
        {
            cout<<"Value of C = "<<c<<endl;
        }
        void cal_product()
        {
            d=a*b*c;
            cout<<a<<"*"<<b<<"*"<<c<<" = "<<d<<endl;
        }
};
int main()
{
    C obj1;
    obj1.set_a();
    obj1.set_b();
    obj1.set_c();
    obj1.display_a();
    obj1.display_b();
    obj1.display_c();
    obj1.cal_product();
    return 0;
}