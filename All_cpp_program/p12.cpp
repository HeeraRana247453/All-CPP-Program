//Print the fibonacci number using the looping statements.

#include<iostream>
using namespace std;

int main()
{
    int num,a,b,c;
    cout<<"Enter the position of the fibonacci number: ";
    cin>>num;

    if(num<3)
    {
      cout<<"fibonacci number is:"<<num-1;
    }
    else
    {
      a=0,b=1;
      for(int i=1;i<num-1;i++)
      {
        c=a+b;
        a=b;
        b=c;
      }
      cout<<" "<<c;
    }
    return 0;
}