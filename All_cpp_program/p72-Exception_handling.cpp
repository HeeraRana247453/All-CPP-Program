// The following is a simple example to show exception handling in C++.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the Table number: ";cin>>x;
    try{
        if(x<=0)
        {
            throw x;
        }
        for(int i=1;i<11;i++)
            {cout<<x<<" x "<<i<<" = "<<x*i<<endl;}
    }

    catch(int x){
        cout<<endl<<"Error: Please Enter the Positive Number !!"<<endl;
        main();
        }

    return 0;
}