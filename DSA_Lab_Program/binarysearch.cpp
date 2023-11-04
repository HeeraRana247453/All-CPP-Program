//This is the program for the Binary Search.
#include<iostream>
using namespace std;

int binary_search(int a[],int l,int u,int v)
{
    int beg=l;
    int end=u;
    int pos=-1;
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(a[mid]==v)
        {
            pos=mid+1;
            return pos;
        }
        else if(a[mid]>v)
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    return pos;
}


int main()
{
    int n;
    cout<<"\n Enter the number of elements you want to insert: ";
    cin>>n;
    int p=n-1;
    int a[p];
    cout<<"\n Enter the elements in ascending order with space: ";
    for(int i=0;i<=p;i++)
    {
        cin>>a[i];
    }
   
    int s;
    cout<<"\n Enter the element you want to search: ";
    cin>>s;
    int result;
    result=binary_search(a,0,p,s);
    if(!(result==-1))
    {
        cout<<"\n position of number '"<<s<<"' is: "<<result;
    }
    else
    {
        cout<<"\n Number does not exist!!";
    }
    return 0;
}