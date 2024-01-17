//Demonstrate the Arrow operator,Pointers to Object,Points to Array of Object.

#include<iostream>
using namespace std;
class complex
{
        float real,imaginary;
    public:
        void setdata(int a,int b)
        {
            real=a;
            imaginary=b;
        }
        void getdata(void)
        {
            cout<<endl<<"Real part is: "<<real<<endl;
            cout<<"Imaginary part is: "<<imaginary<<endl;
        }
};
int main()
{
    //Case-1
        // complex c1;
        // c1.setdata(4,5);
        // c1.getdata();
    //Case-2
        // complex c1;
        // complex *ptr=&c1;
        // (*ptr).setdata(5,6);
        // ptr->getdata();
    //Case-3
        //Dynamic allocation of object to the pointer
        // complex *ptr;
        // ptr=new complex;
        // ptr->setdata(8,9);
        // (*ptr).getdata();
    //Case-4
        //Dynamic allocation of the pointer object array.
        // complex *ptr;
        // ptr=new complex[4];
        // (*ptr).setdata(1,2);
        // (*ptr).getdata();

        // (*ptr).setdata(3,4);
        // (*ptr).getdata();
        
        // (*ptr).setdata(5,6);
        // (*ptr).getdata();

        //In this code, ptr remains at the same memory location (the first element of the dynamically allocated array) throughout the program.
        // You allocate memory for an array of complex objects, but the pointer ptr always points to the first element.
    //Case-5
        // complex *ptr;
        // ptr=new complex[4];
        // (*ptr).setdata(1,2);
        // (*ptr).getdata();
        // ptr++;

        // (*ptr).setdata(3,4);
        // (*ptr).getdata();
        // ptr++;

        // ptr->.setdata(5,6);
        // ptr->.getdata();

        //In this code, the pointer ptr is incremented after each operation.This means that ptr points to a different element in the dynamically
        // allocated array for each operation. It starts with the first element, then moves to the second, and finally to the third.
    //Case-6
        int size;
        float p,q;
        cout<<endl<<endl<<"Enter the size of the object array of complex No.: ";
        cin>>size;
        
        complex *ptr=new complex[size];
        for (int i = 0; i < size; i++)
        {
            cout<<"Value of real part: ";cin>>p;
            cout<<"Value of imaginary part: ";cin>>q;
            ptr->setdata(p,q);
            ptr++;
        }
        ptr=ptr-size; //Because pointer has moved forward and to move back to the pointer at the starting object subtract the length.
        for (int i = 0; i < size; i++)
        {
            ptr->getdata();
            ptr++;
        }      

    return 0;
}