//Memory allocation using the array in the class
#include<iostream>
using namespace std;

class shop
{
      int count;
      int itemId[50];
      int itemPrice[50];
      int n;
    public:
     void setPrice(void);
     void display(void);
};
int main()
{
    shop s1;
    s1.setPrice();
    s1.display();
    return 0;
    
}

void shop::setPrice(void)
{
    cout<<"Enter the no. of product: ";
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        cout<<"Enter the Product-"<<i+1<<" Id : ";
        cin>>itemId[i];
        cout<<"Enter the Product "<<i+1<<" Price: ";
        cin>>itemPrice[i];
    }
}

void shop:: display(void)
{
    for (int i = 0; i < count; i++)
    {
        cout<<endl<<"Product Id-"<<itemId[i]<<" Price is: "<<itemPrice[i];
    }
}
