#include<iostream>
using namespace std;
template<class t>
void display(t t1){
    cout<<"display templete:"<<t1<<endl;
}
template<class x, class y>
void display(x a, y b){
    cout<<"displaying templete:"<<a<<"\t"<<b<<endl;
}
void addition(x a, y b){
    cout<<"displaying templete:"<<a+b<<endl;
}

int main(){
    display(200);
    display(12,34);
    display('s');
    display('x',25);
    addition('a',25.5);
}