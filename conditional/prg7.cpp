#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter a:";
    cin>>a;

    cout<<"enter b:";
    cin>>b;

    c=a*b;
    d=a+b;
    if (c % d==0)
    {
        cout<<"yes:"<<c;
    }
    else{
        cout<<"no:"<<d;

    }
}

/*output:-
enter a:50
enter b:50
yes:2500
*/
