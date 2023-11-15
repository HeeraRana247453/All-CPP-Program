//Exception Handling:- Stack Unwinding
//Stack Unwinding is the process of removing function entries from function call stack at run time.
// The local objects are destroyed in reverse order in which they were constructed. 
#include<iostream>
using namespace std;

void f1() throw(int)
{
    cout<<"f1() start"<<endl;
    throw 100;
    cout<<"f1() ending"<<endl;
}
void f2()
{
    cout<<"f2() start."<<endl;
    f1();
    cout<<"f2() ending"<<endl;
}
void f3()
{
    cout<<"f3() start"<<endl;
    try{
        f2();
    }
    catch(int y)
    {
        cout<<"Catched Exception"<<endl;
    }
    cout<<"f3() ending"<<endl;
}
int main()
{
    f3();
    // getchar();
    return 0;
}