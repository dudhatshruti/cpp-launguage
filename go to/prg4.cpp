#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    title:
    if (i<=5)
    {
        j=1;
        hi:
        if (j<=i)
        {
          cout<<"* ";
          j++;
          goto hi;
        }
        i++;
        cout<<"\n";
        goto title;
    }
    
}

/*output :-
* 
* *
* * *
* * * *
* * * * *
*/