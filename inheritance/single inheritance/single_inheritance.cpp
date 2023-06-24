#include<iostream>
using namespace std;
class base{
    protected:
    int a,b;
    public:
    void setdata(){
        cout<<"enter a:"<<endl;
        cin>>a;
        cout<<"enter b:"<<endl;
        cin>>b;
    }
};

class derived : public base{
    public:
    void getdata(){
        cout<<"value of a :"<<a<<endl;
        cout<<"value of b :"<<b<<endl;
    }
};

int main(){
    derived d;
    d.setdata();
    d.getdata();
}

/*output :-
enter a:
5
enter b:
4
value of a :5
value of b :4
*/