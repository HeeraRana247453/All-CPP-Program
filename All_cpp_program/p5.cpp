//simple program to print the multiplication table using the loops

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the table number: ";
    cin>>n;
    /* for(int i=1;i<=10;i++)
    {
        cout<<setw(3)<<i<<"x"<<n<<" = "<<i*n<<endl;
    } */
    int i=1;
    do{
        cout<<setw(4)<<i<<"x"<<n<<" = "<<i*n<<endl;
        i++;

        if(i>10)
        {
            break;
        }
    }while(1);

    // return 0; 
}

