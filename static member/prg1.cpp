/*

We can define class members static using static keyword. When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member.

A static member is shared by all objects of the class. All static data is initialized to zero when the first object is created, if no other initialization is present. We can't put it in the class definition but it can be initialized outside the class as done in the following example by redeclaring the static variable, using the scope resolution operator :: to identify which class it belongs to.
*/


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