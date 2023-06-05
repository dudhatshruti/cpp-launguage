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