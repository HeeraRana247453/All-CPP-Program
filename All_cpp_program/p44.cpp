//Demonstrate the use of Single Inheritance.
//Program to inherit the properties of the animal to the mammals.

#include<iostream>
#include<string>
using namespace std;

class animal  //base class
{
    public:
      int legs,weight;
      string tail,name,colour,food;
    public:
      animal()
      {
        cout<<endl<<"*Calling of the default constructor of the animal class."<<endl;
        name="XXXXXX";
        legs=0;
        tail="XXXXX";
        colour="XXXXX";
      }
      void properties(string n,int l,string t,string c)
      {
        name=n;
        legs=l;
        tail=t;
        colour=c;
      }
      void eat(string f,string t)
      {
        name=f;
      }
      void display()
      {
        cout<<endl<<"Animal Name: "<<name<<endl
                  <<"No. of legs: "<<legs<<endl
                  <<"Tail is present or not: "<<tail<<endl
                  <<"Colour of animal: "<<colour<<endl; 
      }    
};

class mammals:public animal  //derived class
{
    public:
      string wings;
      int size;
    public:
      mammals()
      {
        cout<<endl<<"*Calling of default constructor of mammals class."<<endl;
      }
      void fly_power(string w,int s,int wght,int l)
      {   
        size=s;
        wings=w;
        weight=wght;
        legs=l;
        if(wings=="yes" && size>20 && weight<500)
        {
            cout<<endl<<"This mammal can fly because:-"<<endl
                      <<"\tsize of the wings is: "<<size<<"cm"<<endl
                      <<"\tbody weight is: "<<weight<<"gms"<<endl;
        }
        else{
            cout<<"This mammal can not fly."<<endl;
        }
      }
};

int main()
{
   animal a1;
   a1.properties("Lion",4,"yes","Orange");
   a1.display();

   mammals m1;
   
   string w;
   int s,wght,l;
   cout<<"Check wheter mammal can fly or not:-"<<endl;
   cout<<"\tWings of mammals(yes/no): ";getline(cin,w);
   cout<<"\tEnter the size of the wings: ";cin>>s;
   cout<<"\tEnter the weight of the mammal: ";cin>>wght;
   cout<<"\tEnter the no. of legs: ";cin>>l;

   m1.fly_power(w,s,wght,l);
   return 0;
}

/* 
  Derived class syntax
  --------------------
  class (derived_class_name):(visibility_mode) (base_class_name)
  {
    access specifier:
       data members;
       member funtions/methods/etc...;      
  }


  Note:-
    1)Default visibility mode is private
    2)Public Visibility Mode: Public members of the base class becomes Public members of the derived class.
    3)Private visibility Mode: Public members of the base class becomes Private members of the derived class.
    4)Private members are never inherited.
*/