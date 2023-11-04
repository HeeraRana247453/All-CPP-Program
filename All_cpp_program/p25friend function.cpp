//Friend Function Use
//program to add the two complex numbers

#include<iostream>
using namespace std;

class complex
{
      int a,b;
    public:
      void setdata(int n1,int n2)
    {
      a=n1;
      b=n2;
    }

      void getdata()
    {
        cout<<"Complex no. is: "<<a<<" + "<<b<<"i"<<endl;
    }
    
    friend complex sumComplex(complex c1,complex c2);
    friend void sumcomplex_2(complex c1,complex c2);
};


complex sumComplex(complex c1,complex c2) //It is an external function of the class ,which get permission from the class as a friend to access the private data members
{
    complex c3;
    c3.setdata((c1.a + c2.a),(c1.b + c2.b));  //It is just like (c3.a = c1.a + c2.a) and (c3.b = c1.b + c2.b)
    return c3;
}

void sumcomplex_2(complex c1,complex c2)
{
    cout<<"sum of the complex number is: "<<(c1.a+c2.a)<<" + "<<(c1.b+c2.b)<<"i"<<endl;
}

int main()
{
    complex c1,c2,sum;
    c1.setdata(5,9);
    c1.getdata();

    c2.setdata(45,70);
    c2.getdata();

    sum = sumComplex(c1,c2);  //Assigning c3 object to the sum object
    sum.getdata();

    sumcomplex_2(c1,c2);   //This is the external function not in the scope of the class but this is friend function.
    return 0;
}

/*
    Properties of the Friend Function:-
    ------------------------------------
    1)Not in the scope of the class.
    2)Since it is not in scope of the class, it cannot be called from the object of the that class.--sum.sumComplex(c1,c2); is invalid.
    3)Can be invoked without the help of any object.
    4)Usually contain the objects as arguments.
    5)Can be declared public and private section of the class.
    6)It cannot access the members directly by their names but needs object_name.member_name to access any member.
*/