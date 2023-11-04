//Demonstrate the use of the parameterized constructor & call them implicitly and explicitly.
//Print two complex number.

#include<iostream>
using namespace std;

class complex
{
      int a,b;
    public:
      complex(int x,int y);
      void display(void);
};

complex::complex(int x,int y) //parameterized constructor
{
    a=x;
    b=y;
}
void complex:: display(void)
{
  cout<<"complex no.: "<<a<<" + "<<b<<"i"<<endl;
}

int main()
{
   //implicit call of the constructor
   complex c1(2,3);
   c1.display();

   //explicit call of the constructor
   complex c2=complex(4,5);
   c2.display();

   return 0;
}