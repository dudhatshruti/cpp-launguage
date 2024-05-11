/*
A template is a simple yet very powerful tool in C++. The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types.

C++ adds two new keywords to support templates: ‘template’ and ‘type name’. The second keyword can always be replaced by the keyword ‘class’.
*/


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

template<class x, class y>
void addition (x a, y b){
    cout<<"displaying templete:"<<a+b<<endl;
}

int main(){
    display(200);
    display(12,34);
    display('s');
    display('x',25);
    addition('a',25.5);
}