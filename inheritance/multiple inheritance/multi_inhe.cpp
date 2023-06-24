#include<iostream>
using namespace std;
class base1{
    protected:
    int n;
    public:
    void setn(){
        cout<<"enter n:"<<endl;
        cin>>n;
    }
};
class base2{
    protected:
    int m;
    public:
    void setm(){
        cout<<"enter m:"<<endl;
        cin>>m;
    }
};

class derived : public base2 , public base1{
    public:
    void getdata(){
        cout<<"product of m and n :"<<m*n<<endl;
    }
};

int main(){
    derived d;
    d.setm();
    d.setn();
    d.getdata();
}

/*output :-
enter m: 5
enter n: 5
product of m and n :25
*/