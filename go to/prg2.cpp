#include<iostream>
using namespace std;
int main()
{
    int i,j;
    i=0;
    row:
    if (i<=5)
    {
       cout<<"\n"<<i++;
    j=1;
    col:
    if (j<=i)
    {
        cout<<" *";
        j++;
        goto col;
    }
    goto row;
    }
    
    
}