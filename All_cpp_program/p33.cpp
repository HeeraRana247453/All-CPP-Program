//Demonstrate the Parametrized Constructor with the default arguments
//Program to print students data.

#include<iostream>
using namespace std;

class student
{
      string name;
      float marks;
      int age;
      int year;
      string stream;
    public:
      student(string n,float m,int a,int y=2,string s="cse")
      {
        name=n;
        marks=m;
        age=a;
        year=y;
        stream=s;
      }
      void display_stu()
      {
        cout<<endl<<"Student Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"Stream: "<<stream<<endl;
      }
};

int main()
{
    student s1("Aayush",54,19,3,"AI&ML");
    s1.display_stu();

    student s2("Heera Rana",59,20);//default argument will consider for year and stream
    s2.display_stu();

    return 0;
}