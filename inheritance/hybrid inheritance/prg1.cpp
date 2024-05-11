/*
Combining various types of inheritance like multiple, simple, and hierarchical inheritance is known as hybrid inheritance.

In simple inheritance, one class is derived from a single class which is its base. In multiple inheritances, a class is derived from two classes, where one of the parents is also a derived class. In hierarchical inheritance, more than one derived class is created from a single base class.
*/

#include<iostream>
using namespace std;
class base{
    public:
    int m,n;
    base(){
        cout<<"enter m and n:"<<endl;
        cin>>m>>n;
    }
};

class abc : public base{
    public:
    abc(){
        cout<<"product of m and n is:"<<m*n<<endl;
    }
};

class xyz : public base{
    public:
    xyz(){
        cout<<"product of m and n is:"<<m+n<<endl;
    }
};

class pqr : public xyz{
    public:
    pqr(){
        cout<<"product of m and n is:"<<m+n<<endl;
    }
};

int main(){
    pqr x;
    abc a;
}