//Demonstrate the single inheritance.(Publicly)
#include<iostream>
using namespace std;

class Base
{
      int value1;
    public:
      int value2;
      void setdata(int a,int b)
      {
         value1=a;
         value2=b;
      }
      int getdata1()
      {
          return value1;
      }
      int getdata2()
      {
        return value2;
      }
};

class Derived:public Base
{
      int value3;
    public:
      void process()
      {
        value3=getdata1()*value2; //we can't directly use the value1 because private members can'nt be inherite.
      }
      void display()
      {
        cout<<"Value1 = "<<getdata1()<<endl;
        cout<<"Value2 = "<<value2<<endl;
        cout<<"Value3 = "<<value3<<endl;
      }
};

int main()
{
   int a,b;
   cout<<"Enter the value of a and b: ";cin>>a>>b;

   Derived o1;
   o1.setdata(a,b); //this is the function of the base class, but we can use because we have derived it in the Derived class from the Base class.
   o1.process();
   o1.display();
   return 0;
}

/* Note
-----------
1)When a base class is privately inherited by the derived class, public members of the base
  class becomes the private members of the derived class and therefore, the public members of
  the base class can only be accessed by the member functions of the derived class. And public
  members of the base class are inaccessible to the objects of the derived class.

2)On the other hand, when the base class is publicly inherited by the derived class, public members
 of the base class also become the public members of the derived class. Therefore, the public members
 of the base class are accessible by the objects of the derived class as well as by the member functions
 of the derived class. */