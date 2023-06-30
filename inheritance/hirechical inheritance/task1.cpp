#include<iostream>
using namespace std;
class base{
    public:
    int a;
    base(){
       cout<<"cube of a"<<endl;
    }
};

class abc : public base{
    public:
    int n;
    abc(){
        cout<<"enter n:"<<endl;
        cin>>n;
    }
};
class xyz : public base{
    public:
    int n,a;
    xyz(){
       for (a=1; a<=n; a++)
        {
        cout<<" "<<a*a*a<<endl;
        }
    }
};

int main(){
    // base x;
    abc y;
    xyz z;
}