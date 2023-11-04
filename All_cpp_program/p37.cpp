// Demonstrate the Implicit copy constructor Calling

#include <iostream>
using namespace std;
 
class Sample 
{
    int id;
  public:
    void init(int x)
    {
     id = x;
    }
    // Sample(Sample &t)   //copy constructor
    // {
    //     id=t.id;
    // }
    void display()
    {
      cout << endl << "ID=" << id; 
    }
};
 
int main()
{
    Sample obj1;
    obj1.init(10);
    obj1.display();
 
    // Implicit Copy Constructor Calling because inside the class we do not define the copy constructor
    Sample obj2(obj1); // or obj2=obj1;
    obj2.display();
    return 0;
}
