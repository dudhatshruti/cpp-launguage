#include<iostream>
using namespace std;
class base{
    public:
   virtual void getter()=0;
};

class derived : public base{
    public:
    void getter(){
        cout<<"derived class function called...."<<endl;
    }
};
class derived1 : public derived{
    public:
    void getter(){
        cout<<"derived1 class function called...."<<endl;
    }
};

int main(){
    base *p;
    derived1 d;
    derived a;

    p = &a;
    p->getter();

    p = &d;
    p->getter();

    
}