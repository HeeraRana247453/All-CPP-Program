//Demonstrate the Multilevel Inheritance.
//WAP to enter the details(Name,Rollno,Marks) of the N no. of students and produce the result in percentage & tell PASS/FAIL.

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class student
{
        string name;
        int rollno;
    public:
        void student_info(string n,int r)
        {
            name=n;
            rollno=r;
        }
        void get_info()
        {
            cout<<setw(15)<<name<<","<<setw(8)<<rollno<<",";
        }
};
class marks: public student
{
    protected:
        float physics;
        float chemistry;
        float maths;
    public:
        marks()//default constructor
        {
            physics=0;
            chemistry=0;
            maths=0;
        }
        void set_marks(float p,float c,float m)
        {
            physics=p;
            chemistry=c;
            maths=m;
        }
        void get_marks()
        {
            cout<<setw(10)<<physics<<","<<setw(10)<<chemistry<<","<<setw(10)<<maths<<",";
        }
};
class result: public marks
{
        float percent,p1,p2,p3;
        string res;
    public:
        result()  //default constructor
        {
            
        }
        result(string n,int r,float p,float c,float m) //parametrized constructor
        {
            student_info(n,r);
            set_marks(p,c,m);
            p1=(physics/80)*100;
            p2=(chemistry/80)*100;
            p3=(maths/80)*100;
            percent=((physics+chemistry+maths)/240)*100;
            if(p1>=33 && p2>=33 && p3>=33 && percent>=33)
            {
                res="PASS";
            }
            else
            {
                res="FAIL";
            }
        }
        void get_result()
        {
            get_info();
            get_marks();
            cout<<setw(10)<<percent<<"% ,"<<setw(5)<<res<<endl;
        }
};

int main()
{
    int n,r;
    string na;
    float p,c,m;
    cout<<"Enter the no. of students: ";cin>>n;

    result s[n];
    for (int i = 0; i <n; i++)
    {
        cout<<"Student-"<<i+1<<" Name: ";cin>>na;
        cout<<"Enter the Rollno.: ";cin>>r; 
        cout<<"Enter the marks in physics,chemistry and maths: ";cin>>p>>c>>m;       
        // s[i].student_info(na,r);
        //s[i[]]
        s[i]=result(na,r,p,c,m);  //constructor called
    }

    cout<<endl<<"\t\t\t---------Student Details------------"<<endl;
    cout<<setw(15)<<"Name"<<setw(10)<<" RollNo."<<setw(11)<<"Physics"<<setw(10)<<"Chemistry"<<setw(12)<<"Mathematics"<<setw(12)<<"Percentage"<<endl<<"-----------------------------------------------------------------------------------------------"<<endl;
    for (int i = 0; i < n; i++)
    {
        s[i].get_result();
    }
    return 0;
}
