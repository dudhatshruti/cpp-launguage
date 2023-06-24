#include<iostream>
using namespace std;
class bank{
    int bal;
    string name;
    public:
    void setdata(int bal , string name)
    {
        this -> bal  =  bal;
        this -> name = name;
    }

    void getdata()
    {
        cout<<"name :"<<name<<endl;
        cout<<"balance :"<<bal<<endl;
    }
};

int main()
{
    bank x;
    x.setdata(10000 , "skill");
    x.getdata();
}

/* output :-
name :skill
balance :10000
*/

