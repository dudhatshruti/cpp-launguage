#include<iostream>
using namespace std;
int main()
{
    int i=1;
    label:
    cout<<"\t"<<i++;
    if (i<=10)
        goto label;
    
}

/*output :-
 1       2       3       4       5       6       7       8       9       10
*/