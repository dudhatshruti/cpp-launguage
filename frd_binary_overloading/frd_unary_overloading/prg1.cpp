#include<iostream>
using namespace std;
class box{
    int l,w;
    public:
    void setdata(int a, int b){
        l=a;
        w=b;
    }
    int getdata(){
        return l*w;
    }
    friend box operator++(box);
};

box operator++(box x){
    box t;
    t.l = ++x.l;
    t.w = ++x.w;
    return t;
}

int main(){
    box a,c;
    a.setdata(2,2);
    cout<<"area of A:"<<a.getdata()<<endl;

    c = ++a;
    cout<<"area of c:"<<c.getdata()<<endl; 
}