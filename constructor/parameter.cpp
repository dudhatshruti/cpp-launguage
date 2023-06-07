#include<iostream>
using namespace std;
class  test{
    public:
    test(int x){
        cout<<"parameter constructor is called....\nvalue of x:"<<x<<endl;
    }
};
int main()
{
    test c(25);
}

/*output :-
parameter constructor is called....
value of x:25
*/