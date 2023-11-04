/*Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance.
 For example:
------------- Combining Hierarchical inheritance and Multiple Inheritance. */

#include<iostream>
using namespace std;

//Parent Class
class vehicle
{
    public:
        vehicle()
        {
            cout<<"This is the vehicle."<<endl;
        }
};
//Base Class
class fare
{
    public:
        fare()
        {
            cout<<"This is the fare."<<endl;
        }
};
//Subclass
class car:public vehicle
{
    public:
        car()
        {
            cout<<"This is the car."<<endl;
        }
};
//Subclass
class bus:public vehicle,public fare
{
    public:
        bus()
        {
            cout<<"This is the Bus."<<endl;
        }
};
int main()
{
    car c1;
    // bus b1;
    return 0;
}