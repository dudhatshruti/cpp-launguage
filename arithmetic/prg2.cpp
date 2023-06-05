#include<iostream>
using namespace std;
int main()
{
    int a,b,square,cube;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    
    square = a*a;
    cube = a*a*a;
    cout<<"square of a:"<<square;
    cout<<"\ncube of a:"<<cube;

    square = b*b;
    cube = b*b*b;
    cout<<"\n\nsquare of b:"<<square;
    cout<<"\ncube of b:"<<cube;
}

/*output :-
    enter a:5
    enter b:6
    square of a:25
    cube of a:125

    square of b:36
    cube of b:216
*/