/*

In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading.
*/


#include<iostream>
using namespace std;
class test {
    public:
    test()
    {
        cout<<"default constructor is called"<<endl;
    }
    test (int a)
    {
        cout<<"square of number is:"<<a*a<<endl;
    }
    test (int a ,int b)
    {
        cout<<"addition of a and b is:"<<a+b<<endl;
    }
    test (double a, double b)
    {
        cout<<"product of a and b is:"<<a*b<<endl;
    }
     test (char b)
    {
        cout<<"character is:"<<b<<endl;
    }
};

int main()
{
     test a,b('s'), c(5.2 ,3.3) ,d(2,5),e(10);
}