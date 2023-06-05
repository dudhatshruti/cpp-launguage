#include<iostream>
using namespace std;
class test{
    int testcode,nocandidates,centerreqd;
    char description[50];
    int calcntr(){
        return nocandidates/100+1;
    }

    public:
    void schedule(){
        cout<<"enter testcode:";
        cin>>testcode;
        cout<<"enter description:";
        cin>>description;
        cout<<"enter nocandidates:";
        cin>>nocandidates;
        centerreqd = calcntr();
    }

    void disptest(){
        cout<<"testcode is:"<<testcode<<endl;
        cout<<"description is:"<<description<<endl;
        cout<<"nocandidates is:"<<nocandidates<<endl;
        cout<<"centerreqd is:"<<centerreqd<<endl;

    }
};

int main(){
    test a;
    a.schedule();
    a.disptest();
}

/* output :-
enter testcode:152
enter description:plo
enter nocandidates:5000

testcode is:152
description is:plo
nocandidates is:5000
centerreqd is:51
*/