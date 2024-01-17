//Print fibonacci number by Entering the position using the recursion.

#include<iostream>
using namespace std;

int fibb(int num);

int main()
{
    int num;
    cout<<"Enter the position of the fibonacci number: ";
    cin>>num;
    try{
        if(num<0)
        {
            throw runtime_error("Enter the positive Number !!");
        }
    cout<<"This is the fibonacci number: "<<fibb(num);
    }
    catch(const exception &e)
    {
        cout<<"Exception: "<<e.what()<<endl;
    }
    return 0;
}

int fibb(int num)
{
    if(num==1 || num==2)
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