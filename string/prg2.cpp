#include<iostream>
using namespace std;
int main() {
  
    char str[50],str1[50];
    int i,j,k;
    cout<<"enter string 1:";
    cin>>str;
   
    cout<<"enter string 2:";
    cin>>str1;
   

    for (i=0; str[i]!='\0'; i++);
    k=i;
    for (j=0; str[j]!='\0'; j++);

    for (i=0; i<=j; i++)
    {
     str[k++] = str1[i];
    }
    str[k]='\0';
    cout<<" "<<str;

}

/*output :-
enter string 1:skill
enter string 2:qode
 skillqode
*/