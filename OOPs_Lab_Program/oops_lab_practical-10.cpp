#include<iostream>
#include<stdlib.h>
using namespace std; 

class student 
{ 
    string name; 
    int age; 
public: 
    student()
    { 
        cout<< "Constructor is called\n" ;  
    } 
    student(string name, int age) 
    { 
        this->name = name; 
        this->age = age; 
    } 
    void display() 
    { 
        cout<< "Name:" << name <<endl; 
        cout<< "Age:" << age <<endl; 
    } 
    void * operator new(size_t size) 
    { 
        cout<< "Overloading new operator with size: " << size <<endl; 
        void * p = ::new student();  
        //void * p = malloc(size); will also work fine 
      
        return p; 
    } 
  
    void operator delete(void * p) 
    { 
        cout<< "Overloading delete operator " <<endl; 
        free(p); 
    } 
}; 
  
int main() 
{ 
    student * p = new student("Harsimran", 19); 
  
    p->display(); 
    delete p; 
} 
