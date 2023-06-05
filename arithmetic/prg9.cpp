#include<iostream>
using namespace std;
int main()
{
    float p,n,r,a;
    cout<<"enter p:";
    cin>>p;

    cout<<"enter n:";
    cin>>n;

    cout<<"enter r:";
    cin>>r;

    a = p*(1+(r/100)/n)-p;
    cout<<"a is:"<<a;
}

/*output :-
enter p:78
enter n:59
enter r:48
a is:0.634576
*/