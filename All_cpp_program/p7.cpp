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