#include<iostream>
using namespace std;
class base{
    public:
    base(){
       cout<<"factorial number"<<endl;
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
    int n,a,ans=1;
    xyz(){
       for (a=1; a<=n; a++)
        {
            ans=ans*a;
        }
          cout<<ans;
    }
};

int main(){
    // base x;
    abc y;
    xyz z;
}