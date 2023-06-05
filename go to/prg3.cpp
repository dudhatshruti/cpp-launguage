#include<iostream>
using namespace std;
int main()
{
    int i=1,j,sp=15;
    title:
    if (i<=5)
    {
        j=1;
        hello:
        if (j<=sp)
        {
           cout<<" ";
           j++;
           goto hello;
        }
        j=1;
        hi:
        if (j<=i)
        {
            cout<<" * ";
            j++;
            goto hi;
        }
        sp--;
        i++;
        cout<<" \n";
        goto title;   
    }
}

/*output :-
                *  
               *  *
              *  *  *
             *  *  *  *  
            *  *  *  *  *
*/