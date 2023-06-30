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
            cout<<"product of m and n:"<<m*n<<endl;
        }
};
class xyz : public base{
        public:
        xyz(){
            cout<<"product of m and n:"<<m+n<<endl;
        }
};

int main(){
    xyz x;
    abc a;
}