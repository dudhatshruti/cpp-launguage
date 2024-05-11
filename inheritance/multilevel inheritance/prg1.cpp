// programming, not only can you derive a class from the base class but you can also derive a class from the derived class. This form of inheritance is known as multilevel inheritance.

#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void seta(int x){
        a=x;
    }
};

class abc : public base{
    protected:
    int b;
    public:
    void setb(int y){
        b=y;
    }
};

class xyz : public abc{
    public:
    void getdata(){
        cout<<"product of a and b multiply :"<<a*b<<endl;
    }
};

int main(){
    xyz a;
    a.seta(10);
    a.setb(5);
    a.getdata();
}

/*output :-
product of a and b multiply :50
*/