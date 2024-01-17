//To swap the two number using the concept of the pointer

#include<iostream>
using namespace std;

void swap(int *a,int *b);

int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    swap(&a,&b);

    cout<<"After swapping: "<<a<<" "<<b<<endl;
    return 0;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}