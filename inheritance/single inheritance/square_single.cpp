#include<iostream>
using namespace std;
class base{
    protected:
    int n,a,square;
    public:
    void setdata(){
        cout<<"enter n:"<<endl;
        cin>>n;

        for (a=1; a<=n; a++)
        {
            cout<<a*a<<endl;
        }      
    }
};

class derived : public base{
    public:
    void getdata(){
        cout<<""<<endl;
    }
};

int main(){
    derived d;
    d.setdata();
    d.getdata();
}

/*output :-
enter n:4
1
4
9
16
*/