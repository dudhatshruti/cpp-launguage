/* no argument   with return*/

#include<iostream>
using namespace std;
int add(){
    int a,b,c;
    cout<<"enter a and b:";
    cin>>a>>b;

    c=a+b;
    return c;
}
int main()
{
    int x;
    x=add();
   cout<<"addition a and b:"<<x;
}

/*output :-
enter a and b:10
20
addition a and b:30
*/