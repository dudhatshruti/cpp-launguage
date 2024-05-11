/*
Function overriding in C++ is a concept by which you can define a function of the same name and the same function signature (parameters and their data types) in both the base class and derived class with a different function definition. It redefines a function of the base class inside the derived class, which overrides the base class function. Function overriding is an implementation of the run-time polymorphism. So, it overrides the function at the run-time of the program.  


programme:-

#include <iostream> 
using namespace std;  

class A {  
   public: 
   void display() {   
      cout<<"Base class"; 
   } 
}; 

class B:public A {  
   public: 
   void display() {   
      cout<<"Derived Class"; 
   } 
}; 

int main() {  
   B obj; 
   obj.display(); 
   return 0;  
}
It will produce the following output

Derived Class 

*/





#include<iostream>
using namespace std;
class base{
    public:
   virtual void getter(){
        cout<<"base class function called:"<<endl;
    }
};

class derived : public base{
    public:
    void getter(){
        cout<<"derived class function called...."<<endl;
    }
};

int main(){
    base *p,b;
    derived d;

    p = &b;
     p->getter();

    p = &d;
    p->getter();
}