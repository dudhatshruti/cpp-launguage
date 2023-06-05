
#include<iostream>
using namespace std;
int main()
{
    char a[50];
    int i,j, length;
    cout<<"enter string 1:";
    cin>>a;

    for(i=0; a[i] !='\0'; i++);
        
    length = i-1;
    
    for(j=0; j<i/2; j++)
{
        cout<<"a["<<j<<"]:" "a["<<length-j<<"]";
        // printf("%c%c", a[j] ,a[length-j]);
}

        if(i%2 != 0)
        
            cout<<" "<<a[i/2];
            // printf("%c", a[i/20]);
           
   
}
