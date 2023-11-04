//Print fibonacci number by Entering the position using the recursion.

#include<iostream>
using namespace std;

int fibb(int num);

int main()
{
    int num;
    cout<<"Enter the position of the fibonacci number: ";
    cin>>num;

    cout<<"This is the fibonacci number: "<<fibb(num);
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
    else if(num>2)
    {
        return fibb(num-1) + fibb(num-2);
    }
    else{
        cout<<"Enter the positive number"<<endl;
        return 0;
    }
}