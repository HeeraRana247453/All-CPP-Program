//To calculate the average of the three numbers.

#include<iostream>
using namespace std;

int main()
{
    float num1,num2,num3,sum,avg;
    cout<<"\nEnter the Numbers: ";
    cin>>num1;
    cin>>num2>>num3;   //This is Input Cascading.
  
    sum=num1 + num2 + num3;
    avg = sum/3;

    cout<<"\nSum is: "<<sum<<" , "
    <<"Avg. is: "<<avg<<"\n";     //This is Output Cascading.

    return 0;
}