//Bubble Sorting.
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
    
    
    for(int j=0;j<n-1;j++)     //For number of passes
    {
      for(int i=0;i<n-j-1;i++)  //we subtract one also because the no. of comparison is always one less than the total no. of elements.
      {
      if(a[i]>a[i+1])
      {
        int b=a[i+1];
        a[i+1]=a[i];
        a[i]=b;
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