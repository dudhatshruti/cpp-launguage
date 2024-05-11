/*
Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading.


 multiple functions having same name but parameters of the functions should be different is known as Function Overloading.

If we have to perform only one operation and having same name of the functions increases the readability of the program.

Suppose you have to perform addition of the given numbers but there can be any number of arguments, if you write the function such as a(int,int) for two parameters, and b(int,int,int) for three parameters then it may be difficult for you to understand the behavior of the function because its name differs.
*/


#include<iostream>
using namespace std;
class calc{
    public:
    int add(int a, int b){
        return a*b;
    }
    int add(int a){
        return a*a;
    }
    int add(int a ,int b, int c){
        return a*b*c;
    }
    double add(double a ,double b){
        return a+b;
    }
};

int main()
{
    calc a;
    cout<<"addition of a and b is:"<<a.add(6.3,6.7)<<endl;
    cout<<"square is:"<<a.add(6)<<endl;
    cout<<"product of a,b and c is:"<<a.add(6,6,7)<<endl;
    cout<<"product of a and b is:"<<a.add(6,6)<<endl;
}

/*output :-
addition of a and b is:13
square is:36
product of a,b and c is:252
product of a and b is:36
*/