//To demonstrate the default arguments
#include<iostream>
#include<cmath>
using namespace std;

float SI(float p,float r,float t=1)
{
    float si=p*r*t/100;
    return si;
}
float CI(float p,float r,float t=1,float n=1)
{
    float totalamount= p*pow((1+(r/100/n)),(n*t));
    float compoundinterest= totalamount-p;
    return compoundinterest;
}
int main()
{
    cout<<"1)Simple Interest"<<endl
        <<"2)Compound Interest"<<endl;
    int choice;
    cout<<"Enter the choice: ";
    cin>>choice;
    if(choice==1)
    {
        float p,r,t;
        cout<<"Enter the Principle Amount: ";
        cin>>p;
        cout<<"Enter the Rate of Interest: ";
        cin>>r;
        cout<<"Enter the Time: ";
        cin>>t;
        
        cout<<"Simple Interest: "<<SI(p,r,t)<<endl;
    }
    else if(choice==2)
    {
        float p,r,t,n;
        cout<<"Enter the principle Amount: ";cin>>p;
        cout<<"Enter the Rate of Interest: ";cin>>r;
        cout<<"Enter the Time Period: ";cin>>t;
        cout<<"Enter the no. of times Interest will be compounded per year: ";cin>>n;

        cout<<"Compoud Interest: "<<CI(p,r)<<endl;
    }
    else{
        cout<<"Enter a valid choice !!";
        main();}
    
    return 0;
}