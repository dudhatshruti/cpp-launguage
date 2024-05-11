/*
As the name defines, it is the hierarchy of classes. There is a single base class and multiple derived classes. Furthermore, the derived classes are also inherited by some other classes. Thus a tree-like structure is formed of hierarchy.

*/


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