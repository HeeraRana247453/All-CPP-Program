//Demonstrate the use of the array 
//By entering the data of the employees of a company using the array of the employee.
#include<iostream>
using namespace std;

class company
{
      static int id;
      string name;
      int salary;
    public:
      void setData(void);
      void getData(void);
};

int company:: id=1030;   //This value pass from one object to the other object

int main()
{
    int n;
    company employee[20];
    cout<<"How many employees are for entry: ";
    cin>>n;

    for(int i=0;i<n;i++){
        employee[i].setData();
    }
    for(int i=0;i<n;i++){
        employee[i].getData();
    }
    return 0;
}

void company:: setData(void)
{
    cout<<endl<<"Enter the Name: ";
    cin>>name;
    cout<<"Enter the salary: ";
    cin>>salary;
}
void company:: getData(void)
{
    cout<<endl<<"Employee Id-"<<id<<endl;
    cout<<"Employee Name-"<<name<<endl;
    cout<<"Employee Salary-"<<salary<<endl;
    id++;
}