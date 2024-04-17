/*

Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.

A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor. 
Destructor has the same name as their class name preceded by a tilde (~) symbol.
It is not possible to define more than one destructor. 
The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded.
Destructor neither requires any argument nor returns any value.
It is automatically called when an object goes out of scope. 
Destructor release memory space occupied by the objects created by the constructor.
In destructor, objects are destroyed in the reverse of an object creation.
*/


#include<iostream>
using namespace std;
class test{
    int rollno;
    public:
    test()
    {
        cout<<"default constructor is called----"<<endl;
        cout<<"enter roll no:";
        cin>>rollno;
    }
    ~ test()
    {
        cout<<"destructor is called---"<<endl;
    }
    void getdata()
    {
        cout<<"rollno is:"<<rollno<<endl;
    }
};

int main()
{
    test a;
    a.getdata();
}