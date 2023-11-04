//Selection Sort.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n How many element you want to insert in the array: ";
    cin>>n;
    long int a[n];
    cout<<"\n Enter the elements with the space: ";
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }

    cout<<"\n This is the unsorted list:-";      
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }

    int min=a[0];
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(a[i]>a[j])
        {
            int s=a[j];
            a[j]=a[i];
            a[i]=s;
        }
      }
    }

    cout<<"\n This is the sorted list:-";      
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}