#include<iostream>
using namespace std;
int main()
{
    char value;
    cout<<"enter value:";
    cin>>value;

    if (value=='a' || value=='e' || value=='i' || value=='o' || value=='u' || value=='A' || value=='E' || value=='I' || value=='O' || value=='U')
    {
       cout <<"value is vowel:"<<value;
    }
    else
    {
        cout<<"value is constant:"<<value;
    }
}

/*OUTPUT :-
enter value:W
value is constant:W     

enter value:a
value is vowel:a   
*/
