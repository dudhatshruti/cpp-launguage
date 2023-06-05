/* with argument  no return*/

#include<iostream>
using namespace std;
int square( int n, int m){
int a;
a= n*m;
cout<<"answer is:"<<a;
}
int main()
{
    int x;
    cout<<"enter number:";
    cin>>x;
    square(x, 10);
}


/*output :-
enter number:10
answer is:100
*/