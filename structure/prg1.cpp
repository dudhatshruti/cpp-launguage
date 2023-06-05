#include<iostream>
using namespace std;
struct student
{
    int rollno,maths,sci,eng,total;
    float per;
    char sname[50];
};

int main()
{
    struct student a[5];
    int i;
    cout<<"enter data:------------------\n";
    for (i=0; i<2; i++)
    {
        cout<<"enter roll no:";
        cin>>a[i].rollno;
        cout<<"enter name:";
        cin>>a[i].sname;
        cout<<"enter maths marks:";
        cin>>a[i].maths;
        cout<<"enter sci marks:";
        cin>>a[i].sci;
        cout<<"enter eng marks:";
        cin>>a[i].eng;
    }
   cout<<"rollno \tname \tmaths \tsci \teng \ttotal \t per";
    for (i=0; i<2; i++)
    {
        a[i].total = a[i].maths + a[i].sci + a[i].eng;
        a[i].per = (float)a[i].total/3;
       cout<<"\n "<<a[i].rollno  <<a[i].sname  <<a[i].maths  <<a[i].sci  <<a[i].eng  <<a[i].total  <<a[i].per;
    } 
}