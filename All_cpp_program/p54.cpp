//Demonstrate the Virtual Base class
//Base class student----->test_score subclass
//Base class student----->sport_score subclass
//test_score subclass,sport_score subclass------>Result class

#include<iostream>
using namespace std;

class student
{
    protected:
        int rollno;
    public:
        void set_rollno(int r)
        {
            rollno=r;
        }
        void show_rollno()
        {
            cout<<"Roll No.: "<<rollno<<endl;
        }
};
class test_score:virtual public student
{
    protected:
        float physics,chemistry,maths;
    public:
        void set_marks(float p,float c,float m)
        {
            physics=p;
            chemistry=c;
            maths=m;
        }
        void show_marks()
        {
            cout<<"Marks in Physics: "<<physics<<endl;
            cout<<"Marks in Chemistry: "<<chemistry<<endl;
            cout<<"Marks in Maths: "<<maths<<endl;
        }
};
class sport_score:virtual public student
{
    protected:
        float score;
    public:
        void set_score(float s)
        {
            score=s;
        }
        void show_score()
        {
            cout<<"Score is: "<<score<<endl;
        }
};
class results:public test_score,public sport_score
{
    protected:
        float result;
    public:
        void set_result()
        {
            result=physics+chemistry+maths+score;
        }
        void display()
        {
            show_rollno();
            show_marks();
            show_score();
            cout<<endl<<"Result is: "<<result<<endl;            
        }
};
int main()
{
    results obj1;
    obj1.set_rollno(2220924);
    obj1.set_marks(78.5,89,90);
    obj1.set_score(340.4);
    obj1.set_result();
    obj1.display();
    return 0;
}