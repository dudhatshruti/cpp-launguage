/*
A copy constructor is a member function that initializes an object using another object of the same class. In simple terms, a constructor which creates an object by initializing it with an object of the same class, which has been created previously is known as a copy constructor.  
*/

#include<iostream>
using namespace std;
class test{
    int age;
    public:
    test (int n){
        age = n;
    }
    int getage(){
        return age;
    }
    test (test &n){
        age = n.age;
    }
};

int main(){
    test a(20);
    cout<<"age of a is:"<<a.getage()<<endl;

    test b(a);
    cout<<"age of b is:"<<a.getage()<<endl;
}