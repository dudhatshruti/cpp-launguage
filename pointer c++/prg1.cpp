/*
Using this Pointer in C++ 
In C++, the “this” pointer is a special keyword that can be used inside a member function of a class to refer to the object that called the function. The “this” pointer is a pointer to the object itself, and is used to access the object’s data members and member functions. 
*/


#include<iostream>
using namespace std;
class bank{
    int bal;
    string name;
    public:
    void setdata(int bal , string name)
    {
        this -> bal  =  bal;
        this -> name = name;
    }
    void getdata()
    {
        cout<<"name :"<<name<<endl;
        cout<<"balance :"<<bal<<endl;
    }
};

int main()
{
    bank x;
    x.setdata(10000 , "skill");
    x.getdata();
}

/* output :-
name :skill
balance :10000
*/



