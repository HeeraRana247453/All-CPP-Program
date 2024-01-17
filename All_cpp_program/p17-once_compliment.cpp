//Subtraction using once Compliment.

#include<iostream>
#include<bitset>
using namespace std;

class number
{
    string n,m,add,result;
    bitset<5> sum;
    public:
        void read(void);
        void chk_bin1(void);
        void chk_bin2(void);
        void complement(void);
        void addBinaryNumbers();
        void sum_complement();
        void display(void);
        void display_result();
};
int main(void)
{
    number bin;
    bin.read();
    bin.chk_bin1();
    bin.chk_bin2();
    bin.addBinaryNumbers();
    bin.display_result();
}
void number:: read(void)
{
    cout<<endl<<"Enter the first Binary number: ";
    cin>>m;
    cout<<"Enter the second Binary number(-ve number): ";
    cin>>n;
}
void number::chk_bin1(void)
{
    int i=0;
    bool flag=true;
    while(i<m.length())
    {
        if(m.at(i)!='0' && m.at(i)!='1')
        {
            flag=false;
            break;
        }
        i++;
    }
    if(flag==true)
    {
     cout<<endl<<"YES: First Number is a Binary Number."<<endl;
    }
    else{
         cout<<endl<<"NO: First Number is not binary Number"<<endl;
    }
}
void number::chk_bin2(void)
{
    int i=0;
    bool flag=true;
    while(i<n.length())
    {
        if(n.at(i)!='0' && n.at(i)!='1')
        {
            flag=false;
            break;
        }
        i++;
    }
    if(flag==true)
    {
     cout<<"YES: Second Number is a Binary Number."<<endl<<endl;
     complement();
    }
    else{
         cout<<"NO: Second Number is not binary Number"<<endl<<endl;
    }
}

void number::complement(void)
{
    int j=0;
    while(j<n.length())
    {
        if(n.at(j)=='1')
        {
            n.at(j)='0';
        }
        else{
            n.at(j)='1';
        }
        j++;
    }
    cout<<"Complement of second Number:";
    display();
}
void number::addBinaryNumbers() {
    bitset<5> num1(m);
    bitset<5> num2(n);
    string carry="0001";
    bitset<5> num3(carry);

    sum = num1.to_ulong() + num2.to_ulong();
    
    cout<<"This is sum: "<<sum.to_string()<<endl;

    if(sum.to_string().at(0)=='1')
    {
        sum=sum.to_ulong() + num3.to_ulong();
        cout<<"carry added"<<endl;
        result = "(" + sum.to_string().substr(5 - m.length());  // Extract only the necessary bits
    }
    else if(sum.to_string().at(0)=='0')
    {
        add=sum.to_string();
        sum_complement(); //passing sum as string to do the complement.
        result="-(" + add.substr(5 - m.length());
    }
}
void number::sum_complement()
{
    int j=0;
    while(j<add.length())
    {
        if(add.at(j)=='1')
        {
            add.at(j)='0';
        }
        else{
            add.at(j)='1';
        }
        j++;
    }
}
void number::display(void)
{
    cout<<" "<<n<<endl;
}
void number:: display_result()
{
    cout<<"this is result: "<<result<<")"<<endl;
}