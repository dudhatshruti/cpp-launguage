#include<iostream>
using namespace std;
class box{
    int l,w;
    public:
    void setdata(int a, int b){
        l=a , w=b;
    }
    int getdata(){
        return l*w;
    }
    friend box add(box, box);
};

box add(box x, box y){
    box z;
    z.l = x.l + y.l;
    z.w = x.w + y.w;
     return z;
}

int main(){
    box a,b,c;
    a.setdata(4,5);
    cout<<"area of box A:"<<a.getdata()<<endl;

    b.setdata(3,4);
    cout<<"area of box B:"<<b.getdata()<<endl;

    c= add(a,b);
    cout<<"area of box c is:"<<c.getdata()<<endl;
}

/* output :-
area of box A:20
area of box B:12
area of box c is:63
*/

