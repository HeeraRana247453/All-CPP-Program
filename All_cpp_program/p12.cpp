//Print the fibonacci number using the looping statements.

#include<iostream>
using namespace std;

int main()
{
    int num,a,b,c;
    cout<<"Enter the position of the fibonacci number: ";
    cin>>num;

    if(num<3)
    {
      cout<<"fibonacci number is:"<<num-1;
    }
    else
    {
      a=0,b=1;
      for(int i=1;i<num-1;i++)
      {
        c=a+b;
        a=b;
        b=c;
      }
      cout<<" "<<c;
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int fibo(int n)
// {
//     int a=0,b=1,c;
//     if(n==1 || n==2)
//     {
//         return n-1;
//     }
//     else
//     {
//         for(int i=3;i<=n;i++)
//         {
//             c=a+b;
//             a=b;
//             b=c;
//         }
//     }
//     return c;
// }
// int main()
// {
//     int m;
//     cout<<"Enter position of the fibonacci number: ";
//     cin>>m;
//     try{
//         if(m<=0)
//         {
//             throw runtime_error("Enter a positive, Non-zero number !!");
//         }
//         cout<<"Fibonacci number is: "<<fibo(m);
//     }
//     catch(const exception &e)
//     {
//         cerr<<"Exception: "<<e.what()<<endl;
//     }
//     return 0;
// }