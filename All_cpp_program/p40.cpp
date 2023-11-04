// Demonstrate the Single inheritance.(Privately)

#include<iostream>
using namespace std;

class Base
{
        int value1;
    public:
        int value2;
        void setdata(int x,int y)
        {
            value1=x;
            value2=y;
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
class Derived: private Base
{
        int value3;
    public:
        void process(int a,int b)
        {
            setdata(a,b);
            value3=getdata1()*value2;
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
  //o1.setdata(); we can'nt use it here because we have privately inherit it from the Base class.
  o1.process(a,b);
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