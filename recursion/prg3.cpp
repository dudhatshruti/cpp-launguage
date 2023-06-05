#include<iostream>
using namespace std;
int fun( int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else{
        return fun(n-1)+fun(n-2);
    }        
}
int main()
{
    int i;
    for (i=1; i<=10; i++)
    {
        cout<<" "<<fun( i );
    }
}

/*output :-
1 1 2 3 5 8 13 21 34 55
*/