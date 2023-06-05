#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a ,b, c:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
      cout<<"a is greater:"<<a;
    }
    else if(b>c)
    {
      cout<<"b is greater:"<<b;
    }
    else if(c>a)
    {
       cout<<"c is greater:"<<c;
    }
}

/*output :-
enter a ,b, c:78
56
9
a is greater:78
*/