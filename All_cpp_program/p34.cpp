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
      return_value = return_value*(1+rate);  //This is return value not only interest (only for interest subtract the principal amount from the return_value).
  }

 cout<<endl<<"Return value is: "<<return_value<<endl;
}

int main()
{
   bank d1,d2,d3; //array of objects

   float p,r;
   int R,y;
  
   cout<<"Enter the value of the Principal,Year and Rate: ";
   cin>>p>>y>>r;
   d1=bank(p,y,r);
   d1.return_value_calculator();

   cout<<"Enter the value of the Principal,Year and Rate%: ";
   cin>>p>>y>>R;
   d2=bank(p,y,R);
   d2.return_value_calculator();

   d3.return_value_calculator();

   return 0;
}