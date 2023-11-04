//Demostrate the Constructor Overloading.
//Program to calculate the area & volume of different shapes.

#include<iostream>
using namespace std;

class rectangle
{
      int x,y;
    public:
      rectangle()
      { 
        x=0;
        y=0;
      }
      rectangle(int a)
      {
        x=a;
        y=a;
      }
      rectangle(int a,int b)
      {
        x=a;
        y=b;
      }
      void area(void)
      {
        cout<<"Area is: "<<x*y<<endl;
      }
};
class cuboid
{
      float x,y,z;
    public:
      cuboid(float s)
      { 
        x=s;
        y=s;
        z=s;
      }
      cuboid(float s,float t)
      {
        x=s;
        y=t;
        z=2;
      }
      cuboid(float s,float t,float u)
      {
        x=s;
        y=t;
        z=u;
      }
      void volume()
      {
        cout<<"volume is: "<<x*y*z<<endl;
      }
};

int main()
{
  rectangle a1;
  cout<<"Point ";
  a1.area();

  rectangle a2(5);
  cout<<"Square ";
  a2.area();

  rectangle a3(3,6);
  cout<<"Rectangle ";
  a3.area();

  cuboid c1(5),c2(3,9),c3(4,5,6);
  cout<<"Cube ";
  c1.volume();

  cout<<"Lamina ";
  c2.volume();

  cout<<"Cuboid ";
  c3.volume();

  return 0;
}