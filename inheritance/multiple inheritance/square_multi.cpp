#include<iostream>
using namespace std;
class base1{
    protected:
    int n;
    public:
    void setn(){
        cout<<"1 to n value :"<<endl;
        
    }
};
class base2{
    protected:
    int a,n;
    public:
    void setf(){
        cout<<"enter n:"<<endl;
        cin>>n;

        for (a=1; a<=n; a++)
        {
           cout<<" "<<a*a<<endl;
        }
    }
};

class derived : public base1, public base2{
    public:
    void getdata(){
        cout<<" "<<endl;;
    }
};

int main(){
    derived d;
    d.setn();
    d.setf();
    d.getdata();
}

/*output :-
enter n: 5
 1
 4
 9
 16
 25
*/