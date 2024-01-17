//Function Overloading
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
float sum(float x,float y)
{
    return x+y;
}
// float sum(float x,float y,float z)
// {
//     return x+y+z;
// }

int main()
{
    float x,y,z;
    int a,b,c;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    cout<<"Enter the third value: ";
    cin>>c;
    cout<<"Enter the float value-1: ";
    cin>>x;
    cout<<"Enter the float value-2: ";
    cin>>y;
    cout<<"Enter the float value-3: ";
    cin>>z;
    


    cout<<"sum is: "<<sum(a,b)<<endl;
    cout<<"float sum is: "<<sum(x,y)<<endl;
    cout<<"sum is: "<<sum(a,b,c)<<endl;
    cout<<"float sum is: "<<sum(x,y,z)<<endl;

    return 0;
}