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