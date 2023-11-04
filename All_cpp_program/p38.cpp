//Demonstrate the use of Destructor

#include<iostream>
using namespace std;

class number
{
      static int count;
    public:
      number()
      { 
        count++;
        cout<<"We are calling the constructor for the object-"<<count<<endl;
      }
      ~number()
      {
        cout<<"\t(Destruction):-We are calling the Destructor for the object-"<<count<<endl;
        count--;
      }
};
int number:: count=0;
int main()
{
    cout<<endl<<"We are inside the main function."<<endl;
    cout<<"Creating first object."<<endl;
    number n1;
    {
        cout<<endl<<"Entering the block."<<endl;
        cout<<"Creating two more objects."<<endl;
        number n2,n3;
        cout<<"Exiting the block."<<endl;
    }
    cout<<endl<<"Back to main function."<<endl;
    return 0;
}

/* 
   A destructor is a special member function that is automatically called when an object goes out of scope or is explicitly deleted.
   
   Here are 10 properties of a destructor:-
  ------------------------------------------
   1)It is a member function of the class.
   2)It has the same name as the class, but with a tilde (~) symbol before it.
   3)It takes no arguments and returns no value.
   4)It is automatically called when an object goes out of scope or is explicitly deleted.
   5)It cannot be overloaded or inherited.
   6)It cannot be declared as static or const.
   7)It can be declared as protected or private.
   8)It can be used to release resources allocated by the object.
   9)It can be used to perform cleanup operations before the object is destroyed.
   10)If a class does not define a destructor, the compiler provides a default destructor.
*/