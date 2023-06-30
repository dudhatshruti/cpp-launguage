#include<iostream>
using namespace std;
class test{
    int car_id;
    int marks;
    public:
    static int member;
    test(){
        cout<<"enter car id:";
        cin>>car_id;
        cout<<"enter car marks:";
        cin>>marks;
        member++;
    }
    void display(){
        cout<<"car id:"<<car_id<<endl;
        cout<<"car remrks:"<<marks<<endl;
    }
};
int test::member = 10;
int main(){
    cout<<"stage member is:"<<test::member<<endl;
    test t1, t2,t3;
    t1.display();
    t2.display();
    t3.display();
    cout<<"final stage member:"<<test::member<<endl;
}