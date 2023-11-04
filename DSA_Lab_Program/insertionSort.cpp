//Insertion Sort
#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cout<<"\n Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"\n Enter the elments: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=1;i<n;i++)
    {   
        for(int j=i;j>0;j--)
        {
          if(a[j-1]>a[j])
          {
            s=a[j];
            a[j]=a[j-1];
            a[j-1]=s;
          }
        }
    }

    cout<<"\n This is the Sorted List( Using Insertion Sort):-";
    for(int i=0;i<n;i++)
    {
      cout<<" "<<a[i];
    }
    return 0;
}