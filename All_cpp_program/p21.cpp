//program to demonstrate the use of the Static Data Members in class.
#include<iostream>
using namespace std;

class employee
{
    int id;
    string name;
    static int count;
   public:
     void setData(void);
     void getData(void);
};

int employee:: count;       //Bydefault initialize with zero & we can also initialize
int main()
{
    employee heera,rohit,vansh;

    heera.setData();
    heera.getData();

    rohit.setData();
    rohit.getData();

    vansh.setData();
    vansh.getData();

    return 0;
}

void employee:: setData(void)
{
    cout<<endl<<"Enter the employee Id=";
    cin>>id;
    cout<<"Enter the name: ";
    cin>>name;
    count++;
}
void employee :: getData(void)
{
    cout<<endl<<"Id of the Employee-"<<count<<" is: "<<id<<endl;
    cout<<"Name of the Employee-"<<count<<" is: "<<name<<endl;
}