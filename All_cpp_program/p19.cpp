//Memory allocation using array in the class
#include <iostream>
using namespace std;
class shop
{  
   unsigned int itemId[50];
   unsigned int itemPrice[50];
   int count;
  public:
   void setData(void);
   void display(void);
}; 
  
int main() 
{
  shop ctgry1;
  ctgry1.setData();
  ctgry1.display();
  return 0;
  
}
void shop::setData(void)
{
  cout<<"How many product you want to enter: ";
  cin>>count;
  for(int i=0;i<count;i++)
  {
    cout<<"Enter the product I'd: ";
    cin>>itemId[i];
    cout<<"Enter the product price: ";
    cin>>itemPrice[i];
   } 
}
void shop::display(void)
{
   for(int i=0;i<count;i++)
  {
    cout<<endl<<"Price of product ID "<<itemId[i]<<" is: "<<itemPrice[i];
   }
}