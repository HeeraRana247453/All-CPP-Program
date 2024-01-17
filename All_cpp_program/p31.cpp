//Demonstrate the use of the parametrized constructor.
//Print two coordinates & print the distance between them.

#include<iostream>
#include<cmath>
using namespace std;

class coordinates
{
      float a,b;
    public:
      coordinates(float x,float y);
      void setData(float x,float y);
      void display(void);
      friend class calculator;
};
class calculator
{   float dis;
   public:
     calculator();  //it necessary to define the default constructor before the parametrized constructor.
     void distance(coordinates p1,coordinates p2);
     void dist_Display(void);
};

coordinates::coordinates(float x,float y)//parametrized constructor
{
    a=x;
    b=y;
}
void coordinates:: setData(float x,float y)
{
   a=x;
   b=y;
}
void coordinates::display(void)
{
    cout<<"Point is: ("<<a<<","<<b<<")"<<endl;
}

calculator::calculator() //default constructor
{
    dis=0;
}
void calculator::distance(coordinates p1,coordinates p2)
{
    dis=sqrt(pow(((p2.a) - (p1.a)),2) + pow(((p2.b) -(p1.b)),2));
}
void calculator::dist_Display(void)
{
    cout<<"Distance b/w two point is: "<<dis<<endl;
}

int main()
{
    float u,v,s,t;
    coordinates p1(2,4),p2(5,9);

    cout<<"Enter the value of x1 and y1: ";
    cin>>u>>v;
    p1.setData(u,v);  //if it will not call then default constructor value will be consider.

    cout<<"Enter the value of x2 and y2: ";
    cin>>s>>t;
    p2.setData(s,t);

    p1.display();
    p2.display();

    calculator d1;
    d1.distance(p1,p2);  //if it will not call then default constructor value will consider.
    d1.dist_Display();

    return 0;
}

// #include<iostream>
// #include<cmath>
// using namespace std;
// class calculator;
// class coordinates
// {
//     float x,y;
//     public:
//         coordinates():x(0),y(0){}
//         coordinates(float a,float b)
//         {
//             x=a;
//             y=b;
//         }
//         void display()
//         {
//             cout<<"(x,y)= "<<"("<<x<<","<<y<<")"<<endl;
//         }
//         friend class calculator;
// };
// class calculator
// {
//     float dis;
//     public:
//         calculator():dis(0){}
//         calculator(coordinates point1,coordinates point2)
//         {
//             dis=sqrt(pow((point1.x-point2.x),2) + pow((point1.y-point2.y),2));
//         }
//         void display()
//         {
//             cout<<"Distance between two points: "<<dis<<endl;
//         }
// };
// int main()
// {
//     coordinates p1(4,8),p2(2,4);
//     p1.display();
//     p2.display();

//     calculator d1(p1,p2);
//     d1.display();

//     return 0;
// }