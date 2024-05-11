/*
C++ Inheritance
In C++, inheritance is a process in which one object acquires all the properties and behaviors of its parent object automatically. In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.

In C++, the class which inherits the members of another class is called derived class and the class whose members are inherited is called base class. The derived class is the specialized class for the base class.


*/

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