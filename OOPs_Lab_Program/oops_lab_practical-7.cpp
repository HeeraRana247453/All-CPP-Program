# include<iostream>
using namespace std;

class A 
{
int data;

public:
A(int a):data(a)
  {
cout<<"A::Construcor...\n";
cout<<"value of data :="<<data<<endl;
  };
};


int main()
{
  A a1 = 37;

return (0);
}
