#include<iostream>
using namespace std;
int newfun(int n)
{
    cout<<"unwinding phase \n:"<<n;
    if (n<3)
    {
        newfun(++n);
    }
    cout<<"winding phase \n:"<<n;

}
int main()
{
    newfun(1);
}
