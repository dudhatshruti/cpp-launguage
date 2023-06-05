#include<iostream>
using namespace std;
class student{
    public:
    int rollno,math, sci, eng, total;
    float per;
    char grad;
        
    void setdata()
    {
        cout<<"Etnter a Roall no. : ";
        cin>>rollno;
        cout<<"Etnter math mark : ";
        cin>>math;
        cout<<"Etnter science mark : ";
        cin>>sci;
        cout<<"Etnter English mark : ";
        cin>>eng;

    }
    void calc()
    {
        total = math + sci + eng;
        per = (float)total/3;

        if(math<=32 || sci<=32 || eng<=32){
            grad = 'F';
        }else if(per>=90 && per<=100){
            grad = 'A';
        }else if(per>=70 && per<=89){
            grad = 'B';
        }else if(per>=55 && per<=69){
            grad = 'C';
        }else if(per>=54 && per<=33){
            grad = 'D';
        }else{
            grad = 'F';
        }

    }
    void getdata()
    {
        cout<<"Roll No \t"<<"Math \t"<<"Science \t"<<"English \t"<<"Total \t"<<"Percantege \t"<<"Grad \n";
        cout<<rollno<<"\t\t"<<math<<"\t"<<sci<<"\t\t"<<eng<<"\t\t"<<total<<"\t"<<per<<"\t\t"<<grad<<"\n";
    }
};
int main()
{
    student result;
    result.setdata();
    result.calc();
    result.getdata();
}