#include<iostream>
using namespace std;
int maths,sci,eng,total,grad,fail,a,b,c,d;
float percentage;
void per()
{
    if (maths<33 || sci<33 || eng<33)
    {
        cout<<"\n"<<fail;
    }
    else if(percentage>=75)
    {
         cout<<"\t"<<a;
    }
    else if(percentage>=60 && percentage<=75)
    {
        cout<<"\t"<<b;
    }
    else if(percentage>=45 && percentage<=60)
    {
         cout<<"\t"<<c;
    }
    else if(percentage>=35 && percentage<=45)
    {
       cout<<"\t"<<d;
    }
}
void display()
{
   cout<<"maths \tscience  english  total  per  \tgrad\n";
   cout<<" "<<maths;
   cout<<" \t "<<sci;
   cout<<" \t  "<<eng;
   cout<<" \t  "<<total;
   cout<<" \t "<<percentage;
//    cout<<" \t  "<<grad;
}
void calc()
{
    total= maths+sci+eng;
    percentage=(float)total/3;
}
void setdata()
{
    cout<<"enter maths marks:";
    cin>>maths;
    cout<<"enter sci marks:";
    cin>>sci;
    cout<<"enter eng marks:";
    cin>>eng;
    
}
int main()
{
    setdata();
    calc();
    display();
    per();
}

