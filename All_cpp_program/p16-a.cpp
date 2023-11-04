//Demonstrat the use of the Classes, Object and Access specifier
#include<iostream>
using namespace std;

class employee{
    private:   
       int a,b,c,area,volume;    

    public:
       int d,e;
       int x,y,z;

       void cuboid_volume(int a,int b,int c);
       void area_rectangle(int d,int e);
       void getData1();
       void getData2();
};


int main()
{
    employee ep1;
    ep1.d=4;
    ep1.e=1;

    cout<<"First side of the cuboid is: ";
    cin>>ep1.x;
    cout<<"second side of the cuboid is: ";
    cin>>ep1.y;
    cout<<"third side of the cuboid is: ";
    cin>>ep1.z;
    ep1.cuboid_volume(ep1.x,ep1.y,ep1.z);
    ep1.getData1();
    
    cout<<"Enter the side of the rectangle: ";
    cin>>ep1.d;
    cout<<"Enter the second side of the rectangle: ";
    cin>>ep1.e;
    ep1.area_rectangle(ep1.d,ep1.e);
    ep1.getData2();

    return 0;
}


void employee:: cuboid_volume(int a,int b,int c)
{
    volume=a*b*c;
}
void employee:: area_rectangle(int d,int e)
{
    area=d*e;
}
void employee:: getData1()
{
    cout<<"The volume is: "<<volume<<endl;
}
void employee:: getData2()
{
    cout<<"The area is: "<<area<<endl;
}