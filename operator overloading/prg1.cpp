/*
This section will discuss the Binary Operator Overloading in the C++ programming language. An operator which contains two operands to perform a mathematical operation is called the Binary Operator Overloading. It is a polymorphic compile technique where a single operator can perform various functionalities by taking two operands from the programmer or user. There are multiple binary operators like +, -, *, /, etc., that can directly manipulate or overload the object of a class
*/


#include<iostream>
using namespace std;
class box{
    int l, w, h;
    public:
    void setdata (int a, int b, int c){
        l = a ,w = b , h = c;
    }
    int getdata(){
        return l * w * h;
    }
    box operator + (box n){
        box t;
        t.l = l + n.l;        
        t.w = w + n.w;
        t.h = l + n.h;
        return t;
    }
};

int main(){
    box a,b,c;
    a.setdata(2 ,2, 2);
    cout<<"volume of box a is:"<<a.getdata()<<endl;
    
    b.setdata(3 ,3, 3);
    cout<<"volume of box b is:"<<b.getdata()<<endl;

    c= a+b;
    cout<<"volume of box b is:"<<c.getdata()<<endl;
}