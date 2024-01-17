//Demonstrate the Operator Overloading by Adding two Complex Numbers by adding Two objects.
#include<iostream>
using namespace std;

class complex
{
      int a;
      int b;
    public: 
        complex(): a(0),b(0) {}
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        complex operator + (complex &o2){
            complex o3;
            o3.a = a + o2.a;
            o3.b = b + o2.b;
            return o3;
        }
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3=c1 + c2;
    c3.printNumber();
    return 0;
}