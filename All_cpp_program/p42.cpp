//Demonstrate the Single Inheritance.(with arguments)
#include<iostream>
#include<string>
using namespace std;

class person
{
        string name;
        int id;
    public:
        void set_p(int i,string n)
        {
            id=i;
            name=n;
        }
        void display_p()
        {
            cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl;
        }
};
class student: private person
{
        string course;
        int fee;
    public:
        void set_s(string c,string n,int i,int f)
        {
            set_p(i,n);
            course=c;
            fee=f;
        }
        void display_s()
        {
            display_p();
            cout<<"Course: "<<course<<endl<<"Fee: "<<fee<<endl;
        }
};

int main()
{
    int i,f;
    string n,c;
    cout<<"Enter the name: ";getline(cin,n);
    cout<<"Enter the course: ";getline(cin,c);
    cout<<"Enter the id: ";cin>>i;
    cout<<"Enter the fee: ";cin>>f;

   student o1;
   o1.set_s(c,n,i,f);
   cout<<endl<<"---------Information--------"<<endl;
   o1.display_s();
   return 0;
}