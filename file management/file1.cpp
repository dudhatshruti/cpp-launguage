#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream filestream("abc.txt");
    if(filestream.is_open())
    {
        filestream<<" wel-come to skillqode";
        filestream<<"\n we started new lab";
        filestream<<"\n we started new branches";
        filestream.close();
    }
    else
    cout<<"file opening is fail";
    return 0;
}


