#include<iostream>
using namespace std;
class test{
    int rollno;
    public:
    test()
    {
        cout<<"default constructor is called----"<<endl;
        cout<<"enter roll no:";
        cin>>rollno;
    }
    ~ test()
    {
        cout<<"destructor is called---"<<endl;
    }
    void getdata()
    {
        cout<<"rollno is:"<<rollno<<endl;
    }
};

int main()
{
    test a;
    a.getdata();
}