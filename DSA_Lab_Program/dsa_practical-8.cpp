//Write a program to insert the elements in a given array at front, back and at the given position.
#include<iostream>
using namespace std;
#define z 50

int print_array(int *a,int n);
int front_insert(int *a,int n);
int end_insert(int *a,int n);
int position_insert(int *a,int n);


int main()
{
    int a[z]={3,4,5,7,8};
    int n=5;

    print_array(a,n);

    int p;
    cout<<endl<<endl<<"1)INSERT AT FRONT"<<endl<<"2)INSERT AT END"<<endl<<"3)INSERT AT THE GIVEN POSITION"<<endl;
    cout<<"Where you want to insert the next elements: ";
    cin>>p;

    if(p==1)
    {
        n=front_insert(a,n);
    }
    else if(p==2)
    {
        n=end_insert(a,n);
    }
    else if(p==3)
    {
       n=position_insert(a,n);
    }
    else
    {
        cout<<"Invalid choice !!";
    }
    print_array(a,n);

    return 0;
}

int print_array(int *a,int n)
{
    cout<<"Now your array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int front_insert(int *a,int n)
{
   int num,value;
   cout<<endl<<"How many numbers you want to insert in the array: ";
   cin>>num;
   for(int i=0;i<num;i++)
   {
    if(n<z)
    {
        for(int j=n;j>=0;j--)
        {
            a[j]=a[j-1];
        }
        cout<<"Enter the new element: ";
        cin>>value;
        a[0]=value;
    }
    n++;
   } 

   return n;
}

int end_insert(int *a,int n)
{
    int num,value;
    cout<<endl<<"How many elements you want to add in the array: ";
    cin>>num;

    for(int j=0;j<num;j++)
    {
        if(n<z)
        {
            cout<<"Enter the new element: ";
            cin>>value;
            a[n]=value;
            n++;
        }
        else
        {
            cout<<"Array is Full.!!"<<endl;
        }
    }
    
    return n;
}

int position_insert(int *a,int n)
{
    int num,p,pos,value;
    cout<<endl<<"Enter the position: ";
    cin>>p;
    pos=p-1;
    cout<<"How many elements you want to insert? : ";
    cin>>num;

    for(int i=0;i<num;i++)
    {
        if(n<z)
        {
            for(int j=n;j>=pos;j--)
            {
                a[j]=a[j-1];
            }
            cout<<"Enter the value: ";
            cin>>value;
            a[pos]=value;
        }
        n++;
        pos++;
    }
    return n;
}