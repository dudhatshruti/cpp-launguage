#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for (i=2; i<=10; i+=2)
    {
       for (j=2; j<=i; j+=2)
       {
         cout<<" \t"<<i;
       }
       cout<<"\n";
       
    }
    
}

/*output :-
        2
        4       4
        6       6       6
        8       8       8       8
        10      10      10      10      10
*/