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