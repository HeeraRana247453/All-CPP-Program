//Program to find the factorial of the number using the recursion.

#include<iostream>
using namespace std;

int factorial(int num)
{
    if(num<0)
    {
        cout<<"Enter the Positive Number !!";
        return 0;
    }
    else if(num==0 || num==1)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<endl<<"The factorial of "<<num<< " is: "<<factorial(num);
    return 0;
}