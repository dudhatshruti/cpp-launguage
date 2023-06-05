//swapping value using pointer

#include<iostream>
using namespace std;
int main()
{
    int a,b,*p,*q,c;
    int i;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<" a b\n"<<a <<b;
    p = &a;
    q = &b;

    c=*p;
    *p=*q;
    *q=c;
    
    cout<<"\n a b\n"<<a <<b;
}

/*output :-
 a b
1020
 a b
2010
*/