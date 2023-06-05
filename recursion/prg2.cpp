#include<iostream>
using namespace std;
int newfun(int n)
{
    if(n==1)
        return 1;
    else
        return n * newfun(n-1);

}
int main()
{
    int x = newfun(5);
    cout<<"factorial of given number is:"<<x;
}

/*output :-
factorial of given number is:120
*/