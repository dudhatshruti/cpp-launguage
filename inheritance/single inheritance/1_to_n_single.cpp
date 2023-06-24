#include<iostream>
using namespace std;
class base{
    protected:
    int n,a;
    public:
    void setdata(){
        cout<<"enter n:";
        cin>>n;

        for (a=1; a<=n; a++)
        {
            cout<<" "<<a<<endl;
        }
        
    }
};

class derived : public base{
    public:
    void getdata(){
        cout<<"1 to n digit"<<endl;
    }
};

int main(){
    derived d;
    d.setdata();
    d.getdata();
}

/*output :-
enter n:12
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10
 11
 12
1 to n digit
*/