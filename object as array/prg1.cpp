/*
Array of objects in C++
In C++, an array of objects is a collection of objects of the same class type that are stored in contiguous memory locations. Since each item in the array is an instance of the class, each one's member variables can have a unique value. This makes it possible to manage and handle numerous objects by storing them in a single data structure and giving them similar properties and behaviours.
*/


#include<iostream>
using namespace std;
class test{
    int r,m,s,e,t;
    char name[50];
    public:
    void setdata();
    void getdata(){
        cout<<"roll no:"<<r<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"maths marks:"<<m<<endl;
        cout<<"sci marks:"<<s<<endl;
        cout<<"eng marks:"<<e<<endl;
        cout<<"total marks:"<<(m+s+e)<<endl;
    }
};
void test ::setdata(){
    cout<<"enter roll no:";
    cin>>r;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter maths marks:";
    cin>>m;
    cout<<"enter sci marks:";
    cin>>s;
    cout<<"enter eng marks:";
    cin>>e;
}
int main(){
    test a[5];
    int i;
    for (i=0; i<2; i++)
    {
        cout<<"-----------details of students:"<<i+1<<"----------------"<<endl;
        a[i].setdata();
        cout<<endl;
    }
     for (i=0; i<2; i++)
    {
        cout<<"-----------details of students:"<<i+1<<"----------------"<<endl;
        a[i].getdata();
        cout<<endl;
    }
}