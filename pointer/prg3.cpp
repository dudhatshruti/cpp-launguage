//array with pointer

#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,20,30,40,50};
    int i,*p;
    // p = &a;

    for (i=0; i<5; i++)
    {
        // printf("%d\t %u \n",a[i],&a[i]);
       cout<<"\t \n"<<*(p+i),(p+i);

    }
    
}