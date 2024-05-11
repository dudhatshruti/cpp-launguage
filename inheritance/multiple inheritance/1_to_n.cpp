/*
Multiple Inheritance is the concept of the Inheritance in C++ that allows a child class to inherit properties or behaviour from multiple base classes. Therefore, we can say it is the process that enables a derived class to acquire member functions, properties, characteristics from more than one base class.
*/

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
           cout<<" "<<a<<endl;
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
enter n:
6
 1
 2
 3
 4
 5
 6
*/