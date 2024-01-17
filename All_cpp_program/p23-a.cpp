//Demonstrate the Operater Overloading( overload the increment '++' operator)
#include<iostream>
using namespace std;

class counter
{
    private:
        int count;
    public:
        counter():count(0){}
        void setdata(int value)
        {
            count=value;
        }
        counter operator++(int)
        {
            count++;
            return *this;
        }
        void display()
        {
            cout<<"value is: "<<count<<endl;
        }
};
int main()
{
    counter c1;
    c1.setdata(7);
    cout<<"Before Increment ";
    c1.display();
    
    c1++;
    cout<<"Increment ";
    c1.display();
    return 0;
}