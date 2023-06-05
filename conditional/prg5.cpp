#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a:";
    cin>>a;

    if (a % 15==0)
    {
        cout<<"value is divisable :"<<a;
    }
    else{
        cout<<"value is not divisable :"<<a;

    }
}

/*output :-
enter a:32
value is not divisable :32

enter a:45
value is divisable :45
*/