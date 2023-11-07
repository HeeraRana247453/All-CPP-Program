//Demonstrate the Abstract  class and Pure virtual function(or abstract function)

#include<iostream>
using namespace std;
class base
{
    protected:
        string title; 
        float rating;
    public:
        base(string t,float r)
        {
            title=t;
            rating=r;
        }
        virtual void display()=0;//Must redefine in derived class, otherwise show error that derived class has become the abstract class, and the abstract class can'nt instanciate
};
class derived1:public base
{
        float video_len;
    public:
        derived1(string t,float r,float vlen):base(t,r)
        {
            video_len=vlen;
        }
        void display()
        {
            cout<<"Title: "<<title<<endl
                <<"Rating: "<<rating<<endl
                <<"Video Length: "<<video_len<<endl<<endl;
        }
};
class derived2:public base
{
        int n_words;
    public:
        derived2(string t,float r,int nwrd):base(t,r)
        {
            n_words=nwrd;
        }
        void display()
        {
         cout<<"Title: "<<title<<endl
             <<"Rating: "<<rating<<endl
             <<"No. of Words: "<<n_words<<endl;
        }
};

int main()
{
    string title="Runtime Polymorphism";
    float rating=3.45;
    float v_len=34.5;
    int words=523;
    
    derived1 p_video(title,rating,v_len); //invoke parametrized constructor
    derived2 p_text(title,rating,words);  //invoke parametrized constructor
    
    base *base_ptr[2];    //Base class pointer array
    base_ptr[0]=&p_video; //points to derived1 object
    base_ptr[1]=&p_text;  //points to derived2 object

    base_ptr[0]->display();
    base_ptr[1]->display();
    return 0;
}

/* 
Properties of the Pure Virtual Function:-
------------------------------------------
1)A class is abstract if it has at least one pure virtual function.
2)We can have pointers and references of abstract class type.
3)If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.
4)An abstract class can have constructors. 
5)An abstract class in C++ can also be defined using struct keyword.

1)Declaration Only:
    Pure virtual functions are declared in an abstract base class without providing an implementation.
2)Must Be Overridden:
    Any class inheriting from an abstract class with pure virtual functions must override and provide implementations for those functions.
3)Abstract Base Class:
    A class containing one or more pure virtual functions is an abstract base class, and you cannot create instances of it.
4)Enforces Polymorphism:
    Pure virtual functions enforce polymorphism by requiring derived classes to provide their own implementations.
5)Dynamic Binding:
    Pure virtual functions enable dynamic binding, where the actual function to be called is determined at runtime based on the object's type.
6)Syntax:
    Pure virtual functions are declared using the virtual keyword followed by = 0 in the function declaration, e.g., virtual void myFunction() = 0;.
7)Incomplete Implementation:
    An abstract base class can contain common functionality or variables, but pure virtual functions are intentionally left unimplemented for derived classes to define.
8)Pointers and References:
    You can use pointers and references to the abstract base class to work with objects of derived classes without knowledge of their exact types.
9)Interface Design:
    Pure virtual functions are used to define a contract or interface that derived classes must adhere to, allowing for well-defined behaviors.
10)Multiple Inheritance:
    An abstract base class can have multiple pure virtual functions, and a derived class can inherit from multiple abstract base classes, providing
    implementations for all required pure virtual functions.
*/