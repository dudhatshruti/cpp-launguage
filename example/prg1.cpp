#include<iostream>
using namespace std;
class test{
    int n;      //bydefault private
    public:
    void setdata()
    {
        cout<<"enter n:";
        cin>>n;
    }
    void getdata(){
        cout<<"value of n:"<<n;
    }
};
int main(){
    test a;        //object
    a.setdata();
    a.getdata();
}
