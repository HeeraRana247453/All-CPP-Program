#include<iostream>
using namespace std;

class complex;

class calculator
{
    public:
      void sumreal(complex c1,complex c2);
      void sumcmplx(complex c1,complex c2);
};

class complex
{
      int a;
      int b;
    public:
      void setData(int v1,int v2)
      {
        a=v1;
        b=v2;
      }
      void getData(void)
      {
        cout<<"complex no. is: "<<a<<" + "<<b<<"i"<<endl;
      }
    // friend void calculator:: sumreal(complex c1,complex c2);
    // friend void calculator:: sumcmplx(complex c1,complex c2);
    friend class calculator;    //this is the friend class allow the access of the all private and protected members.
};


void calculator:: sumreal(complex c1,complex c2)
{
    cout<<endl<<"Sum of the real part is: "<<c1.a+c2.a<<endl;
}
void calculator:: sumcmplx(complex c1,complex c2)
{
    cout<<"Sum of the complex part is: "<<c1.b + c2.b<<"i"<<endl;
}

int main()
{
    complex c1,c2;
    c1.setData(3,4);
    c1.getData();

    c2.setData(5,9);
    c2.getData();

    calculator real,cmplx;
    real.sumreal(c1,c2);
    cmplx.sumcmplx(c1,c2);

    return 0;
}

/* 
    Properties of the friend class:-
    --------------------------------
   1. A friend class can access private and protected members of another class in which it is declared as a friend .
   2. Friendships are not symmetric, meaning if class A is a friend of class B, class B is not automatically a friend of class A .
   3. Friendships are not transitive, meaning if class A is a friend of class B, and class B is a friend of class C, then class A is not automatically a friend of class C .
   4. Friend classes can be declared in C++ by using the `friend` keyword .
   5. Friend classes can be declared anywhere in the base class body whether its private, protected or public block .

 */