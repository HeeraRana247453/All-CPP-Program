//Demostrate the use of passing object(or array of object) as an argument in the function of the another object(or array of object).
//Program to calculate the sum of comlex numbers.
#include<iostream>
using namespace std;

class complex
{
      int a,x;
      int b,y;
    public:
      void setData(int v1,int v2);
      void setDataSum(complex o1,complex o2);
      void getData(complex o1,complex o2);
      void getDataSum(complex sds);
};
int main()
{
  complex o[6],sds[2],  gd[6],gds[3];
  o[0].setData(2,5);
  o[1].setData(4,3);

  o[2].setData(1,9);
  o[3].setData(2,8);

  o[4].setData(7,5);
  o[5].setData(2,3);

  for(int h=0;h<3;h++){
  sds[h].setDataSum(o[h],o[h+1]);
  }

  for(int i=0;i<6;i++){
  gd[i].getData(o[i],o[i+1]);    //we can also print the same thing using the o[0]-o[5] without passing the argument(or void)
  }
  for(int j=0;j<3;j++){
  gds[j].getDataSum(sds[j]);    //we can also print the same thing using the sds[0]-sds[5] without passing the argument(or void)
  }
  return 0;
}

void complex:: setData(int v1,int v2)
{
    a=v1;
    b=v2;
}
void complex::setDataSum(complex o1,complex o2)
{
    x=o1.a + o2.a;
    y=o1.b + o2.b;
}
void complex::getData(complex o1,complex o2)
{
    cout<<"Fist Complex Number is: "<<o1.a<<"+i"<<o1.b<<endl;
    cout<<"Second Complex Number is: "<<o2.a<<"+i"<<o2.b<<endl;
}
void complex::getDataSum(complex sds)
{
    cout<<endl<<"Sum of complex number: "<<sds.x<<"+i"<<sds.y<<endl;
}