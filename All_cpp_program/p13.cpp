//Print Fibonacci series in between the range using Recursion.

#include<iostream>
using namespace std;

int fibo(int n);
void fibo_series(int a,int b);

int main()
{
    int x,y;
    cout<<"Enter the Range(x,y): ";
    cin>>x>>y;
    try{
        if(x<1 || y<1)
        {
            throw runtime_error("Enter the positive limit !!");
        }
        cout<<endl<<"Fibonacci Series: ";
        fibo_series(x,y);
    }
    catch(const exception &e)
    {
        cerr<<"Exception: "<<e.what()<<endl;
    }
    return 0;
}
void fibo_series(int a,int b)
{
    int i=a;
    while(i<=b)
    {
        cout<<fibo(i)<<" ";
        i+=1;
    }
}
int fibo(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    else{
        return fibo(n-1) + fibo(n-2);
    }
}