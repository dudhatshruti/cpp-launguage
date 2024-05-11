/*
C++ Friend function
If a function is defined as a friend function in C++, then the protected and private data of a class can be accessed using the function.

By using the keyword friend compiler knows the given function is a friend function.

For accessing the data, the declaration of a friend function should be done inside the body of a class starting with the keyword friend.

In the above declaration, the friend function is preceded by the keyword friend. The function can be defined anywhere in the program like a normal C++ function. The function definition does not use either the keyword friend or scope resolution operator.
*/

/*
Passing an Object as argument
To pass an object as an argument we write the object name as the argument while calling the function the same way we do it for other variables.
*/

#include<iostream>
using namespace std;
class box{
    int l,w;
    public:
    void setdata(int a, int b){
        l=a , w=b;
    }
    int getdata(){
        return l*w;
    }
    friend box add(box, box);
};

box add(box x, box y){
    box z;
    z.l = x.l + y.l;
    z.w = x.w + y.w;
     return z;
}

int main(){
    box a,b,c;
    a.setdata(4,5);
    cout<<"area of box A:"<<a.getdata()<<endl;

    b.setdata(3,4);
    cout<<"area of box B:"<<b.getdata()<<endl;

    c= add(a,b);
    cout<<"area of box c is:"<<c.getdata()<<endl;
}

/* output :-
area of box A:20
area of box B:12
area of box c is:63
*/

