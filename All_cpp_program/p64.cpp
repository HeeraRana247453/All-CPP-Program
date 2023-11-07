//Example of the Virtual Function or Runtime Polymorphism.

#include<iostream>
using namespace std;
class base
{
    protected:
        string title; 
        float rating;
    public:
        base(string t,float r)
        {
            title=t;
            rating=r;
        }
        virtual void display(){}
};
class derived1:public base
{
        float video_len;
    public:
        derived1(string t,float r,float vlen):base(t,r)
        {
            video_len=vlen;
        }
        void display()
        {
            cout<<"Title: "<<title<<endl
                <<"Rating: "<<rating<<endl
                <<"Video Length: "<<video_len<<endl<<endl;
        }
};
class derived2:public base
{
        int n_words;
    public:
        derived2(string t,float r,int nwrd):base(t,r)
        {
            n_words=nwrd;
        }
        void display()
        {
         cout<<"Title: "<<title<<endl
             <<"Rating: "<<rating<<endl
             <<"No. of Words: "<<n_words<<endl;
        }
};

int main()
{
    string title="Runtime Polymorphism";
    float rating=3.45;
    float v_len=34.5;
    int words=523;
    
    derived1 p_video(title,rating,v_len); //invoke parametrized constructor
    derived2 p_text(title,rating,words);  //invoke parametrized constructor
    
    base *base_ptr[2];    //Base class pointer array
    base_ptr[0]=&p_video; //points to derived1 object
    base_ptr[1]=&p_text;  //points to derived2 object

    base_ptr[0]->display();
    base_ptr[1]->display();
    return 0;
}