//This is the program for the linear search.
#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"\n How many numbers you want to insert into the array: ";
    cin>>n;
    int b,a[n];
    cout<<"\n Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a[i]=b;
    }

    int s,pos=-1;
    cout<<"\n Enter the number you want search: ";
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            pos=i+1;
        }
    }
    if(pos!=-1)
    {
      cout<<"\n position of your number is: "<<pos;
    }
    else
    {
      cout<<"\n Element does not exist in the array !!!";
    }
    return 0;
}