//To demonstrate the Function Overloading & Operator Overloading.

#include<iostream>
#include<string>
using namespace std;

int sum(int a,int b);   //Addition of two numbers
string sum(char x,char y);  //concatenate the two charcters
int main()
{
  int choice,a,b;
  char x,y;
  cout<<"1)Addition of two numbers"<<endl<<"2)Addition of the two characters"<<endl;
  cout<<"Enter the choice: ";
  cin>>choice;

  if(choice==1)
  {
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<sum(a,b);
  }
  else if(choice==2)
  {
    cout<<"Enter the first character: ";
    cin>>x;
    cout<<"Enter the second character: ";
    cin>>y;
    cout<<"Concatenate the first character and the second character: "<<sum(x,y);
  }
  else{
    cout<<"Choice does not exist!!!"<<endl;
  }
  return 0;
}

int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
string sum(char a,char b)
{
    string sum;
    sum+=a;
    sum+=b;
    return sum;
}