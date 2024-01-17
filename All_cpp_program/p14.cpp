//Demonstrate the function Overloading by Calculating the Simple and Compound Interest.
#include<iostream>
#include<cmath>
using namespace std;

float interest(float p,float r,int t)
{
    float si=p*r*t/100;
    return si;
}
float interest(float p,float r,int t,int n)
{
    float ta=p*pow((1+(r/100/n)),(n*t));
    float ci=ta-p;
    return ci;
}
int main()
{
    int choice;
    float p,r;
    int t,n;
    cout<<endl<<"*************Calculate the interest********************"<<endl<<endl;
    cout<<"Enter the principle Amount: ";cin>>p;
    cout<<"Enter the Rate of Interest: ";cin>>r;
    cout<<"Enter the Time Period: ";cin>>t;

    cout<<endl<<"1)Simple Interest"<<endl
              <<"2)Compound Interest"<<endl;
    cout<<"Enter the choice: ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Simple Interest: "<<interest(p,r,t)<<endl<<endl;
    }
    else if(choice==2)
    {
        cout<<"Enter the no. of times interst will be compounded per year: ";
        cin>>n;
        cout<<"Compound Interest: "<<interest(p,r,t,n)<<endl<<endl;
    }
    else{
        cout<<"Error: Enter a Valid choice!!"<<endl<<endl;
        main();
    }
    return 0;
}