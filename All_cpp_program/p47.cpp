//Demonstrate the Multiple Inheritance.

#include<iostream>
using namespace std;
//Base class-1
class vehicle
{
    public:
        vehicle()//default constructor
        {
            cout<<endl<<"This is the Vehicle"<<endl;
        }
};
//Base class-2
class fourwheeler
{
    public:
        fourwheeler()//default constructor
        {
            cout<<"This is the four wheeler."<<endl;
        }
};

//subclass derived from two base class
class car: public vehicle,public fourwheeler
{
    public:
        car()//default constructor
        {
            cout<<"This is the car"<<endl;
        }
};

int main()
{
    car v1;
    return 0;
}