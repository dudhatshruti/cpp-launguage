#include<iostream>
using namespace std;
#define n 7
int disply(int a[])
{
    int i;
    for (i=0; i<n; i++)
       cout<<a[i];   
    
}
int main()
{
    int arr[n],i;
    for (i=0; i<n; i++)
    {
        cout<<"enter arr[" <<i<< "]: ";
        cin>>arr[ i ];
    }
    disply( arr );
    
}

/*output :-
enter arr[0]: 56
enter arr[1]: 36
enter arr[2]: 25
enter arr[3]: 41
enter arr[4]: 69
enter arr[5]: 85
enter arr[6]: 65
56362541698565
*/