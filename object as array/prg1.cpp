#include<iostream>
using namespace std;
class test{
    int r,m,s,e,t;
    char name[50];
    public:
    void setdata();
    void getdata(){
        cout<<"roll no:"<<r<<endl;
        cout<<"name:"<<r<<endl;
        cout<<"maths marks:"<<r<<endl;
        cout<<"sci marks:"<<r<<endl;
        cout<<"eng marks:"<<r<<endl;
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