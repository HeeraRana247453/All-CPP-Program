//Demonstrate the Pointers,New and Delete Keyword

#include<iostream>
using namespace std;
int main()
{
    //Basic Example
    int a=4;
    int *ptr;
    ptr = &a;
    cout<<endl<<"The value of a using variable is "<<a;
    cout<<endl<<"The value of a using pointer is "<<*(ptr)<<endl;

    //Dynamic Initialization of pointer using the "new" Keyword
    // int *p = 34; //Throw Error
    int *p=new int(40);
    float *q=new float(34.4);
    char *r=new char('g');
    cout<<endl<<"The integer value of 'p' is: "<<*p;
    cout<<endl<<"The float value of 'q' is: "<<*q;
    cout<<endl<<"The char value of 'r' is: "<<*r<<endl;

    //Dynamic Initialization of the pointer array using the "new" keyword.
    int *arr=new int[8];
    arr[0]=10;
    *(arr+1)=11;
    *(arr+1)=12;
    arr[3]=13;
    cout<<endl<<"The value of arr[0]: "<<arr[0];
    cout<<endl<<"The value of arr[1]: "<<arr[1];
    cout<<endl<<"The value of arr[2]: "<<arr[2];
    cout<<endl<<"The value of arr[3]: "<<arr[3]<<endl;

    //Simple Pointer Array
    int array[5]={0,1,2,3,4};
    int *pt=array;
    cout<<endl<<"array[0]: "<<*pt;
    cout<<endl<<"array[1]: "<<*(pt+1);
    cout<<endl<<"array[2]: "<<*(pt+2);
    cout<<endl<<"array[3]: "<<*(pt+3);
    cout<<endl<<"array[4]: "<<array[4]<<endl;
    //using loop for the same.
    for(int i=0;i<5;i++)
    {
        cout<<endl<<"The Value of array["<<i<<"] at address "<<&array[i]<<" is: "<<*(pt+i);
    }
    return 0;
}