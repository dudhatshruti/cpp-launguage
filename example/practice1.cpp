#include<iostream>
using namespace std;
class student{
    int admno;
    char sname[50];
    float eng,maths,sci,total;
    float ctotal(){
        return eng + sci + maths;
    }

    public:
    void takedata(){
        cout<<"enter admno:";
        cin>>admno;
        cout<<"enter name:";
        cin>>sname;
        cout<<"enter eng marks:";
        cin>>eng;
        cout<<"enter sci marks:";
        cin>>sci;
        cout<<"enter maths marks:";
        cin>>maths;
        total = ctotal();
    }

    void showdata(){
        cout<<"admno is:"<<admno<<endl;
        cout<<"sname is:"<<sname<<endl;
        cout<<"eng marks is:"<<eng<<endl;
        cout<<"sci marks is:"<<sci<<endl;
        cout<<"maths marks is:"<<maths<<endl;
        cout<<"total marks is:"<<total<<endl;
    }
};

int main(){
    student a;
    a.takedata();
    a.showdata();
}



/*output :-
admno is:12       
sname is:ghu      
eng marks is:56   
sci marks is:96   
maths marks is:78 
total marks is:230
*/