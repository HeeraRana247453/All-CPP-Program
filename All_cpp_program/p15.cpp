//Function overloading 
#include<iostream>
#define pi 3.14
using namespace std;

float area(float a);             //circle
float area(float a,float b);    //Rectangle
float volume(float a);                  //Cube
float volume(float a,float b);          //Cylinder
float volume(float a,float b,float c);  //Cuboid
int main()
{
    float choice,a,b,c;
    cout<<"1.Area of the circle"<<endl<<"2.Area of the Rectangle."<<endl<<"3.Volume of the Cube"<<endl<<"4.Volume of the Cuboid"<<endl<<"5.Volume of the cylinder."<<endl;
    cout<<"Enter the choice: ";
    cin>>choice;

    if(choice==1)
    {
        cout<<endl<<"Enter the radius: ";
        cin>>a;
        cout<<"Area of the circle: "<<area(a);
    }
    else if(choice==2)
    {
        cout<<endl<<"Enter the first side: ";
        cin>>a;
        cout<<"Enter the second side: ";
        cin>>b;
        cout<<"The area of the rectangle is: "<<area(a,b);
    }
    else if(choice==3)
    {
        cout<<endl<<"Enter the side of the cube: ";
        cin>>a;
        cout<<"The volume of the cube is: "<<volume(a);
    }
    else if(choice==4)
    {
        cout<<endl<<"Enter the first side of the cuboid: ";
        cin>>a;
        cout<<"Enter the second side of the cuboid: ";
        cin>>b;
        cout<<"Enter the third side of the cuboid: ";
        cin>>c;
        cout<<"The volume of the cuboid is: "<<volume(a,b,c);
    }
    else if(choice==5)
    {
        cout<<endl<<"Enter the radius of the cylinder: ";
        cin>>a;
        cout<<"Enter the height of the cylinder: ";
        cin>>b;
        cout<<"The volume of the cylinder is: "<<volume(a,b);
    }
    else
    {
        cout<<"Invalid choice !!"<<endl<<endl;
        main();
    }
     
      return 0;
}

float area(float a)
{
    return pi*a*a;  //area of the cube.
}
float area(float a,float b)
{
    return a*b; //area of the rectangle.
}
float volume(float a)
{
    return a*a*a;   //volume of the cube
}
float volume(float a,float b,float c)
{
    return a*b*c;   //volume of the cuboid
}
float volume(float a,float b)
{
    return pi*a*a*b;    //volume of the cylinder
}