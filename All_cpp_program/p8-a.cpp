//To demonstrate the default arguments
#include<iostream>
using namespace std;

int bankAccount(int money,float factor=1.4) //Default Argument
{
    money = money*factor;
    return money;
}
int main()
{
    int money;
    cout<<"Enter the amount: ";
    cin>>money;

    cout<<"The "<<money<<" Rs after 1 year is: "<<bankAccount(money)<<endl;
    cout<<"For VIP: The "<<money<<" Rs after 1 year is: "<<bankAccount(money,2.4)<<endl;

    return 0;
}