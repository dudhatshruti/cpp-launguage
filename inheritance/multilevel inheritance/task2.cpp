#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void seta(){
       cout<<"cube of a"<<endl;
    }
};

class abc : public base{
    protected:
    int n,a;
    public:
    void setb(){
        cout<<"enter n:"<<endl;
        cin>>n;
    }
};

class xyz : public abc{
    public:
    void getdata(){
        for (a=1; a<=n; a++)
        {
           cout<<" "<<endl;
        }
    }
};

int main(){
    xyz a;
    a.seta();
    a.setb();
    a.getdata();
}


/*output:-
cube of a
enter n: 4
 1
 8
 27
 64
*/
