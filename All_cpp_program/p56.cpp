//Demonstrate the Initialization list in Constructor
#include<iostream>
using namespace std;

class test
{
        int b;
        int a;
    public:
        // test(int i,int j) : a(i),b(j)       //Output:3 and 5
        // test(int i,int j) : a(i),b(i+j)     //Output:3 and 8
        // test(int i,int j) : a(i),b(2*j)     //Output:3 and 10
        // test(int i,int j) : a(i),b(a+j)     //Output:3 and 8
        // test(int i,int j) : b(j),a(i)       //Output:3 and 5
        // test(int i,int j) : b(j),a(b+i)     //Output:grbg_value and 5
        // test(int i,int j) : b(j),a(b+i)     //Swap the declaration of a and b to b and a then, Output: 8 and 5
        // test(int i,int j) : a(i)
        // {
        //     b=j;                             //Output:3 and 5
        test(int i,int j)
        {
            a=i;
            b=j;
            cout<<endl<<"Constructor Executed !!"<<endl;
            cout<<"\t"<<"Value of a is: "<<a<<endl;
            cout<<"\t"<<"Value of b is: "<<b<<endl;
        }
};
int main()
{
    test obj(3,5);
    return 0;
}