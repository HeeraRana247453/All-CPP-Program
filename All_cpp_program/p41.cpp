//Demonstrate the Single Inheritance.(Privately)(without arguments)

#include<iostream>
using namespace std;

class person
{
        char name[30];
        int id;
    public:
        void set_p()
        {
            cout<<"Enter the Name:";
            cin>>name;
            cout<<"Enter your Id: ";
            cin>>id;
        }
        void display_p()
        {
            cout<<"Name: "<<name<<endl<<"Id :"<<id<<endl;
        }
};
class student:private person
{
        char course[50];
        int fee;
    public:
        void set_s()
        {
            set_p();
            cout<<"Enter the course: ";
            cin>>course;
            cout<<"Enter the fee: ";
            cin>>fee;
        }
        void display_s()
        {
            display_p();
            cout<<"Course: "<<course<<endl<<"Fee: "<<fee<<endl;
        }
};

int main()
{
    student o1;
    o1.set_s();
    cout<<endl<<"-------Information----------"<<endl;
    o1.display_s();
    return 0;
}