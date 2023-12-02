//Demonstrate the multiple inheritance & Remove Ambiguity using Scope Resolution in Inheritance.
//WAP to create a simple calculator,scientific calculator and Hybrid Calculator,
// which is derived from simple & scientific.

#include<iostream>
#include<cmath>
using namespace std;

class calculator
{
        float a,b,res;
        char op;
    public:
        void calculate(char o,float p,float q)
        {
            a=p;
            b=q;
            op=o;
            if(op=='+')
            {
                res=a+b;
            }
            else if(op=='-')
            {
                res=a-b;
            }
            else if(op=='*')
            {
                res=a*b;
            }
            else if(op=='/')
            {
                res=a/b;
            }
            else{
                cout<<"Invalid Operator !!";
            }
        }
        void display_res()
        {
            cout<<"Result is "<<a<<op<<b<<" = "<<res<<endl;
        }
};
class scientific_cal
{
        double degree,radians,value;
        string operate;
    public:
        scientific_cal()
        {
            degree=0;
            radians=0;
            value=0;
        }
        void calculate(string ope,double angle)
        {
            operate=ope;
            degree=angle;
            radians=(degree*M_PI)/180;
            if(operate=="sin")
            {
                value=sin(radians);
            }
            else if(operate=="cos")
            {
                value=cos(radians);
            }
            else if(operate=="tan")
            {
                if((int)degree%90==0)
                {
                    value=INFINITY;
                }
                else
                {
                    value=tan(radians);
                }
            }
            else
            {
                cout<<"Invalid trignometric function."<<endl;
            }
        }
        void display_val()
        {
            cout<<operate<<"("<<degree<<")"<<" = "<<value<<endl;
        }
};
class hybrid: public calculator,public scientific_cal
{
    public:
        hybrid()
        {
            cout<<"This is the hybrid calculator."<<endl;
        }
};
int main()
{
    double x,y,a;
    char o;
    string ope;
    int choice;

    cout<<endl<<"1)Simple Calculator"<<endl<<"2)Scientific Calculator"<<endl<<"3)Hybrid Calculator"<<endl<<"4)Exit"<<endl;
    cout<<"Enter the choice: ";cin>>choice;

    if(choice==1)
    {
    cout<<endl<<"Enter the expression: ";cin>>x>>o>>y;
    calculator obj1;
    obj1.calculate(o,x,y);
    obj1.display_res();
    main();
    }
    else if(choice==2)
    {
    scientific_cal obj2;
    cout<<"Enter the trignometric expression: ";cin>>ope>>a;
    obj2.calculate(ope,a);
    obj2.display_val();
    main();
    }
    else if(choice==3)
    {
        hybrid obj3;

        cout<<"Enter the expression: ";cin>>x>>o>>y;
        obj3.calculator::calculate(o,x,y); //Ambiguity Removed
        obj3.display_res();

        cout<<endl<<"Enter the trignometric expression: ";cin>>ope>>a;
        obj3.scientific_cal::calculate(ope,a);  //Ambiguity Removed
        obj3.display_val();
        main();
    }
    else if(choice==4)
    {
        return 0;
    }
    else
    {
        cout<<"Invalid choice !!";
        main();
    }
    // return 0;
}
