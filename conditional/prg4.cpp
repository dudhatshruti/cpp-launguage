#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a:";
    cin>>a;

    if (a % 5==0)
    {
        cout<<"value is divisable by 5:"<<a;
    }
    else{
        cout<<"value is not divisable by 5:"<<a;

    }
}


/*output :-
enter a:40
 value is divisable by 5:40

enter a:21
value is not divisable by 5:21
*/