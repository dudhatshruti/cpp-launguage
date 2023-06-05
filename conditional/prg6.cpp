#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a:";
    cin>>a;

    if (a % 21==0)
    {
        cout<<"value is divisable:"<<a;
    }
    else{
        cout<<"value is not divisable:"<<a;
    }
}

/*output :-
enter a:44
value is not divisable:44
*/