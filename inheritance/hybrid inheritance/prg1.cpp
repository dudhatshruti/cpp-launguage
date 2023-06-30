#include<iostream>
using namespace std;
class base{
    public:
    int m,n;
    base(){
        cout<<"enter m and n:"<<endl;
        cin>>m>>n;
    }
};

class abc : public base{
    public:
    abc(){
        cout<<"product of m and n is:"<<m*n<<endl;
    }
};

class xyz : public base{
    public:
    xyz(){
        cout<<"product of m and n is:"<<m+n<<endl;
    }
};

class pqr : public xyz{
    public:
    pqr(){
        cout<<"product of m and n is:"<<m+n<<endl;
    }
};

int main(){
    pqr x;
    abc a;
}