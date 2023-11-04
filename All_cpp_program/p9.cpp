//Type Casting, Reference Variable and the I/O manipulation.

#include<iostream>
using namespace std;
#include<iomanip>

float r=297.4;

int main()
{
    float a=23.5;
    double b=34.3;
    cout<<"the size of 54.3 is: "<<sizeof(54.3)<<endl;      //It is bydefault double, i.e 8-bytes
    cout<<"the size of 54.3f is: "<<sizeof(54.3f)<<endl;     //postfix make the double to float. i.e 4-bytes
    cout<<"the size of 54.3l is: "<<sizeof(54.3l)<<endl<<endl;     //postfix make the double to long double i.e 12-bytes
    cout<<"the size of 54.3F is: "<<sizeof(54.3F)<<endl;     //postfix make the double to float i.e 4-bytes
    cout<<"the size of 54.3L is: "<<sizeof(54.3L)<<endl<<endl;  //postfix make the double to long double i.e 12-bytes
    cout<<"The value of the a is: "<<a<<endl; //local
    cout<<"The value of the b is: "<<b<<endl;  
    cout<<"The value of the r is: "<<r<<endl;  //global

    // **************Reference Variable********************//
    // int a=98;
    // int &b=a;
    // cout<<endl<<"b is reference to the a"<<endl;
    // cout<<"the value of a is: "<<a<<endl;
    // cout<<"So b is also: "<<b<<endl;

    // **************TypeCasting**************//
    float g=245.32;
    cout<<endl<<"    Typecasting from float to the integer: "<<setw(6)<<(int)g<<endl;      //int(g) is also valid
    cout<<"     Typecasting from float to the double: "<<setw(6)<<(double)g<<endl;     //double(g) is also valid
    cout<<"Typecasting from float to the long double: "<<setw(6)<<(long double)g<<endl;
    cout<<"Typecasting from float to the long double: "<<setw(6)<<(long long int)g<<endl;

    return 0;
}
