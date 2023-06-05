#include<iostream>
using namespace std;
class batsman{
    int bcode,batavg;
    char bname[20];
    float runs,innings,notout;
    int calcavg(){
        return runs/(innings-notout);
    }

    public:
   void readdata(){
        cout<<"enter bcode:";
        cin>>bcode;
        cout<<"enter name:";
        cin>>bname;
        cout<<"enter inning:";
        cin>>innings;
        cout<<"enter notout:";
        cin>>notout;
        cout<<"enter runs:";
        cin>>runs;
        batavg = calcavg();
    }

    void displaydata(){
        cout<<"bcode is:"<<bcode<<endl;
        cout<<"bname is:"<<bname<<endl;
        cout<<"innings is:"<<innings<<endl;
        cout<<"notout is:"<<notout<<endl;
        cout<<"runs is:"<<runs<<endl;
        cout<<"batavg is:"<<batavg<<endl;
    }
};
int main(){
    batsman a;
    a.readdata();
    a.displaydata();
}

/*output :-
bcode is:32
bname is:jhu
innings is:85
notout is:20
runs is:1000
batavg is:15
*/