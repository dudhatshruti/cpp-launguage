#include<iostream>
using namespace std;
int main()
{
    char a[50],b[50];
    int i,j,k;
    cout<<"enter value:";
    cin>>a;

     for(i=0; a[i]!='\0';i++){
    
    }
    k=i;
    for (j = 0;j < k; j++)
    {
        b[j]=a[--i];
    }
    b[j]='\0';
    cout<<" "<<b;
}



/*output :-
enter value:skill
 lliks
*/