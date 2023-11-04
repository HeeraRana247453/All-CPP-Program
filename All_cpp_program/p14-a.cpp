#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int s=a+b;
    return s;
}
int sum(int a,int b,int c)
{
    int res=a+b+c;
    return res;
}

int main()
{
    int a,b,c;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;

    cout<<"Enter the third value: ";
    cin>>c;

    cout<<"sum is: "<<sum(a,b)<<endl;
    cout<<"sum is: "<<sum(a,b,c)<<endl;
    return 0;
}