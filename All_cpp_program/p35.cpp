//Demonstrate the Dynamic Initialization of the Objects Using Constructor.
//Program to calculate the simple and the compound interest on the principal amount and return the total amount.

#include<iostream>
using namespace std;

class bank
{
      float principal;
      int year;
      float rate;
      float return_value;
    public:
      bank();
      bank(float p,int y,int R);
      bank(float p,int y,float r);
      void return_value_calculator();
};

bank::bank()
{
  year=0;
  rate=0;
  return_value=0;
}
bank::bank(float p,int y,int R)
{
  principal=p;
  year=y;
  rate=(float)R/100;
  return_value=principal;
}
bank::bank(float p,int y,float r)
{
  principal=p;
  year=y;
  rate=r;
  return_value=principal;
}
void bank:: return_value_calculator()
{
  for (int i = 0; i < year; i++)
  {
      return_value = return_value*(1+rate);  //This is return value not only interest (only for interest subtract the principal amount from the final return_value).
  }

 cout<<endl<<"Return value is: "<<return_value<<endl;
}

int main()
{
   bank d[2]; //array of objects

   float p,r=0;
   int R=0,y,choice;

   cout<<"Principal amount: ";
   cin>>p;
   cout<<"Time period: ";
   cin>>y;

   cout<<"-----Interest-----"<<endl
       <<"1)In Decimal"<<endl
       <<"2)In Percentage%"<<endl;
   cin>>choice;
   if(choice==1)
      {
       cout<<"Rate of interest: ";
       cin>>r;
       d[1]=bank(p,y,r); //explicit call of parametrized constructor
       d[1].return_value_calculator();
      }
   else if(choice==2)
    {
     cout<<"Rate of interest: ";
     cin>>R;
     d[2]=bank(p,y,R);
     d[2].return_value_calculator();
    }
   else
   {
     cout<<endl<<"Invalid choice!!";
     d[0].return_value_calculator(); //values of the default constructor will be consider.
     main();
   }

   return 0;
}