#include<iostream>
using namespace std;
int main()
{
    int i=5,j;
    row:
    if (i>=1)
    {
       cout<<"\n"<<i--;
       j=0;
       col:
       if (j<=i)
       {
          cout<<" *";
          j++;
          cout<<" ";
          goto col;
       }
       goto row;
       
    }
    
}