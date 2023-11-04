//Print Fibonacci series in between the range using Recursion.

#include<iostream>
using namespace std;

int fibb(int num);
int fibonacci_series(int a,int b);

int main()
{
    int a,b;
    cout<<"Enter the lower limit: ";
    cin>>a;
    cout<<"Enter the upper limit: ";
    cin>>b;
    
    if(a>0 && b>0)
    {  cout<<"This is the required fibonacci series: ";
       fibonacci_series(a,b);
    }
    else
    {
        cout<<" Error: Enter the positive limit only !!";
    }

    return 0;
}

int fibonacci_series(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
      cout<<" "<<fibb(i);
    }
    return 0;
}
int fibb(int num)
{
  if(num==1)
  {
    return num-1;
  }
  else if(num==2)
  {
    return num-1;
  }
  else
  {
    return fibb(num-1) + fibb(num-2);
  }
}