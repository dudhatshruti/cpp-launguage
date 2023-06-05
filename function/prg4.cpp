/* with argument   with return*/
#include<iostream>
using namespace std;
int square(int n, int m){
    return n*m;
}
int main()
{
    int x,a;
    cout<<"enter number:";
    cin>>x;
    a=square(x,10);
    cout<<"product is:"<<a;
   
}
/*output :-
enter number:10
product is:100
*/