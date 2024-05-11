/*
In C++, the “this” pointer holds the memory address of the class instance that is being called by a member function, allowing those functions to correctly access the object’s data members.
*/

#include<iostream>
using namespace std;
int main()
{
    int a=20, *p,**q;
    p= &a;
    q=&p;
    cout<<"value of p is:"<<a;
    cout<<"\n address of a:"<<&a;
    cout<<"\n address of a using p:"<<p;
    cout<<"\n address of p using q:"<<q;
    cout<<"\n value of a using q:"<<**q;

}