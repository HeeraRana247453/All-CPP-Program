#include<iostream>
using namespace std;

class student{
    char name[30];
    int rollno;
    float marks;

    public:
        void getdata(void);
        void display(void);
};

void student::getdata(void)
{
    cout<<"\nEnter the Name: ";
    cin>>name;
    // gets(name);       
    cout<<"\nEnter the Roll No.: ";
    cin>>rollno;
    cout<<"\nEnter the marks: ";
    cin>>marks;
}
void student::display(void)
{
    cout<<"\nName: "<<name;
    cout<<"\nRoll No.: "<<rollno;
    cout<<"\nMarks: "<<marks;
}

int main()
{
    student s1,s2;  //You can also make an array of the objects.
    s1.getdata();
    printf("\n");//You can use printf() in c++ also.
    s2.getdata();

    s1.display();
    printf("\n");
    s2.display();

    return 0;
}