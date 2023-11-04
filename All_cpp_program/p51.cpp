// Demonstrate the HYBRID Inheritance.
// Program to multiply three numbers.

#include<iostream>
using namespace std;

//Parent class
class A
{
    protected:
        int a;
    public:
        void set_A(int x)
        {
            a=x;
        }
        int get_A()
        {
            return a;
        }
};
//Subclass
class B:public A
{
    protected:
        int b;
    public:
        void set_B(int y)
        {
            b=y;
        }
        int get_B()
        {
            return b;
        }
};
//Base class
class C
{
    protected:
        int c;
    public:
        void set_C(int z)
        {
            c=z;
        }
        int get_C()
        {
            return c;
        }
};
//Subclass
class D:public B,public C
{
    int d;
    public:
        void multiply(int x,int y,int z)
        {
            set_A(x);
            set_B(y);
            set_C(z);
            d=a*b*c;
        }
        void result()
        {
            cout<<"Product:- "<<endl<<"\t"<<a<<"x"<<b<<"x"<<c<<" = "<<d<<endl;
        }
};
int main()
{
    int x,y,z;
    cout<<"Enter the value of X,Y and Z: ";cin>>x>>y>>z;

    D d;
    d.multiply(x,y,z);
    d.result();
    return 0;
}