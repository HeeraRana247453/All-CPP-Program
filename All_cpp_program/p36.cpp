//Demonstrate the copy Constructor
//Program to copy the data of student from one object to the other object.
#include<iostream>
#include<string>
using namespace std;


class student
{
      string name;
      int rollno;
      float fee;
    public:
       student();
       student(string n,int,float); //parametrized constructor
       student(student &obj);//copy constructor
       void display();
};
student::student()
{
    name="XXXXX";
    rollno=00000;
    fee=0;
}
student::student(string n,int r,float f)
{
  name=n;
  rollno=r;
  fee=f;
}
student::student(student &obj)
{
    cout<<endl<<"copy constructor called !!";
    name=obj.name;
    rollno=obj.rollno;
    fee=obj.fee;
}
void student::display()
{
    cout<<endl<<"Name: "<<name<<",  Roll No: "<<rollno<<",  Fee: "<<fee<<endl;
}


int main()
{
   string n;
   int r;
   float f;
   cout<<"Name: ";getline(cin,n);   
   cout<<"Roll No.: ";cin>>r;
   cout<<"Fee: ";cin>>f;


   student s1;//default constructor called
   s1.display();

   student s2(n,r,f);//parametrized constructor called
   s2.display();

   //implicit call or default copy constructor call
   //student s3=s2; or
   student s3(s2);//copy constructor called 
                  //taking another object as an argument.
                  //if you will not define copy constructor compiler does it for us.
   s3.display();

   student s4;
   s4=s2;      //copy constructor will not invoked because assignment operation is performed here & do not confuse with line-61 and this line of code because both are different thing
   s4.display();

   return 0;
}


/* 
   gets() in c but it is deprecated alternative is fgets(str,sizeof(str),sdin);.
*/

/* 
   1)When we do not define the copy constructor inside the class, then the calling of the constructor is called implicit call of copy constructor or Default copy constructor calling.
   2)when we define the copy constructor inside the class, then the calling of the constructor is called explicit call of the copy constructor or User defined copy constructor calling.
   3)It takes an argument of the same class type as a reference.
   4)It initializes the newly created object with the values of an existing object.
   5)It is used to create a new object that is a copy of an existing object.
   6)It is called automatically when an object is passed by value or returned by value.
   7)If a copy constructor is not defined, the compiler provides a default copy constructor.
   8)A copy constructor can be defined explicitly by the programmer.
   9)The copy constructor should not modify the source object.
   10)The copy constructor should allocate memory for the newly created object if necessary.
   11)The copy constructor should be declared as const if it does not modify the source object.
   12)The copy constructor should be declared as protected or private if the class has private or protected members.
   
*/