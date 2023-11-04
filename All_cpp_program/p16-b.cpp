#include<iostream>
using namespace std;

class animal            //this the base class 
{
  public:               //access modifier
  void call_function()
  {
    print();
  }
  void print()
  {
    cout<<"Printing the base class content."<<endl;
  }
};

class deer:public animal       //this is the derived class, which is inherited from the base class publicly
{
    public:
    void print()   //this will not call when you call the func. call_function() and only that print() call which is mention in the call_funtion
    {
        cout<<"Printing the derived class content."<<endl;
    }
};
int main()
{
    animal obj1;
    obj1.print();
    
    deer obj2;
    obj2.print();

    deer obj3;
    obj3.call_function();   //we can call the call_funtion() in the deer class because base class is inherited into the deer class

    return 0;
}