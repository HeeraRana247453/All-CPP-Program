/* An inline function is a function that is expanded in line when it is called. When the inline
   function is called, the whole code of the inline function gets inserted or substituted at the point of
   the inline function call.
This substitution is performed by the C++ compiler at compile time. An inline function may increase
   efficiency if it is small.
   */

//Implementation of the inline function and static variable.
#include<iostream>
using namespace std;

inline int multiplication(int a,int b);

int main()
{
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;

    cout<<"Product of a and b is: "<<multiplication(a,b)<<endl;
    cout<<"Product of a and b is: "<<multiplication(a,b)<<endl;
    cout<<"Product of a and b is: "<<multiplication(a,b)<<endl;
    cout<<"Product of a and b is: "<<multiplication(a,b)<<endl;
    cout<<"Product of a and b is: "<<multiplication(a,b)<<endl;
    cout<<"Product of a and b is: "<<multiplication(a,b)<<endl;
    cout<<"Product of a and b is: "<<multiplication(a,b)<<endl;

}
inline int multiplication(int a,int b)
{
    static int c=0;
    c=c+1;
    return a*b + c;
}